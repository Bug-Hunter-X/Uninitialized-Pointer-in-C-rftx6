# Uninitialized Pointer in C

This repository demonstrates a common error in C programming: using an uninitialized pointer.  Uninitialized pointers can lead to unpredictable behavior, crashes, and security vulnerabilities.

The `bug.c` file contains the erroneous code. The `bugSolution.c` file shows the corrected version.

## Running the Code

Compile and run the code using a C compiler (like GCC):

```bash
gcc bug.c -o bug
./bug
gcc bugSolution.c -o bugSolution
./bugSolution
```