#include <stdio.h>

int foo(void) {
    static int i;
    i++;
    return i;
}

int main(void) {
    int n = 4;
    for (int i = 0; i < n; ++i) {
        printf("%d", foo());
        printf((i < n - 1) ? " " : "");
    }
    
    return 0;
}