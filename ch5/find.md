semantical difference between `(*++argv)[0]` (1) and  `*++argv[0]` (2)

1. `argv` self-increasing, dereferencing to be a string (an argument), and returning the first element of the string
2. `argv[0]` self-increasing

The critical point is that the priority of `[]` operator is higher than both `*` and `++`.