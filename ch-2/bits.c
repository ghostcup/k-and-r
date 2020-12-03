#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);
unsigned invert(unsigned x, int p, int n);
unsigned rightrot(unsigned x, int n);

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    return x & ~(~(~0 << n) << (p + 1 - n)) |
        (y & ~(~0 << n)) << (p + 1 - n);
}

unsigned invert(unsigned x, int p, int n) {
    return x ^ (~(~0 << n) << (p + 1 - n));
}

int wordlength(void) {
    int i;
    unsigned v = (unsigned) ~0;

    for (i = 1; (v = v >> 1) > 0; ++i)
        ;
    
    return i;
}

unsigned rightrot(unsigned x, int n) {
    int wordlength(void);

    while (n-- > 0) {
        x = x >> 1 | (x & 1) << (wordlength() - 1);
    }

    return x;
}