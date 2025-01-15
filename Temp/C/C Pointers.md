### C Pointers

---

#### Creating Pointers

A *pointer* is a varialbe that stores the memory address of another variable as its value.

A *pointer variable points* to a data type of the same type, and is created with the `*` operator.

```c
int myAge = 114514;     //An int variable
int * ptr = &myAge;     //A pointer variable, with the name ptr, that stores the address of myAge
printf("%d\n", myAge);  //Output the value of myAge
printf("%p\n", &myAge); //Output the memory address of myAge
printf("%p\n", ptr);    //Output the value of ptr (the memory address of myAge with the pointer)
```

Example explained

Create a pointer variable with the name `ptr`, that points to an `int` variable (`myAge`).

Note that the type of pointer has to match the type of the variable you're working with (`int` in our example).

Use the `&` operator to store the memory address of the `myAge` variable, and assign it to the pointer.

Now, `ptr` holds the value of `myAge`'s memory address.

---

#### Dereference

In the example above, we used the pointer variable to get the memory address of a variable (used together with the `&` reference operator).