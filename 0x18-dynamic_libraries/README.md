# Dynamic Libraries Project

This project focuses on dynamic libraries in the C programming language, covering concepts such as creation, usage, integration with other languages, and advanced techniques like code injection. Below are the tasks and their descriptions:

## Task 0: A library is not a luxury but one of the necessities of life

### Description:
Create a dynamic library named `libdynamic.so` containing various functions for character and string manipulation, mathematical operations, and more. The objective is to understand dynamic libraries, their creation, and usage in C programming.

### Requirements:
- Functions should be implemented in C.
- Use allowed editors: vi, vim, emacs.
- Compilation should be done on Ubuntu 20.04 LTS using gcc with specific options.
- Follow Betty style for coding.
- No global variables allowed.
- Prototypes of functions should be included in `main.h`.
- Use `_putchar` function instead of standard library functions.
- Don't forget to push `main.h` to the repository.

### Files:
- `libdynamic.so`: Dynamic library containing listed functions.
- `main.h`: Header file with function prototypes.

## Task 1: Without libraries what have we? We have no past and no future

### Description:
Create a bash script `1-create_dynamic_lib.sh` to generate a dynamic library `liball.so` from all `.c` files in the current directory. This automates the process of creating dynamic libraries, promoting code organization and reuse.

### Steps:
- Identify all .c files in the current directory.
- Compile each .c file into an object file.
- Link all object files together to create the dynamic library liball.so.
### Validation:
After running the script, validate the creation of the dynamic library by examining its symbols using nm -D --defined-only liball.so.

### Files:
- `1-create_dynamic_lib.sh`: Bash script to create dynamic library.

## Task 2: Let's call C functions from Python

### Description:
Create a dynamic library `100-operations.so` containing C functions that can be called from Python. The provided Python script `100-tests.py` demonstrates invoking these functions to perform basic arithmetic operations.

### Functions:
The C functions included in the library:

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

### Python Integration:
The Python script imports the ctypes module to access the C functions from the dynamic library and performs arithmetic operations using random numbers.

### Files:
- `100-operations.so`: Dynamic library with C functions.
- `100-tests.py`: Python script showcasing integration with C functions.

## Task 3: Code injection: Win the Giga Millions!

### Description:
Implement code injection using a shell script `101-make_me_win.sh` to potentially win the Giga Millions jackpot. This involves exploiting runtime behavior of the Giga Millions program without modifying it directly.

### Objective:
Manipulate the behavior of the Giga Millions program to make the user win the jackpot by injecting code at runtime. The restrictions include not modifying the program itself and executing only two commands from the shell script.

### Approach:
Utilize the LD_PRELOAD environment variable to load a custom dynamic library that overrides certain functions used by the Giga Millions program, ensuring a favorable outcome.

### Files:
- `101-make_me_win.sh`: Shell script for code injection.

These tasks provide practical experience with dynamic libraries and advanced techniques, enhancing your skills in software development.
