#include <stdio.h>

static val = 0;

int main(){
    /*extern val;*/
    int addOne();
    void start();
    printf("Initial value is %d\n", val);
    printf("After adding one, the value is %d\n", addOne());
    printf("After adding one, the value is %d\n", addOne());
    printf("After adding one, the value is %d\n", addOne());
    start(42);
    printf("After adding one, the value is %d\n", addOne());
    printf("After adding one, the value is %d\n", addOne());
    start(30);
    printf("After adding one, the value is %d\n", addOne());
    printf("After adding one, the value is %d\n", addOne());
}

int addOne(){
    /*static val;*/
    return ++val;
}

void start(int newValue){
    /*static newValue;*/
    val = newValue;
}