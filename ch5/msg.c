#include <stdio.h>

int main(void) {
    char amsg[] = "May the force be with you."; // array
    char *pmsg = "May the force be with you."; // pointer
    // You can do:
    amsg[8] = 'F';
    pmsg += 8;
    // You can't do:
    // amsg += 8;
    // *(pmsg + 8) = 'F';
    printf("amsg: %s\n", amsg);
    printf("pmsg: %s\n", pmsg);
    return 0;
}