#ifndef PAL_LINUX_DEFS_H
#define PAL_LINUX_DEFS_H

#define THREAD_STACK_SIZE (PRESET_PAGESIZE * 512)  /* 2MB untrusted stack */
#define ALT_STACK_SIZE    (PRESET_PAGESIZE * 16)   /* 64KB untrusted signal stack */
#define RPC_STACK_SIZE    (PRESET_PAGESIZE * 2)

#define ENCLAVE_HIGH_ADDRESS    0x800000000
#define SSAFRAMENUM         2
#define MEMORY_GAP          PRESET_PAGESIZE
#define ENCLAVE_STACK_SIZE  (PRESET_PAGESIZE * 64)
#define ENCLAVE_SIG_STACK_SIZE (PRESET_PAGESIZE * 16)
#define DEFAULT_HEAP_MIN    0x10000
#define TRACE_ECALL         1
#define TRACE_OCALL         1

#define DEBUG_ECALL         0
#define DEBUG_OCALL         0

#define TRUSTED_STUB_SIZE   (PRESET_PAGESIZE * 4UL)

//#define USE_AES_NI          1

#define PRINT_ENCLAVE_STAT  0

#define MAX_ARGS_SIZE       10000000
#define MAX_ENV_SIZE        10000000

#define RED_ZONE_SIZE       128

#endif /* PAL_LINUX_DEFS_H */
