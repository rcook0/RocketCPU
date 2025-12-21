# SPAD64 UAPI (userspace contract)
Stable userspace header for SPAD char device `/dev/yourcorp_spad<N>`.

- `YC_SPAD_IOC_ALLOC` — alloc window (driver returns int index)
- `YC_SPAD_IOC_COPY`  — copy host<->spad using `yc_spad_copy`
- `YC_SPAD_IOC_WAIT`  — wait with timeout (ms)

Place at `chiplets/spad64/yourcorp_spad_uapi.h` in repo.
