### Getting Start

First python file, called helloworld.py, which can be done in any text editor.

```python
print("Hello, World!")
```

Simple as that. Save your file. Open your command line, navigate to the directory where you saved your file, and run:

```bash
python helloworld.py
```

The output should read:

```shell
Hello, World!
```

Congratulations, you have written and executed your first Python program.

### Python Syntax



### Python For Loops

A `for` loop is used for literating over a sequence (that is either a list, a tuple, a dictionary, a set, or a string).

This is less like the `for` keyword in other programming languages, and works more like an iterator method as found in other object-oritented programming languages.

With the `for` loop we can execute a set of statements, once for each item in a list, tuple, set etc.

```python
# print each fruit in a fruit list:

fruits = ["apple", "banana", "cherry"]
for x in fruits:
    print(x)
```

#### The Break Statement

With the `break` statement we can stop the loop before it has looped through all the items:

```python
fruits = ["apple", "banana", "cherry"]
for x in fruits:
    print(x)
    if x == "banana":
        break
```

