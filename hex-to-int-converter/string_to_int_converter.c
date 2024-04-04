#include <stdio.h>
#include <string.h>

int main(){
    int atoi();
    printf("atoi('7543') = %d\n", atoi("7543"));
    printf("atoi('5') = %d\n", atoi("5"));
    printf("atoi('30') = %d\n", atoi("30"));
    printf("atoi('12f') = %d\n", atoi("12"));
    printf(" 'A' is %d, \"A\" is %s\n", 'A', "A");
    printf(" 'a' is %d, \"a\" is %s\n", 'a', "a");
    printf(" 'a' - 'A' is %d\n", 'a' - 'A');
    printf(" 'b' - 'A' is %d\n", 'b' - 'A');
    printf("The hex value of 'a' is %d\n", 'a' - 87);
    printf("The hex value of 'f' is %d\n", 'f' - 87);
    printf("The hex value of 'A' is %d\n", 'A' - 55);
    printf("The hex value of 'f' is %d\n", 'F' - 55);
}

int atoi(s) /* convert s to integer */
char s[];
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9' ; ++i)
        n = 10 * n + s[i] - '0';
        
    return(n);
}