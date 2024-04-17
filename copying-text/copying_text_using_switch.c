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


void expand(char s[], char t[]) {
    int i, j;
    for (i = 0, j = 0; s[i]; i++) {
        switch (s[i]) {
            case '\t':
                t[j++] = '\\';
                t[j++] = 't';
                break;
            case '\n':
                t[j++] = '\\';
                t[j++] = 'n';
                break;
            default:
                t[j++] = s[i];
        }
    }
    t[j] = '\0';
}

/*void expand(s, t)
char s[], t[];
{
  int i, j;
  
  while (scanf("%c", &s[i]) != EOF){
    switch (s[i]){
      default:
        t[i] = s[i];
        break;
    }
  }
  
}*/