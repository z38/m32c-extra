# m32c-extra

**m32c-extra** includes a few header files to ease development for Renesas R8C/M16C/M32C chips with GCC.

## Installation

To use the additional header files just add the `include/` directory to your search path.

```bash
m32c-elf-gcc -I/path/to/m32c-extra/include [...]
```

## SFR

Currently the SFR and interrupt definitions of the following chips are included:

* M16C/62P (`m32c/iom16c62p.h`)

## Interrupts

After including `m32c/interrupt.h` you can write simple statements like this (similar to `avr-libc`):

```c
#include <m32c/interrupt.h>

ISR(INT0_vect) { // is called on INT0 interrupt
    // do some fancy stuff
}
```

## Contributing

If you want to get your hands dirty, great! Just send me a pull request and/or **open a new issue report** so that I or others may take care of it.
