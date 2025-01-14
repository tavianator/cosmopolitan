#ifndef COSMOPOLITAN_LIBC_CALLS_BLOCKCANCEL_H_
#define COSMOPOLITAN_LIBC_CALLS_BLOCKCANCEL_H_
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

#define BLOCK_CANCELATION \
  do {                    \
    int _CancelState;     \
  _CancelState = _pthread_block_cancelation()

#define ALLOW_CANCELATION                   \
  _pthread_allow_cancelation(_CancelState); \
  }                                         \
  while (0)

int _pthread_block_cancelation(void);
void _pthread_allow_cancelation(int);

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_CALLS_BLOCKCANCEL_H_ */
