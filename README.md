# Activity 2: Crash Course on C

## Put Name(s) here
Folder: `activities_c_practice`

This is an introduction to 

* C programming basic constructs
* The representation of C integer data types


You will complete several tasks that ask you to practice with writing C code, 
including looking at how C on the server represents integer data.

- You will create a function to do a simple calculation, practicing with numbers, 
conditionals, `assert`, and `printf`
- You will create a function to experiment with C loop forms
- You will create a function to print the size in bytes of each C integer type, 
and to print the min and max values for each type
	- unsigned char, unsigned short, unsigned int, unsigned long
	- char, short, int, long
	
**Hint:** At the bottom of this README is a section called References that 
contains references to resources that can help you with these questions

## Provided Code

There is one code file for this activity, as well as a Makefile:

- `activity2.c`
    - the source file which contains the main function, in which you will 
    complete your tasks
- `Makefile`
    - a short makefile to automate the compilation process

**Open the file `activity2.c` and read it carefully.**

Notice that it has declarations of functions at the top of the file, followed 
by the main program, and then the function definitions 
themseles. There are "TODO" comments in the file to help guide you in this 
activity.

**Open the file `Makefile` and read it carefully.**

Recall that the Makefile defines how we compile our source code into an 
executable program, automating the process for us.

- At the top of the Makefile, we define the compiler we want to use, with one 
option, which chooses which variant of C to use (C99).
- The next line specifies a *target* (the text before a colon), and the files 
it depends on (listed after the colon). 
    - The target is the file that will be generated, in this case the name of 
    the executable (`try_c`)
    - The dependency files are the files that will be used to build the 
    executable; if one of the dependency files has been modified, calling 
    `make` with the given target will cause it to rerun the steps
- The indented line or lines that follow specify terminal commands to use to 
create the executable; in this case we call the compiler
- The first target in a file is the "default" target; when you call `make` by 
itself the default is checked and run (if necessary)

    make

The above command is the same as if you had typed:

	make try_c

You will execute the program by typing this in the terminal:

	./try_c

**Try these commands in the terminal, and see what they do. What happens if you 
run `make` two times in a row?**

When coding in C, you will do this over and over again in the terminal as you 
make changes to your code: 

	make 
	./try_c
	
Remember that you can retrieve previous commands at the linux terminal shell by
using the up arrow key many times. **Try using the arrow keys now.**

## Your tasks

### First Steps
- Open `activity2.c` in your editor
- Add your name(s) in a comment at the top of the file. You must put your name at 
the top of every code file you edit for assignments for this course (you will 
lose points on homework questions if you don't!)
- Also, add your name(s) to this README document: Some of you have Github usernames that
are very different from your actual names. This makes it easier to know quickly who is who! 


### Task 1: A simple "sales tax" example

- Look for the definition of the `sales_example` function in `activity2.c`. 
- Note how the function takes in 3 inputs: the cost per item, the number of 
items, and the sales tax rate.
- In the function, do the following:
    - Declare and define a variable to hold the total pre-tax amount to be paid 
    (cost times number)
    - Declare and define a variable to hold the total cost after incorporating 
    sales tax
    - Add an `if` statement to check if the sales tax rate is 0.0; it should 
    print a message that no sales tax applies if this is the case
    - Regardless of the outcome of the `if` statement, return the total cost 
    calculated
- Examine the call to `sales_example` in `main`; compile and run the program, 
checking that the output is correct
- Try a range of other values to ensure the correct result is returned each time
- Incorporate the `assert` statement to automatically check for correct results,
testing at least 4 different scenarios

### Task 2: Experimenting with loops

- Near the top of the file, add a declaration of a function called 
`loop_example` that returns nothing and that has no input parameters
- In the main function, add a call to your new function
- In the space provided below the main function, put in your definition of 
`loop_example`
    - First, write a simple `for` loop that loops over the integers from 10 to 
    25, going up by 5 each time, and it prints the integer and the square of the 
    integer each time
    - Next, add a `while` loop that does the same thing
    - Finally, add a `do-while` loop that does the same thing


### Task 3: Exploring sizes and ranges for unsigned integer types

- Read the starter code for the `utype_sizes` function: it prints a constant 
from the `limits.h` library for the maximum value of 
the `unsigned char` integer type, and it prints the number of bytes used by an 
`unsigned char`
- Using the resources listed in the References section below, research how to 
display a value of each of the three additional types we are examining: 
`unsigned short`, `unsigned int`, and `unsigned long`
- Also research the min/max constants provided by the `limist.h` library
- Add print statements for the three additional types, printing the
maximum value for that type, and its number of bytes

**Edit the table below to record the values you found!**

| Type              | Max value  | Number Bytes |
| :-------------:   | :-------:  | :----------: |
| `unsigned char`   |            |              |
| `unsigned short`  |            |              |
| `unsigned int`    |            |              |
| `unsigned long`   |            |              |


### Task 4: Exploring sizes and ranges for signed integer types
- Near the top of the file, add a declaration for `stype_sizes`
- In the `main` function, add a call to `stype_sizes`
- In the space below `main`, add a definition of `stype_sizes`
    - Base this on `utype_sizes`: four print statements
    - Include the minimum as well as the maximum in each print statement
    - Research the different codes needed for signed integers

**Edit the table below to record the values you found!**

| Type     | Min value  | Max value  | Number Bytes |
| :----:   | :--------: | :--------: | :----------: |
| `char`   |            |            |              |
| `short`  |            |            |              |
| `int`    |            |            |              |
| `long`   |            |            |              |


### Notes 

- The macro `sizeof(TYPE)` returns the number of bytes used for a particular
  data type by the compiler on the particular hardware where the program is
  compiled and run. The `%zu` code is used to print the result of `sizeof`!

### Feeling stuck or confused?

Ask for help right away from neighbors, preceptors, or instructor!


### Commenting as documentation

You should comment each function you write like you would for Java:

	/** Describe inputs and return values and 
	 * what the function does -- this comment
	 * must start with /**, just like 
	 * javadoc comments
	 */

## References

- Makefile guides
  - [An Introduction to Makefiles](https://www.gnu.org/software/make/manual/html_node/Introduction.html), by GNU
  - [Makefile Tutorials and Examples to Build From](https://earthly.dev/blog/make-tutorial/), by Aniket Bhattacharyea
  - [makefile basics - anthony explains](https://www.youtube.com/watch?v=20GC9mYoFGs)
- General C syntax help
  - [Chapter 1 of _Dive into Systems_](https://diveintosystems.org/book/C1-C_intro/index.html)
  - _The C Programming Language_, often just known as K&R for Kernighan and Ritchie
  - _C: A Reference Manual_, by Harbison and Steele
- The `assert` statement
  - [assert reference from cplusplus.com](https://cplusplus.com/reference/cassert/assert/?kw=assert)
- Printf formatting codes
  - [printf format specifier reference from cplusplus.com](http://www.cplusplus.com/reference/cstdio/printf/).
  - [_Format Specifiers in C_](https://www.thecrazyprogrammer.com/2016/10/format-specifiers-c.html) by The Crazy Programmer
- Limit constants
  - [_C Programming/limits.h](https://en.wikibooks.org/wiki/C_Programming/limits.h)
  - [limits.h reference in tutorialspoint](https://www.tutorialspoint.com/c_standard_library/limits_h.htm)
