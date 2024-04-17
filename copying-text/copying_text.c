#include <stdio.h>
int main() {
  char t[1000];
  void expand();
  expand("Hello world", t);
  printf("%s\n", t);
  expand("Hello world\n", t);
  printf("%s\n", t);
  expand("Hello\tworld\n", t);
  printf("%s\n", t);
  expand("Hello\tworld\nHave a nice\tday\n", t);
  printf("%s\n", t);
}

void expand(s, t)
char s[], t[];
{
  int i, j;
  for(i=0, j=0; s[i]; i++) {
    if(s[i] =='\t'){
      t[j++] = '\\';
      t[j++] = 't';
    } else if(s[i] =='\n'){
      t[j++] = '\\';
      t[j++] = 'n';
    } else t[j++] = s[i];
  }
  t[j] = '\0';
}