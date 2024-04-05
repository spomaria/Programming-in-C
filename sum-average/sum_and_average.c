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