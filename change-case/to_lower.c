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
  /*if (c >= 'A' && c <= 'Z')
    return(c + 'a' - 'A');
  else
    return(c);*/
    /* Using the tenary operator*/
    int z;
    z = c >= 'A' && c <= 'Z' ? c + 'a' - 'A': c;
    return(z);
}