#### Difference between C and C++

C++ was developed as an extension of C, and both languages have almost the same syntax.

The main difference between C and C++ is that C++ support classes and objects, while C does not.

#### C++ Strings

##### String Concatenation

The `+` operator can be used between strings to add them together to make a new string. This is called **concatenation**:

```cpp
string chicken = "鸡你";
string beautiful = "太美";
cout << chicken + beautiful << endl;
//The output is 鸡你太美
```

WARNING!

C++ uses the `+` operator for both **addition** and **concatenation**.

Numbers are added. Strings are concatenated.

##### Append() Method

A string in C++ is actually an object, which contain methods that can perform certain operations on strings. For example, you can also concatenate strings with the `append()` method:

```cpp
string chicken = "鸡你";
string beatuiful = "太美";
cout << chicken.append(beautiful) << endl;
//The output is 鸡你太美 too
```

##### String Length

To get the length of a string, use the `length()` method:

`size()` is just a alias of `length()`

```cpp
string txt = "ABCDEFG";
cout << txt.size() << endl;
cout << txt.length() << endl;
```

##### Access Strings

You can access the characters in a string by referring to its index nubmer(`0` to `length - 1`) inside square brackets `[]`.

This example prints the first character in `str`:

```cpp
    string str = "Hello";
    cout << str[0] << endl;
    //output is H
```

To print the last character of a string, you can use the following code:

```cpp
string str = "Hello";
cout << str[str.length() - 1] << endl;
```

To change the value of a specific character in a string, refer to the index number, and use single quotes:

```cpp
string str = "Hello";
//str[0] = h;
str[0] = 'h';
cout << str << endl;
```

the other way to access and change the character in a string(using `at()` method):

```cpp
    string str = "Hello";
    cout << str.at(0) << endl;
    cout << str.at(1) << endl;
    cout << str << endl;
    str.at(0) = 'h';
    cout << str << endl;
```

#### C++ Identifiers

All C++ **variables** must be **identified** with **unique names**.

These unique names are called **identifiers**.

Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

**Note:** It is recommended to use descriptive names in order to create understandable and maintainable code:

The general rules for naming variables are:

- Names can contain letters, digits and underscores
- Names must begin with a letter or an underscore (_)
- Names are case-sensitive (`myVar` and `myvar` are different variables)
- Names cannot contain whitespaces or special characters like !, #, %, etc.
- Reserved words (like C++ keywords, such as `int`) cannot be used as names

```cpp
void goodVariableName() {
    //Good
    int minutesPerHour = 60;
    //OK, but not so easy to understand what m actually is.
    int m = 60;
}
```

#### C++ Enum

An **enum** is a special type that represents a group of constants (unchangeable values).

To create an enum, use the `enum` keyword, followed by the name of the enum, and separate the enum items with a comma(the last item does not need a comma):

```cpp
    enum Level {
        LOW,
        MEDIUM,
        HIGH
    };
```

To access the enum, you must create a variable of it.

```cpp
enum Level myLevel;
```

`myLevel` is a variable that type is `enum Level`

By default, the first item (`LOW`) has the value `0`, the second (`MEDIUM`) has the value `1`, etc.

You can assign a value to each constant, the next one is now + 1.

```cpp
void testEnum() {
    enum Level {
        LOW,
        MEDIUM = 114514,
        HIGH
    };

    cout << LOW << endl;    //Outputs 0
    cout << MEDIUM << endl;    //Outputs 114514;
    cout << HIGH << endl;        //Outputs 114515;


    enum Level myLevel;
    myLevel = HIGH;

    cout << myLevel << endl;
}
```

##### Enum and Switch:

Enums are often used in switch statements to check for corresponding values:

```cpp
void testEnum() {
    typedef enum Level {
        LOW,
        MEDIUM = 114514,
        HIGH
    }Level;

    Level myLevel = HIGH;

    switch(myLevel) {
        case LOW:
            cout << "Low" << endl;
            break;
        case MEDIUM:
            cout << "Medium" << endl;
            break;
        case HIGH:
            cout << "High" << endl;
            break;
        default:
            cout << "What ??" << endl;
            break;
    }
}
```

#### Class

```cpp
class Player {
public:
    int x, y;
    int speed;

    void move() {
        x = x * speed;
        y = y * speed;
    }
};
```

default `private`

The attributes and methods in a class default type is private, I should add a public key-word, if I wan to access it outside.（忘了加三回啊，三回！！）

#### C++ Exceptions

When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception(error).

##### C++ try and catch

Exception handling in C++ consist of three key-words: `try`, `throw` and catch:

The `try` statement allows you to define a block of code to be tested for errors while it is being executed.

The `throw` statement throws an exception when a problen is detected, which lets us create a custom error.

The `catch` statement allows you to define a block of code to be executed, if an error occurs in the `try` block.

The `try` and `catch` key-words come in pairs:

Syntax:

```cpp
try {
    //Block of code to try
    throw <expection>; //Throw an exception when a problem arise
}
catch {
    //Block of code to handle errors.
}
```

Consider the following example:

Example:

```cpp
try {
    int age = 15;
    if (age >= 18) {
        cout << "Access granted - you are old enough.";
    }
    else {
        throw(age);
    }
}
catch (int myNum){
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;
}Difference between C and C++
C++ was developed as an extension of C, and both languages have almost the same syntax.

The main difference between C and C++ is that C++ support classes and objects, while C does not.
```
