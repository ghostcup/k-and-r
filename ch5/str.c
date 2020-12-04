void strcpy(char *s, char *t) {
    while (*s++ = *t++)
        ;
}

int strcmp(char *s, char *t) {
    for ( ; *s == *t; s++, t++) {
        if (*s == '\0') {
            return 0; // equal
        }
    }
    return *s - *t;
}

// push
*p++ = val;
// pop
val = *--p;