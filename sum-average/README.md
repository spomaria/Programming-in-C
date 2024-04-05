# C Program that Calculates the Sum and Average of 5 Numbers

## Introduction
This exercise is part of my learning how to gain programming mastery through the Programming in C Course, as part of the C Programming for Everybody Specialization at [Coursera](https://www.coursera.org/) under the tutelage of [Charles Russel Severance](http://www.dr-chuck.com/)

## Calculating the Sum and Average of 5 Numbers
We shall write a C Program that calculates the Sum and Average of 5 numbers.

On our local machine, we create a file and name it `sum_and_average.c` using the following bash command
```bash
touch sum_and_average.c
```
Inside our `sum_and_average.c` file, we write the following codes
```C
#include "stdio.h"

main () {
    /* declaring all variables*/
    float sum();
    float total, average;
    float c[5]; /* an array that holds the values*/
    total = sum(c);
    average = sum(c) / 5.0;
    printf("The total is: %.1f\n", total);
    printf("The average is: %.1f\n", average);
}

/* the sum() function accepts an array of floats as argument*/
float sum(float c[]){
    /* initializing the sum_c variable*/
    float sum_c = 0.0;
    int i;
    
    for (i = 0; i < 5; i++){
        /* reading in the elements of the array*/
        scanf("%f", &c[i]);
        /* summing the elements of the array*/
        sum_c += c[i]; 
    }
    
    return sum_c;
}
```

In the above code snippet, there are two functions `main()` and `sum(float c[])`. The `sum(float c[])` function receives an array of floats and calculates the sum and average of the elements in the array. The `main()` function calls the `sum(float c[])` function and executes it.

To compile our script, we use the following bash command
```bash
gcc -ansi sum_and_average.c -o sum_and_average
```
The above command will produce an executable file named `sum_and_average` in the same directory as our `sum_and_average.c` file upon successful compilation. 

In order to test the functionality of our C program, we save the test document as `.txt` file.

To achieve this, create a `input.txt` file in the same directory using the following bash command
```bash
touch input.txt
```

In our exercise, we pasted the following lines into our `input.txt` file
```
10.0
5.0
15.0
20.0
2.0
10.0

```

In order to test the functionality of our C program, we run the following command
```bash
./sum_and_average < input.txt
```

The expected result is 
```
The total is: 60.0
The average is: 12.0
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