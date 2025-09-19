# Initramfs for YourCorp SoC

This directory provides a minimal initramfs with an `/init` script that:
- Mounts `/proc` and `/sys`
- Waits for `/dev/spad64` to appear
- Writes a test string into SPAD64 and reads it back
- Drops to a shell

## Build an initramfs
```bash
cd build/initramfs
find . | cpio -H newc -o | gzip > ../initramfs.cpio.gz
```

Pass to the kernel with:
```
initrd=/path/to/initramfs.cpio.gz
```
