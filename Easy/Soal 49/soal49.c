#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* interpret(const char* command) {
    int length = strlen(command);
    char* result = (char*)malloc((length + 1) * sizeof(char)); 
    int index = 0; 

    for (int i = 0; i < length; i++) {
        if (command[i] == 'G') {
            result[index++] = 'G';
        } else if (command[i] == '(' && command[i + 1] == ')') {
            result[index++] = 'o';
            i++; 
        } else if (command[i] == '(' && command[i + 1] == 'a' && command[i + 2] == 'l' && command[i + 3] == ')') {
            result[index++] = 'a';
            result[index++] = 'l';
            i += 3; 
        }
    }

    result[index] = '\0'; 
    return result;
}


