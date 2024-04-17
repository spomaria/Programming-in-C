#include <stdio.h>
#include <string.h>

int main(){
    int rindex(char s[], char t);
    char t;
    char line[1000];
    printf("Enter a word or a sentence\n");
    fgets(line, sizeof(line), stdin);
    printf("Enter the character of interest\n");
    scanf("%c", &t);
    printf("The right most index of %c is %d\n", t, rindex(line, t));
}

int rindex(char s[], char t){
    int i, c, t_index;
    for (i = 0; s[i]; i++){
        if (s[i] == t) t_index = i;
    }
    if (!(t_index >= 0 && t_index <= strlen(s))) t_index = -1;
    return t_index;
}