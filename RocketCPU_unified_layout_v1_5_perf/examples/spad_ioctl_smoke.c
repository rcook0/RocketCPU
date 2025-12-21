#include "yourcorp_spad_uapi.h"
#include <fcntl.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    int fd = open("/dev/yourcorp_spad0", O_RDWR);
    if (fd < 0) { perror("open"); return 0; }
    int win = 0;
    ioctl(fd, YC_SPAD_IOC_ALLOC, &win);
    struct yc_spad_copy c = { .window=win, .host_addr=0, .spad_off=0, .bytes=64, .flags=YC_SPAD_COPY_H2S };
    ioctl(fd, YC_SPAD_IOC_COPY, &c);
    int ms = 100;
    ioctl(fd, YC_SPAD_IOC_WAIT, &ms);
    close(fd);
    return 0;
}
// build: gcc -Wall -Wextra -c examples/spad_ioctl_smoke.c -Ichiplets/spad64
