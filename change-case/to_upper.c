#include <stdio.h>
int main() {
  int upper();
  printf("Upper M is %c\n", upper('M'));
  printf("Upper x is %c\n", upper('x'));
  printf("Upper @ is %c\n", upper('@'));
  printf("Upper u is %c\n", upper('u'));
}

int upper(c) /* convert c to lower case; ASCII only */
int c;
{
  /*if (c >= 'A' && c <= 'Z')
    return(c + 'a' - 'A');
  else
    return(c);*/
    /* Using the tenary operator*/
    int z;
    z = c >= 'a' && c <= 'z' ? c + 'A' - 'a': c;
    return(z);
}