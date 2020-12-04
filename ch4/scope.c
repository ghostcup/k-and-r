// distinguish declaration & definition
/* 
** declaration: specify variable's type
** definition: besides, memory's allocation
*/

// Demonstration of Binding
// definition in file1.c
#define MAXVAL 10000
int sp = 0;
double val[MAXVAL];
// declaration in file2.c
extern int sp;
extern double val[]; // doesn't need array's size