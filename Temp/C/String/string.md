### C Strings

#### Create Strings

Strings are used for storing text/characters.

For example, "Hello, World" is a string of characters.

Unlike many other programming languages, C does not have a String Type to easily create string variables. Instead, you must use the `char` type and create an array of characters to make a string in C:

```c
//Example
char str[] = "Hello, World!";
```

Note that you have to use double quotes(`""`)

To output the string, you can use the `printf()` function together with the format specifier `%s` to tell C that we are now working with strings:

```c
//Example
char str[] = "Hello, World!";
printf("%s", str);
```

#### Access Strings

Since strings are actually arrays in C, you can access a string by referring to its index number inside square brackets(`[]`).

This example prints the first character (0) in str:

```c
//Example
char str[] = "Hello, World!";
printf("%c", str[0]);
```

Note that we have to use the `%c` format specifier to print a single character.

#### Modify Strings

To change the value of a specific character in a stirng, refer to the index number, and use single quotes:

```c
char str[] = "Hello, World!";
str[0] = 'Q';
printf("%s", str);
//Outputs Qello, World! instead of Hello, World!
```

#### Loop Through a String

You can also loop through the characters of a string, using a `for` loop:

```c
char str[] = "Hello, World!";
int i = 0;

//'\0' tells C that this is the end of string.
while (str[i++] != '\0')
    printf("%c", str[i]);
```

You can also use the `sizeof` formula (instead of manually write the size of the array in the loop condition.) to make the loop more sustainable. Sizeof including the \0 character:

```c
char str[] = "Hello, World!";
int len = sizeof(str) / sizeof(str[0]);
int i = 0;

for (i = 0; i < len i++)
    printf("%c", str[i]);
```

In the examples above, we used a "string literal" to create a string variable. This is the easiest way to create a string in C.

```c
char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
```

Why do we include the `\0` character at the end? This is known as the "null terminating character", and must be include when creating strings using this method. It tells C that this is the end of string.