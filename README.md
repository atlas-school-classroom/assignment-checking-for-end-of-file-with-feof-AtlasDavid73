[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/-FqgQx_U)
# Assignment: Checking for End-of-File with `feof()`

## Introduction

In this assignment, you will implement functionality to check whether a file pointer has reached the end of a file. This is done using the `feof()` function in C, which is crucial for file reading operations. Understanding how to use `feof()` effectively ensures that you read file contents without running into issues like infinite loops or accessing invalid memory.

### Starter Files

For this assignment, create a file entitled `checking_end_of_file.c`.

When finished, compile your code with:

```console
$ gcc checking_end_of_file.c -o checking_end_of_file
```

## Requirements

1. Use `fopen()` to open a file in read mode. Ensure proper error handling with `perror()` if the file cannot be opened.
2. Implement a loop to read the file content line by line using `fgets()`.
3. Use `feof()` to check if the end of the file has been reached and manage the file reading process accordingly.
4. Implement error handling for file reading operations using `ferror()` and `perror()`.
5. Ensure the file is closed properly using `fclose()` after reading.

### Sample Input and Output:

The input for this program is the `example.txt` file.

Contents of `example.txt`:

```text
Line 1: Hello World!
Line 2: Learning Error functions
Line 3: In File Operations
```

When `example.txt` is read by the program, the output will be:

```console
Line 1: Hello World!
Line 2: Learning Error functions
Line 3: In File Operations
```

## Conclusion

In this assignment, you successfully learned how to use the `feof()` function to check for the end-of-file condition in a file stream. You also gained experience in managing file operations, error handling, and understanding file reading loops. Mastery of these concepts is fundamental for developing robust file-processing applications in C.
