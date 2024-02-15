## C# Tutorial(Notes)

### What is C#?

- C# is pronounced "C-Sharp".
- C# (C-Sharp) is a object-oriented programming language developed by Microsoft that runs on the .NET Framework.
- C# is used to develop web apps, desktop apps, mobile apps, games and much more.
- C# has roots from the C family, and the language is close to other popular languages like C++ and Java.
- The first version was released in year 2002. The C# 12, was released in November 2023.

### Why use C#?

- It is one of the most popular language in the world.
- It is easy to learn and simple to use.
- It has a huge community support.
- C# is an object oriented language which gives a clear structure to programs and allows codes to reused, lowering development costs.
- As C# is close to C, C++ and Java, it makes it easy for programmers to switch to C# or vice versa.

### C# Syntax

```csharp
//The first program in C Sharp:
using System;
namespace HelloWorld
{
	class Program
    {
        static void Main(string [] args)
        {
            Console.WriteLine("Hello, World!\n");
        }
    }
}
```

1. `using System` means that we can use classes from the `System` namespace.
2. A blank line. C# ignores white space. However, multiple lines **make the code more readable**.
3. namespace is used to organize your code, and it is a container for other namespaces and classes.
4. The curly braces  `{}` marks the beginning and the end of a block of code.
5. class is a container for data and methods.
6. Main() method always appear in a C# program. Any code inside its curly brackets `{}` will be executed. 
7. Console is a class of the System namespace, which has a WriteLine() method that is used to output text.
8. If we omit the `using System;`, we should to write `System.Console.WriteLine()` to output text.
9. Every C# statement ends with a semicolon(`;`).
10. C# is case-sensitive.
11. the name of the C# file does not have to match the class name, but they often do.

### C# Output

To output values or output text in C#, you can use the `WriteLine()` method.

```c#
Console.WriteLine("Hello, World!\n");
```

`Write()`  method is similar to `WriteLine()` method.

`Write()`  method can insert a new line at the end of the output automatically.

It is difference to `WriteLine()` method is that it does not insert a new line at the end of the output.

code:

```c#
using System;
namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello, World!");
            Console.Write("Hello, World!");
            Console.Write("I will print on the same line.");
        }
    }
}
```

### C# Comments

Comments can be used to explain C# code, and to make it more readable. It also be used to prevent execution when testing alternative code.(It may be that prevent the code that you don't wish running)

Any text between `//` and the end of the line is ignored by C# (will not be executed).

1. single line comments

   ```c#
   class Test	//This is a class
   {
       //This is the Main method
       static void Main(string[] args)
       {
           Console.WriteLine("Hello, World!");
       }
   }
   ```

2. multi line comments

   ```c#
   /*
   1. This is a program that print a hello on this screen.
   2. This program is written by C#
   */
   class Test
   {
       static void Main(string[] args)
       {
           Console.WriteLine("Hello, World!");
       }
   }
   ```

   

### C# Variables

#### Variables are containers for storing data values.

- `int` - stores integers (whole numbers), without decimals(dot number), such as 123 or -123
- `double` - stores floating point numbers, with decimals, such as 19.99 or -19.99
- `char` - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
- `string` - stores text, such as "Hello World". String values are surrounded by double quotes
- `bool` - stores values with two states: true or false

#### Declaring (Creating) Variables

To create a variable, you must specify(say it clear) the type and assign it a value:

```c#
<type> <name> = <value>;
```

You can also declare a variable without assigning the value, and assign the value later:

```c#
<type> <name>;
<name> = <value>;
```

To create a variable that should store text, look at the following example:

```c#
//Example_1
string homoName = "田所浩二";
```

```c#
//Example_2
string homoName;
homoName = "田所浩二"
```

To create a variable that should store a number, look at the following example:

```c#
//Example_1
int homoId = 114514;
```

```c#
//Example_2
int homoAge;
homoId = 114514;
```

If you assign a new value to an existing variable, it will overwrite the previous value:

```c#
//Example
int homoId = 114514;
Console.WriteLine(homoId);
homoId = 1919810;
Console.WriteLine(homoId);
```

Other types is similar to the type of int and type of string:

```c#
//Example
bool myBool = false;
myBool = true;
char myChar = 'a';
myChar = 'B';
double myDouble = 114.514;
myDouble = 1919.810;
```

#### C# Constants

If you don't want others to overwrite existing values, you can add the 'const' keyword in front of the variable type.

This will declare the variable as "constant", which means unchangeable and read-only.

```c#
//Example
const int myConstNum = 114;
//The following is error in c#
//myConstNum = 514;
```

You cannot declare a constant variable without assigning the value. If you do, an error will occur: A const field requires a value to be provided.

#### C# Display Variables

The WriteLine() method is often used to display variable values to the console window.

To combine both text and a variable, use the `+` character:

```c#
string homoName = "田所浩二";
Console.WriteLine("Hello " + homoName);
```

You can also use the  `+` variable to another variable:

```c#
string firstName = "浩二";
string lastName = "田所";
string fullName = lastName + firstName;
Console.WriteLine(fullName);
```

For numeric values, the `+` character works as a mathematical operator(plus):

```c#
int x = 5;
int y = 6;
Console.WriteLine(x + y);	//Use WriteLine() method to display the value of x+y, which is 11;
```



#### C# Multiple Variables

Declare Many Variables:

To declare more than one variable of the same type, use a comma(`,`)-separated(alone) list:

```c#
int x = 5, y = 6, z = 50;
Console.WriteLine(x + y + z);
```

You can also assign the same value to multiple(more) variables in one line:

```c#
int x, y, z;
x = y = z = 50;
```

#### C# Identifiers(is similar to a flag)

All C# variables must be identified with unique names.

These unique names are called identifiers.

Identifiers can be short names or more descriptive(mean) names.

It is recommended to use descriptive names in order to create understandable and  code and to make the code more readable. (readable)

```c#
//Good
int age = 114514;
//Ok, but not easy to understand what a actually is
int a = 114514;
```

The general rules for naming variables are:

- Names can contain letters, digits and the underscore character(`_`);
- Names must begin with a letter or underscore;
- Names should start with a lowercase letter and it cannot contain whitespace;
- Names are case sensitive(myVar and myvar are different variables);
- Reserved words (like keywords, such as `int` or `double`) cannot be used as names.

### C# Data Types

A variable in C# must be a specified data type:

```c#
int myInt;
double myDoubleNum;
char myLetter;
bool myBool;
string myText;
```

A data type specifies the size and type of variable values.

It is important to use the correct data type for the corresponding variable; to avoid errors, to save time and memory, but it will also make your code more maintainable and readable. The most common data types are:

| Data Type | Size                  | Description                                                  |
| :-------- | :-------------------- | :----------------------------------------------------------- |
| int       | 4 bytes               | Stores whole numbers from -2,147,483,648 to 2,147,483,647    |
| long      | 8 bytes               | Stores whole numbers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| float     | 4 bytes               | Stores fractional numbers. Sufficient for storing 6 to 7 decimal digits |
| double    | 8 bytes               | Stores fractional numbers. Sufficient for storing 15 decimal digits |
| bool      | 1 bit                 | Stores true or false values                                  |
| char      | 2 bytes               | Stores a single character/letter, surrounded by single quotes |
| string    | 2 bytes per character | Stores a sequence of characters, surrounded by double quotes |

Number types:

1. Integer types stores whole numbers.
2. Floating point types represents numbers with a fractional part.

Integer Types (You should end the value with L for long types):

```c#
int myNum = 114514;
long myNum = 1145141919810L;
```

Floating point types (You should end the value with an F for floats and D for doubles):

```c#
float myNum = 114.514F;
double myNum = 114.5D;
```

Scientific Numbers (A floating point number can also be scientific number with an 'e' to indicate the power of 10:

```c#
float f = 1e10F;
double d = 1E10D;
```

### Type Casting

1. implicit casting (automatically)

   ```c#
   int a = 114.514;
   ```

2. explicit casting (manually)

   ```c#
   double d = 11.4;
   int a = (int)d;
   ```

3. type conversion methods (explicit manually)

   ```c#
   int myInt = 10;
   double myDouble = 2.5;
   bool myBool = true;
   Console.WriteLine(Convert.ToString(myInt));
   Console.WriteLine(Convert.ToDouble(myInt));
   Console.WriteLine(Convert.ToInt32(myDouble));
   Console.WriteLine(Convert.ToString(myBool));
   ```

### User input

You have already learned that `Console.WriteLine()` is used to output values. 

Now we will use `Console.ReadLine()` to get user input.

In the following example, the user can input his or hers username, which is stored in the variable `userName`. Then we output the value of `userName`

```c#
string userName = Console.ReadLine();
Console.WriteLine("Usename: " + userName);
```

**The `Console.ReadLine()` method returns a `string`**. Therefore, you cannot get information from another data type, such as `int`. The following program will cause an error (Cannot implicitly convert type `string` to `int`):

```c#
int age = Console.ReadLine();
Console.WriteLine(age);
```

Like the error message says, you cannot implicitly convert type `string` to `int`.

Luckily, for you, you just learned from the previous chapter (Type Casting), that you can convert any type explicitly, by using one of the `Convert.To.<type>(variable or numbers)` methods:

```c#
int age = Convert.ToInt16(Console.ReadLine());
Console.WriteLine(age);
```

### C# Operators

Operators are used to perform operations on variables and values.

In the example below, we use the `+` operator to add together two values.

```c#
int x = 114 + 514;
```

Although the `+` operator is often used to add together two values, like in example above, it can be used to add together a variable and a value, or a variable and another variable:

```c#
int sum1 = 114514 + 1919810;	//add together two values
int sum2 = sum1 + 24;			//add together a variable and a value
int sum3 = sum1 + sum2;			//add together a variable and other variable
```

#### Arithmetic Operators

Arithmetic operators are used to perform common mathematical operations:

| Operator | Name           | Description                            | Example |
| :------- | :------------- | :------------------------------------- | :------ |
| +        | Addition       | Adds together two values               | x + y   |
| -        | Subtraction    | Subtracts one value from another       | x - y   |
| *        | Multiplication | Multiplies two values                  | x * y   |
| /        | Division       | Divides one value by another           | x / y   |
| %        | Modulus        | Returns the division remainder         | x % y   |
| ++       | Increment      | Increases the value of a variable by 1 | x++     |
| --       | Decrement      | Decreases the value of a variable by 1 | x--     |

#### Assignment Operators:

Assignment operators are used to assign values to variables.

In the example below, we use the **assignment operator (`=`)** to assign the value 10 to a variable called x:

```c#
int x = 10;
```

The addition assignment operator `+=` adds a value to a variable:

```c#
int x = 10;
x += 3;
```

A list of all assignment operator:

| Operator | Example | Same As    |
| :------- | :------ | :--------- |
| =        | x = 5   | x = 5      |
| +=       | x += 3  | x = x + 3  |
| -=       | x -= 3  | x = x - 3  |
| *=       | x *= 3  | x = x * 3  |
| /=       | x /= 3  | x = x / 3  |
| %=       | x %= 3  | x = x % 3  |
| &=       | x &= 3  | x = x & 3  |
| \|=      | x \|= 3 | x = x \| 3 |
| ^=       | x ^= 3  | x = x ^ 3  |
| >>=      | x >>= 3 | x = x >> 3 |
| <<=      | x <<= 3 | x = x << 3 |

Abstraction:

`<variable> <operator>= <number>` equal to `<variable> = <variable> <operator> <number>`

#### C# Comparison Operators

Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us to find answers and make decisions.

The return value of a comparison is either `True` or `False`. These values are known as `Boolean values`.

In the following example, we use the **grater than operator (`>`)** to find out if 5 is grater than 3:

```c#
int x = 5;
int y = 3;
Console.WriteLine(x > y);	//Returns True, because 4 is greater than 3
```

A list of all comparison operators:

| Operator | Name                     | Example |
| :------- | :----------------------- | :------ |
| ==       | Equal to                 | x == y  |
| !=       | Not equal                | x != y  |
| >        | Greater than             | x > y   |
| <        | Less than                | x < y   |
| >=       | Greater than or equal to | x >= y  |
| <=       | Less than or equal to    | x <= y  |

#### Logical Operators

As with comparison operators, you also test for `True` or `False` values with logical operators.

Logical operators are used to determine the logic between variable or values.

A list of all logical operators:

| Operator | Name        | Description                                             | Example            |
| :------- | :---------- | :------------------------------------------------------ | :----------------- |
| &&       | Logical and | Returns True if both statements are true                | x < 5 && x < 10    |
| \|\|     | Logical or  | Returns True if one of the statements is true           | x < 5 \|\| x < 4   |
| !        | Logical not | Reverse the result, returns False if the result is true | !(x < 5 && x < 10) |

### C# Math

The C# Math has many method that allows you to perform mathematical tasks on numbers.

1. Max() method

   The `Math.Max(x, y)` method can be used to find the highest value of x and y:

   ```c#
   Math.Max(114, 514);
   ```

2. Min() method

   The `Math.Min(x, y)` method can be used to find the lowest value of x and y:

   ```c#
   Math.Min(114, 514);
   ```

3. Sqrt() method

   The `Math.Sqrt(x)` method returns square root of x:

   ```c#
   Math.Sqrt(64);
   ```

4. Abs() method

   The `Math.Abs(x)` method returns the absolute (positive) value of x:

   ```c#
   Math.Abs(-114);
   ```

5. Round() method

   The `Math.Round(x)` rounds a number to the nearest whole number:

   ```c#
   Math.Round(9.99)
   ```

### C# Strings

Strings are used for storing text.

A`string` variable contains a collection of characters surrounded by double quotes:

```c#
string myName = "MyName";
```

#### String Length

A string in C# is actually an object, which contain properties and methods that can perform certain operations on strings. For example, the length of string can be found with the  `Length` property (don't have () with method):

```c#
string txt = "abcde";
Console.WriteLine(txt.Length);
```

#### Other Methods

There are many string methods available, for example `ToUpper()` and `To lower()`, which returns a copy of the string converted to uppercase or lowercase:

```c#
string txt = "Hello, World!";
Console.WriteLine(txt.ToUpper());
Console.WriteLine(txt.ToLower());
```

#### C# Concatenation

The `+` operator can be used between strings to combine them. This is called concatenation:

```c#
string firstName = "John";
string lastName = "Doe";
string name = firstName + lastName;
Console.WriteLine(name);
```

You can also use the `string.Concat()` method to concatenate two strings:

```c#
string firstName = "John";
string lastName = "Doe";
string name = string.Concat(firstName, lastName);
Console.WriteLine(name);
```

You can also add space in the method or `+` operator:

```c#
string firstName = "John";
string lastName = "Doe";
string name1 = string.Concat(firstName, " ", lastName);
string name2 = firstName + " " + lastName;
Console.WriteLine(name1);
Console.WriteLine(name2);
```

If you add two numbers, the result will be a number:

```c#
int x = 10;
int y = 20;
int z = x + y;		//z will be 30
```

If you add two strings, the result will be a string concatenation:

```c#
string x = "10";
string y = "20";
string z = x + y;	//z will be 1020
```

If you add a number and a string, the result will be a string concatenation too:

```c#
int x = 114;
string y = "TianSoHoE";
Console.WriteLine(x + y);
```

#### String Interpolation

Another option of string concatenation, is string interpolation, which substitutes values of variables into placeholders in a string. Note that you do not have to worry about spaces, like with concatenation:

```c#
string firstName = "John";
string lastName = "Doe";
string name = $"My full name is: {firstName} {lastName}";
Console.WriteLine(name);
//{firstName} will be John
//{lastName} will be Doe
//{string}
```

#### C# Access Strings

You can access the characters in string by referring to its index number inside square brackets `[]`. (It looks like a array of char in C language.).

This example prints the first character in `myString`:

```c#
string myString = "Hello, World!";
Console.WriteLine(myString[0]);
```

> String indexes start with 0: [0] is the first character. [1] is the second character.

This example prints the second character in `myString`

```c#
string myString = "Hello, World!";
Console.WriteLine(myString[1]);
```

You can also find the index position of a specific character in a string, by using the `IndexOf()` method:

```c#
string myString = "Hello, World!";
Console.WriteLine(myString.IndexOf('e'));	//Outputs 1
```

Another useful method is `Substring()`, which extracts the characters from a string, starting from the specified character position/index, and returns a new string. This method is often used together with `IndexOf()` to get the specific character position :

```c#
string myString = "Hello, World!";
//Substring(begin), return [begin, end]
Console.WriteLine(myString.Substring(myString.IndexOf('e')));
```

#### Special Characters

Because strings must be written within quotes, C# will misunderstand this string, and generate an error:

```c#
string txt = "We are the so-called "Vikings" from the north. ";
```

The solution to avoid this problem, is use the backslash escape character.

The backslash(`\`, slash is `/`) escape character turns special characters into string characters:

| Escape character | Result | Description  |
| :--------------- | :----- | :----------- |
| `\'`             | `'`    | Single quote |
| `\"`             | `"`    | Double quote |
| `\\`             | `\`    | Backslash    |

```c#
//Solution:
string txt = "We are the so-called \"Vikings\" from the north. ";
```

| Code | Result    |
| :--- | :-------- |
| `\n` | New Line  |
| `\t` | Tab       |
| `\b` | Backspace |

### C# Booleans

Very often, in programming, you will need a data type that can only have one of two values, like:

- YES / NO
- ON / OFF
- TRUE / FALSE

For this, C# has a `bool` data type, which can take the values `true` or `false`.

#### Boolean Values

A Boolean type is declared with the `bool` keyword and can only take the values `true` or `false`:

```c#
bool isCSharpFun = true;
bool isFishTasty = false;
```

However, it is more common to return boolean values from boolean expressions, for conditional testing (see below).

#### Boolean Expression

A Boolean expression returns a boolean value: `True` or `False`, by comparing values/variables.

This is useful to build logic, and find answers.

For example, you can use a comparison operator, such as the greater than (`>`) operator to find out if an expression (or a variable) is true:

```c#
int x = 8;
int y = 9;
Console.WriteLine(x > y);	//outputs False, because 8 is smaller than 9
```

In the examples below, we use the equal to (`==`) operator to evaluate an expression:

```c#
int x = 10;
Console.WriteLine(x == 10);	//returns True, because value of x is equal to 10
```

#### Real Life Example

Let's think of a "real life example" where we need to find out if a person is old enough to vote.

In the example below, we use the `>=` comparison operator to find out if the age (`25`) is greater than or equal to the voting age limit, which is set to `18`:

```c#
int myAge = 25;
int votingAge = 18;
Console.WriteLine(myAge >= votingAge);
```

Cool, right? An even better approach (since we are on a roll now), would be to wrap the code above in an `if...else` statement, so we can perform different actions depending on the result:

```c#
int myAge = 25;
int votingAge = 18;
if (myAge >= votingAge)
    Console.WriteLine("Old enough to vote!");
else
    Console.WriteLine("Not old enought to vote.");
```

The boolean value of an expression is the basis for all C# comparisons and conditions.

### C# Conditions and If Statements

C# support the usual logical conditions from mathematics:

- Less than :`a < b`
- Less than or equal to : `a <= b`
- Greater than: `a > b`
- Greater than or equal to: `a >= b`
- Equal to `a == b`
- Not equal to `a != b`

You can use these conditions to perform different actions for different decisions.

C# has the following conditional statements:

- Use `if` to specify a block of code to be executed, if a specified condition is true
- Use `else` to specify a block of code to be executed, if the same condition is false
- Use `else if` to specify a new condition to test, if the first condition is false
- Use `switch` to specify many alternative blocks of code to be executed

#### The if Statement

Use the if statement to specify a block of C# code to be executed if a condition is `True`.

> Syntax
>
> ```c#
> if (condition)
> {
>     //block of code to be executed if the condition is True.
> }
> ```
>
> 

Note that if is in lowercase letters. Uppercase letters (If or IF) will generate an error.

In the example below, we test two values to find out if 20 is greater than 18. If the condition is `True`, print some text:

> Example
>
> ```c#
> if (20 > 18)
>     Console.WriteLine("20 is greater than 18");
> ```
>
> 

We can also test variables:

> Example
>
> ```c#
> int x = 20;
> int y = 18;
> if (x > y)
>     Console.WriteLine("x is greater than y");
> ```
>
> 

Example explained:

In the example above we use two variables, `x` and `y`, to test whether `x` is greater than `y` (using the `>` operator). As `x` is 20, and `y` is 18, and we know that 20 is greater than 18, we print to the screen that "x is greater than y"

#### The else Statement

Use the `else` statement to specify a block of code to be executed if the condition is `False`.

> Syntax
>
> ```c#
> if (condition)
> {
>     //block of code to be executed if the condition if True 
> }
> else
> {
>     //block of code to be executed if the condition is False
> }
> ```

> Example
>
> ```c#
> int time = 20;
> if (time < 18)
> {
>     Console.WriteLine("Good day.");
> }
> else
> {
>     Console.WriteLine("Good evening.");
> }
> //Outputs "Good evening"
> ```

Example explained

In the example above, time (20) is greater than 18, so the condition is `False`. Because of this, we move on to the `else` condition and print to the screen "Good evening". If the time was less than 18, the program would print "Good day".

#### The else if Statement

Use the `else if` statement to specify a new condition if the first condition is `False`.

> Syntax
>
> ```c#
> if (condition1)
> {
>     //block of code to be executed if condition1 is True.
> }
> else if (condition2)
> {
>     //block of code to be executed if condition1 is False and condition2 is True
> }
> else
> {
>     //block of code to be executed if condition1 is False and condition2 is False
> }
> ```

> Example
>
> ```c#
> int time = 22;
> if (time < 10)
> {
>     Console.WriteLine("Good morning.");
> }
> else if (time < 20)
> {
>     Console.WriteLine("Good day.");
> }
> else
> {
>     Console.WriteLine("Good evening.");
> }
> //Outputs "Good evening."
> ```

Example explained

In the example above, time (22) is greater than 10, so the first condition is `False`. The next condition, in the `else if` statement, is also `False`, so we move on to the `else` condition since **condition1** and **condition2** is both `False` , and print to the screen "Good evening. ".

#### Short Hand if...else (Ternary Operator)

There is also a short-hand if else, which is known as the ternary operator because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:

> Syntax
>
> ```c#
> variable = (condition) ? expressionTrue : expressionFalse;
> ```

Instead of writing:

> Example
>
> ```c#
> int time = 20;
> if (time < 18)
> {
>     Console.WriteLine("Good day. ");
> }
> else
> {
>     Console.WriteLine("Good evening. ");
> }
> ```

You can simply write:

> Example
>
> ```c#
> int time = 20;
> string result = (time < 18) ? "Good day. " : "Good evening. ";
> Console.WriteLine(result);
> ```

### C# Switch

Use the `switch` statement to select one of many code blocks to be executed.

> Syntax
>
> ```c#
> switch (expression)
> {
>     case x:
>         //code block
>         break;
>     case y:
>         //code block
>         break;
>     default:
>         //code block
>         break;
> }
> ```

This is how it works:

- The `switch` expression is evaluated once
- The value of the expression is compared with the values of each `case`
- If there is a match, the associated block of code is executed

The example below use the weekday number to calculate the weekday name:

> Example
>
> ```c#
> int day = 4;
> switch (day)
> {
>     case 1:
>         Console.WriteLine("Monday");
>         break;
>     case 2:
>         Console.WriteLine("Tuesday");
>         break;
>     case 3:
>         Console.WriteLine("Wednesday");
>         break;
>     case 4:
>         Console.WriteLine("Thursday");
>         break;
>     case 5:
>         Console.WriteLine("Friday");
>         break;
>     case 6:
>         Console.WriteLine("Saturday");
>         break;
>     case 7:
>         Console.WriteLine("Sunday");
>         break;
> }
> ```

#### The break keyword

When C# reaches a `break` keyword, it breaks out of the switch block.

This will stop the execution of more code and case testing inside the block.

When a match is found, and the job is done, it's time for a break. There is no need for more testing.

> A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block.

#### The default keyword

The `default` keyword is optional and specifies some code to run if there is no case match:

> Example
>
> ```c#
> int day = 4;
> switch (day)
> {
>     case 6:
>         Console.WriteLine("Saturday");
>         break;
>     case 7:
>         Console.WriteLine("Sunday");
>         break;
>     default:
>         Console.WriteLine("Looking forward to the weekend.");
>         break;
> }
> ```

### C# While Loop

Loops can execute a block of code as long as a specified condition is reached.

Loops are handy because they save time, reduce errors, and they make code more readable.

The `while` loop loops through a block of code as long as a specified condition is `True`:

> Syntax
>
> ```c#
> while (condition)
> {
>     //code block to executed
> }
> ```

In the example below, the code in the loop will run, over and over again, as long as a variable (i) is less than 5:

> Example
>
> ```c#
> int i = 0;
> while (i < 5)
> {
>     Console.WriteLine(i);
>     i++;
> }
> ```

> Note: Do not forget to increase the variable used in the condition, otherwise the loop will never end!

### The Do/While Loop

The `do/while` loop is a variant of the `while` loop. This loop will execute the code block once, before checking if the condition is `True`, it will repeat the loop as long as the condition is `True`.

> Syntax
>
> ```c#
> do
> {
>     // code block to be executed
> }
> while (condition);
> ```

The example below uses a `do/while` loop. The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested:

> Example
>
> ```c#
> int i = 0;
> do
> {
>     Console.WriteLine(i);
>     i++;
> }
> while (i < 5);
> ```

> Note: Don't forget to increase the variable used in the condition, otherwise the loop will never end!

### C# For Loop

When you know exactly how many times you want to loop through a block of code, use the `for` loop instead of a `while` loop:

> Syntax
>
> ```c#
> for (statement1; statement2; statement3)
> {
>     // code block to be executed
> }
> ```

`Statement 1` is executed (one time) before the execution of the code block.

`Statement 2` defines the condition for execution the code block.

`Statement 3` is executed (every time) after the code block has been executed.

The example below will print the numbers `0` to `4`

> Example
>
> ```c#
> for (int i = 0; i < 5; i++)
>     Console.WriteLine(i);
> ```

Example explained

`Statement 1` sets a variable before the loop starts (`int i = 0`)

`Statement 2` defines the condition for the loop to run (`i` must be less than `5`). If the condition is `True`, the loop will start over again, if it is `False`, the loop will end.

`Statement 3` increase a value (`i++`) each time the code block in the loop has been executed.

Another Example

This example will only print even values between `0` and `10`:

> Example
>
> ```c#
> for (int i = 0; i < 10; i += 2)
> {
>     Console.WriteLine(i);
> }
> ```

Nested Loops

It is also possible to place a loop inside another loop. This is called a nested loop.

The `inner loop` will be executed one time for each iteration of the `under loop`:

> Example
>
> ```c#
> for (int i = 1; i <= 2; ++i)
> {
>     Console.WriteLine("Outer: " + i);
>     for (int j = 1; j <= 3; j++)
>     {
>         Console.WriteLine("Inner: " + j);
>     }
> }
> ```

### C# Foreach Loop

There is also a `foreach` loop, which is used exclusively to loop through elements in an array:

> Syntax
>
> ```c#
> foreach (<type> <variableName> in <arrayName>)
> {
>     // code block to be executed
> }
> ```

The following example outputs all elements in the cars array, using a `foreach` loop:

> Example
>
> ```c#
> string [] cars = {"Volvo", "BMW", "Ford", "Mazda"};
> foreach (string i in cars)
> {
>     Console.WriteLine(i);	// Loop with the cars array with the variable i
> }
> ```

### C# Break and Continue

#### Break

The `break` statement can also be used to jump out of a loop.

This example jumps out of the loop when `i` is equal to `4`:

> Example
>
> ```c#
> for (int i = 0; i < 10; i++)
> {
>     if (i = 4)
>     {
>         break;
>     }
>     Console.WriteLine(i);
> }
> ```

#### Continue

The `continue` statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

This example skip the value of `4`:

> Example
>
> ```c#
> for (int i = 0; i < 10; i++)
> {
>     if (i == 4)
>     {
>         continue;
>     }
>     Console.WriteLine(i);
> }
> ```

#### Break and Continue in While Loop

You can also use `break` and `continue` in while loops:

> Break Example
>
> ```c#
> int i = 0;
> while (i < 10)
> {
>     Console.WriteLine(i);
>     i++;
>     if (i == 4)
>     {
>         break;
>     }
> }
> ```

> Continue Example
>
> ```c#
> int i = 0;
> while (i < 10)
> {
> 	if (i == 4)
>     {
>         i++;
>         continue;
>     }
>     Console.WriteLine(i);
>     i++;
> }
> ```
>

### C# Arrays

