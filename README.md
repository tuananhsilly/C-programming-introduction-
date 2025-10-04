# C programming introduction

This small collection of C examples is intended as a review of basic C syntax and to demonstrate simple algorithms implemented in C.

Goals
- Reinforce core C language concepts: types, control flow, functions, arrays, pointers, and I/O.
- Practice implementing simple algorithms (search, sort, string manipulation, basic file I/O).
- Provide small, focused examples that are easy to compile and run locally.

Structure
- Each example is in its own directory or C source file. Look through the folders and files in this repository for examples such as loops, conditional statements, data types, and simple network/client-server programs.

Quick compile & run
1. Compile a single file with gcc:

```bash
gcc -o program Example.c
./program
```

2. If a program requires multiple sources:

```bash
gcc -o program file1.c file2.c
./program
```

Notes
- These examples are intended for learning and local testing. They don't aim to be production-ready. Use warnings and -Wall to help find issues:

```bash
gcc -Wall -Wextra -o program Example.c
```

If you'd like, I can add a table of contents listing the examples and a short description for each file in the repository.