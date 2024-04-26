#include <stdio.h>

int main(void)
{
    // //Must use the char type and create an array of characters to make a string in C.
    // //Have to use double quotes
    // char greetings[] = "Hello, World!";

    // //To output the string, can use the printf() function together with the format specifier %s to tell C that we are now working with strings
    // printf("%s", greetings);

    char str[] = "Hello, World!";
    int i = 0;

    //while (str[i++] != '\0')        //这么写打印有问题，下面直接从1开始了
    while (str[i] != '\0')
        printf("%c", str[i++]);       //这下就没问题了，

    return 0;
}