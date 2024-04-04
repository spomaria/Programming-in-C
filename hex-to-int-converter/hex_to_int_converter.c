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