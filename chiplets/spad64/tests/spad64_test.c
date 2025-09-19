\
/*
 * spad64_test.c — simple user-space test for /dev/spad64
 *
 * Opens the device, writes a string, reads it back, then mmaps
 * the first page and pokes values directly.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <errno.h>

#define TEST_STR "Hello from user-space SPAD64!\n"

int main(void) {
    int fd = open("/dev/spad64", O_RDWR | O_SYNC);
    if (fd < 0) {
        perror("open");
        return 1;
    }

    // Write a test string
    ssize_t w = write(fd, TEST_STR, strlen(TEST_STR));
    if (w < 0) {
        perror("write");
        close(fd);
        return 1;
    }
    printf("Wrote %zd bytes to /dev/spad64\n", w);

    // Rewind and read back
    lseek(fd, 0, SEEK_SET);
    char buf[128] = {0};
    ssize_t r = read(fd, buf, sizeof(buf)-1);
    if (r < 0) {
        perror("read");
        close(fd);
        return 1;
    }
    printf("Read back %zd bytes: %s\n", r, buf);

    // mmap first 4 KiB of SPAD64
    void *map = mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0);
    if (map == MAP_FAILED) {
        perror("mmap");
        close(fd);
        return 1;
    }
    volatile unsigned int *words = (unsigned int*)map;
    words[0] = 0xDEADBEEF;
    printf("Wrote 0xDEADBEEF via mmap, read back 0x%X\n", words[0]);

    munmap(map, 4096);
    close(fd);
    return 0;
}
