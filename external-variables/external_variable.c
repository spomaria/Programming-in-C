#include <stdio.h>

int val = 0;

int main(){
    /*extern val;*/
    int addOne();
    printf("Initial value is %d\n", val);
    printf("After adding one, the value is %d\n", addOne());
    printf("After adding one, the value is %d\n", addOne());
    printf("After adding one, the value is %d\n", addOne());
    printf("After adding one, the value is %d\n", addOne());
    printf("After adding one, the value is %d\n", addOne());
}

int addOne(){
    /*extern val;*/
    return ++val;
}
