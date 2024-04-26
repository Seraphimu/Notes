### C Memory Address

When a variable is created in C, a memory address is assigned to the variable.

The memory is location of where the variable is stored on the computer.

When we assign a value to the variable, it is sotred in this memory address.

To access it, use the reference operator (`&`), and the result represents where the variable is stored:

```c
int myAge = 114514;
printf("%p\n", &myAge); //Outputs address of myAge
```

*Note*: The memory address is in hexadecimal form. You will probably not get the same result in your program, as this depends on where the variable is stored on your computer.

You should also note that `&myAge` is often called a "pointer". A pointer basically stores the memory of a variable as its value. To print pointer values, we use the `%p` format specifier.

Why is it useful to know the memory address?

Pointers are important in C, because they allow us manipulate(vt.操作) the data in the computer's memory - this can reduce the code and improve the performance. 

Pointers are one of the things that make C stand out from (脱颖而出) other programming languages, like Python and Java.