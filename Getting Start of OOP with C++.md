### What is Classes and Objects

Class is a template for objects, and an object is an instance of a class.

When the individual objects are created, they inherit (extend) all the variable and functions from the class.

Look at the following illustration to see the difference between class and objects:

```c++
class Fruit {		//template
    //some attributes (variables) and methods (functions) of Fruit
}
Fruit apple, banana, mango;	//inherit
```

A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

#### Create a Class

To create a class, use the `class` keyword:

> Example
>
> Create a class called "My Cass"
>
> ```c++
> class MyClass {			//The class
>     public:				//Access specifier
>     	int myNum;		//Attribute (int variable)
>     	string myString;//Attribute (string variable)
> }
> ```

