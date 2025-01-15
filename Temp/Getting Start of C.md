### String

Strings are used for storing text/characters.

For example, "Hello World" is a string of characters.

Unlike many other programming languages, C does not have a String type to easily create string variables. Instead, you must use the char type and create an array of characters to make a string in C:



### Recursion

Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

Resursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.

#### Recursion Example

Adding two numbers together is easy to do, but range of numbers is more complicated. In the following example, recursion is used to add a range of numbers together by breaking it down into the simple task of adding two numbers:

```c
int sum(int k);

int main(void)
{
    int result = sum(10);
    printf("%d\n", result);
}

int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}
```

Example Explained

When the `sum()` function is called, it adds parameter `k` to the sum of all numbers smaller than `k` and returns the result. When `k` becomes `0`, the function just returns `0`. When running, the program follows these steps:
