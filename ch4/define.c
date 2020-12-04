#include <stdio.h>

#define paste(front, back) front ## back
#define swap(t, x, y) { t tmp = x; x = y; y = tmp;}

int main(void) {
    int paste(name, 1) = 42;
    printf("%d\n", name1);
    
    int a, b;
    a = 0, b = 1;
    swap(int, a, b);
    printf("(a, b) = (%d, %d)", a, b);
    return 0;
}