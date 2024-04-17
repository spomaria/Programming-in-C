#include <stdio.h>
#include <string.h>
int main() {
    char line[1000];
    char keep[1000];

    while(fgets(line, sizeof(line), stdin) != NULL ) {
        if(!(strcmp(keep, line)==0)){
            strcpy(keep, line);
            printf("%s",keep);
        }
    }
}