#ifndef _M32C_EXTRA_INTERRUPT_H
#define _M32C_EXTRA_INTERRUPT_H

#include <varvects.h>

#define _VECTOR(no) no
#define ISR(no) _ISR(no)
#define _ISR(no) static void __attribute__((interrupt)) _m32c_isr_ ## no (void); \
    __attribute__((constructor)) void _m32c_isr_init_ ## no (void) { _set_var_vect(_m32c_isr_ ## no, no); } \
    static void __attribute__((interrupt)) _m32c_isr_ ## no (void)

inline void cli() {
    asm("fclr I");
}

inline void sei() {
    asm("fset I");
}

#endif
