# C Program that Changes the Case of an Alphabet

## Introduction
In this course, I am learning the how to gain programming mastery in the Programming in C Course, as part of the C Programming for Everybody Specialization at [Coursera](https://www.coursera.org/) under the tutelage of [Charles Russel Severance](http://www.dr-chuck.com/)

## Changing to Lower Case
We shall write a C Program that changes the case of an alphabet to lower case.

On our local machine, we create a file and name it `to_lower.c` using the following bash command
```bash
touch to_lower.c
```
Inside our `to_lower.c` file, we write following codes
```C
#include <stdio.h>
int main() {
  int lower();
  printf("Lower M is %c\n", lower('M'));
  printf("Lower x is %c\n", lower('x'));
  printf("Lower @ is %c\n", lower('@'));
  printf("Lower u is %c\n", lower('u'));
}

int lower(c) /* convert c to lower case; ASCII only */
int c;
{
    /* Using the tenary operator*/
    int z;
    z = c >= 'A' && c <= 'Z' ? c + 'a' - 'A': c;
    return(z);
}
```

In the above code snippet, there are two functions `main()` and `lower(c)`. The `lower(c)` function receives the character and converts it to lower case. The `main()` function calls the `lower(c)` function and executes it.

To compile our script, we use the following bash command
```bash
gcc -ansi to_lower.c -o to_lower
```
The above command will produce an executable file named `to_lower` in the same directory as our `to_lower.c` file upon successful compilation. In order to test the functionality of our C program, we run the following command
```bash
./to_lower
```

The expected result is 
```
Lower M is m
Lower x is x
Lower @ is @
Lower u is u
```

## Changing to Upper Case
We shall write a C Program that changes the case of an alphabet to upper case.

On our local machine, we create a file and name it `to_upper.c` using the following bash command
```bash
touch to_upper.c
```
Inside our `to_upper.c` file, we write following codes
```C
#include <stdio.h>
int main() {
  int upper();
  printf("Upper M is %c\n", upper('M'));
  printf("Upper x is %c\n", upper('x'));
  printf("Upper @ is %c\n", upper('@'));
  printf("Upper u is %c\n", upper('u'));
}

int upper(c) /* convert c to upper case; ASCII only */
int c;
{
    /* Using the tenary operator*/
    int z;
    z = c >= 'a' && c <= 'z' ? c + 'A' - 'a': c;
    return(z);
}
```

In the above code snippet, there are two functions `main()` and `upper(c)`. The `upper(c)` function receives the character and converts it to upper case. The `main()` function calls the `upper(c)` function and executes it.

To compile our script, we use the following bash command
```bash
gcc -ansi to_upper.c -o to_upper
```
The above command will produce an executable file named `to_upper` in the same directory as our `to_upper.c` file upon successful compilation. In order to test the functionality of our C program, we run the following command
```bash
./to_upper
```

The expected result is 
```
Upper M is M
Upper x is X
Upper @ is @
Upper u is U
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