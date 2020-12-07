In C, a function per se is not a variable, but we can define a pointer pointing to a function.

To demonstrate, we declare a `qsort` function that takes a function pointer as parameter.

```c
void qsort(void *lineptr[], int l, int r, int (*comp)(void *, void*));
```

<br>

We call it in this way:

```c
qsort((void **) lineptr, 0, n - 1, 
     (int (*) (void *, void *))(numeric ? numcmp : strcmp));
```

`lineptr` is declared as `char *lineptr[MAXLINES]`, which is an array of pointers pointing to the text lines. While calling `qsort`, it casts to a universal type of pointer namely `void **` because the back-and-forth casting would not make information lost. And, it makes this version of `qsort` able to handle different data types.

<br>

```c
int (*comp)(void *, void *)
```

It represents `comp` is a pointer pointing to a function which has 2 parameters in type of `void *` and returns an `int`. In the calling step, we use the ternary logical expression to determine which function to apply, and cast it to fit the type of `int (*) (void *, void *)`.