#include <stdio.h>
#include <string.h>
int main() {
  char s[1000];
  void itob(), itoh(), reverse();

  itob(42,s);
  printf("42 in base-2 is %s\n", s);
  itoh(42,s);
  printf("42 in base-16 is %s\n", s);

  itob(16,s);
  printf("16 in base-2 is %s\n", s);
  itoh(16,s);
  printf("16 in base-16 is %s\n", s);

  itob(59,s);
  printf("59 in base-2 is %s\n", s);
  itoh(59,s);
  printf("59 in base-16 is %s\n", s);

  itob(100,s);
  printf("100 in base-2 is %s\n", s);
  itoh(100,s);
  printf("100 in base-16 is %s\n", s);

  itob(254,s);
  printf("254 in base-2 is %s\n", s);
  itoh(254,s);
  printf("254 in base-16 is %s\n", s);
}

void reverse(t)
char t[];
{
    int i, j, len;
    char tmp;
    len = strlen(t);
    for(i=0, j=len-1;;i++,j--) {
        if (j<i) break;
        tmp = t[i];
        t[i] = t[j];
        t[j] = tmp;
    }
    return;
}

void itob(int n, char s[]){
    void reverse();
    int i;
    for(i = 0; n > 0;){
        s[i++] = (n % 2) + '0';
        n = n / 2;
    }
    s[i] = '\0';

    return reverse(s);
}

void itoh(int n, char s[]){
    void reverse();
    int i;
    for(i = 0; n > 0;){
        if(n % 16 >= 10){
            s[i++] = (n % 16) - 10 + 'a';
        } else s[i++] = (n % 16) + '0';
        n = n / 16;
    }
    s[i] = '\0';

    return reverse(s);
}
