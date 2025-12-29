#pragma once
#include <linux/ioctl.h>
#include <stdint.h>
#define YC_SPAD_IOC_MAGIC 'S'
#define YC_SPAD_IOC_ALLOC _IOW(YC_SPAD_IOC_MAGIC, 1, int)
#define YC_SPAD_IOC_COPY  _IOW(YC_SPAD_IOC_MAGIC, 2, int)
#define YC_SPAD_IOC_WAIT  _IOR(YC_SPAD_IOC_MAGIC, 3, int)
struct yc_spad_copy {
    uint32_t window;
    uint64_t host_addr;
    uint32_t spad_off;
    uint32_t bytes;
    uint32_t flags;
} __attribute__((packed));
enum { YC_SPAD_COPY_H2S = 0, YC_SPAD_COPY_S2H = 1 };
