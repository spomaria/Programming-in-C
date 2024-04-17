#include <stdio.h>

int main()
{
    char line[256];
    char opcode;
    float value, display = 0.0;

    printf("Input the operator and the value to use this calculator\n");
    printf("Example: = 5.0\n");
    while(fgets(line, 256, stdin) != NULL) {
        /* Use sscanf to parse data from a string */
        sscanf(line, "%c %f", &opcode, &value);
        if ( opcode == 'S' || opcode == 's') break;
      	else if (opcode == '=') display = value;
      	else if (opcode == '+') display += value;
      	else if (opcode == '/') display /= value;
      	else if (opcode == '*') display *= value;
		else if (opcode == '-') display -= value;
        /* Replace this with your code */

        printf("Answer: %.2f\n", display);
    }
}