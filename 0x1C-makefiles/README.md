# Project : 0x1C. C - Makefiles

Make utility Runs and compile the programs more efficiently with handy automation tool.
The makefile is a text file that contains the recipe for building your program. 
It usually resides in the same directory as the sources, and it is usually called Makefile .
Each one of these commands should be a separate rule in a makefile.

## Requirements

- Allowed editors: vi, vim, emacs
- OS: Ubuntu 20.04 LTS
- Version of gcc: 9.3.0
- Version of make: GNU Make 4.2.1
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory

## Install make on Ubuntu

* Step 1: Firstly, we will update our operating system by using the below command.
```
sudo apt update
```
* Step 2: Check if make is already installed or not.
```
make -version
```
* Step 3: Enter the below command to install the make package.
```
sudo apt install make
```
* Step 4: After installing, we will check the make directory on our system in order to use the make package.
```
ls /usr/bin/make
```

## Tests Cases :

* [tests](./tests): Folder of test files.

## More Info
## Important Files :
In the task we are going to use the following [files](https://github.com/holbertonschool/0x1B.c)

* [school.c](./school.c): C function that displays a seahorse in text.
Used for Makefile practice purposes throughout project.

* [main.c](./main.c): Main C function that runs the function defined in
[school.c](./school.c).

## Important Header File :

* [m.h](./m.h): Header file defining the function prototype used in `school.c`.

## Tasks :

* **0. make -f 0-Makefile**
  * [0-Makefile](./0-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Includes:
    * Rule `all` that builds the executable.

* **1. make -f 1-Makefile**
  * [1-Makefile](./1-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [0-Makefile](./0-Makefile)
  with:
    * Variable `CC` that defines the compiler to be used.
    * Variable `SRC` that defines the `.c` files to compile.
    * The `all` rule only recompiles updated source files.

* **2. make -f 2-Makefile**
  * [2-Makefile](./2-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [1-Makefile](./1-Makefile)
  with:
    * Variable `OBJ` that defines the `.o` files to compile.
    * Variable `NAME` that defines the name of the executable.

* **3. make -f 3-Makefile**
  * [3-Makefile](./3-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [2-Makefile](./2-Makefile)
  with:
    * Rule `clean` that deletes all Emacs/Vim temporary files as well as the
    executable.
    * Rule `oclean` that deletes the object files.
    * Rule `fclean` that deltes all of the temporary files, executable, and
    object files.
    * Rule `re` that forces recompilation of all source files.
    * Variable `RM` that defines the command to delete files.

* **4. A complete Makefile**
  * [4-Makefile](./4-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [3-Makefile](./3-Makefile)
  with:
    * Variable `CFLAGS` that defines the compiler flags `-Wall -Werror -Wextra
    -pedantic`.

* **5. Island Perimeter**
  * [5-island_perimeter.py](./5-island_perimeter.py): Python function that returns the
  perimeter of an island defined in a grid.
  * Prototype: `def island_perimeter(grid):`
  * The parameter `grid` is a list of a list of integers.
    * Water is represented by `0`.
    * Land is represented by `1`.
    * Each element of the lists represents a cell square of side length 1.
    * Grid cells are connected horizontally/verticaly (not diagonally).
    * The grid is rectangular, with a width and height not exceeding 100.
    * The grid is completely surrounded by water, and there is either exactly
    one island or nothing.
    * The island does not contain lakes (water inside disconnected from
    surrounding land).

* **6. make -f 100-Makefile**
  * [100-Makefile](./100-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [4-Makefile](./4-Makefile)
  with:
    * Does not define the variable `RM`.
    * Never uses the string `$(CFLAGS)`.
    * Does not compile if the header `m.h` is missing.
    * Works even if there are existing files of the same name as any of the
    Makefile rules in the current directory.
