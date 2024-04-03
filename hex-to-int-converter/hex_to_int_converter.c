#include <stdio.h>

int main(){
    int htoi();
    printf("htoi('7543e') = %d\n", htoi("7543e"));
    printf("htoi('f') = %d\n", htoi("f"));
    printf("htoi('F0') = %d\n", htoi("F0"));
    printf("htoi('12fab') = %d\n", htoi("12fab"));
}

int htoi(s) /* convert s to integer */
char s[];
{
    int atoi();
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= 'f'; ++i)
        /*n = 16 * n + s[i] - '48';*/
        n = 16 * n + atoi(s[i]) - '0';
    return(n);
}

int atoi(s) /* convert s to integer */
char s[];
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        /*n = 16 * n + s[i] - '48';*/
        n = 10 * n + s[i] - '0';
    return(n);
}