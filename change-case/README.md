# C Program that Converts a Hexadecimal to Decimal

## Introduction
In this course, I am learning the how to gain programming mastery in the Programming in C Course, as part of the C Programming for Everybody Specialization at [Coursera](https://www.coursera.org/) under the tutelage of [Charles Russel Severance](http://www.dr-chuck.com/)

## Converting Hexadecimal to Decimal
We shall write a C Program that converts a Hexadecimal number to decimal.

On our local machine, we create a file and name it `hex_to_int_converter.c` using the following bash command
```bash
touch hex_to_int_converter.c
```
Inside our `hex_to_int_converter.c` file, we write following codes
```C
#include <stdio.h>
#include <string.h>

int main(){
    int htoi();
    printf("htoi('9c53e') = %d\n", htoi("9c53e"));
    printf("htoi('f') = %d\n", htoi("f"));
    printf("htoi('F0') = %d\n", htoi("F0"));
    printf("htoi('12fab') = %d\n", htoi("12fab"));
}

int htoi(s) /* convert s to integer */
char s[];
{
    int i, n;

    n = 0;
    for (
        i = 0; i <= strlen(s) ; ++i
    ){
        /* i = 0; s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'f' ; ++i*/
        if (s[i] >= '0' && s[i] <= '9') 
            n = 16 * n + s[i] - '0';
        else if(s[i] >= 'a' && s[i] <= 'f') 
            n = 16 * n + s[i] - 87;
        else if(s[i] >= 'A' && s[i] <= 'F') 
            n = 16 * n + s[i] - 55;
    }
        
    return(n);
}
```

In the above code snippet, there are two functions `main()` and `htoi(s)`. The `htoi(s)` function receives the string (hexadecimal) and converts it to a decimal. The `main()` function calls the `htoi(s)` function and executes it.

To compile our script, we use the following bash command
```bash
gcc -ansi hex_to_int_converter.c -o hex_to_int_converter
```
The above command will produce an executable file named `hex_to_int_converter` in the same directory as our `hex_to_int_converter.c` file upon successful compilation. In order to test the functionality of our C program, we run the following command
```bash
./hex_to_int_converter
```

The expected result is 
```
htoi('9c53e') = 640318
htoi('f') = 15
htoi('F0') = 240
htoi('12fab') = 77739
```

## Authors
Nengak Emmanuel Goltong 

[@NengakGoltong](https://twitter.com/nengakgoltong) 
[@nengakgoltong](https://www.linkedin.com/in/nengak-goltong-81009b200)

Under the tutelage of 

Charles Russel Severance
[@drchuck](https://twitter.com/drchuck)
[@charlesseverance](https://www.linkedin.com/in/charlesseverance)

## License
This project is licensed under the MIT License - see the LICENSE.md file for details