#include <string.h> 

int finalValueAfterOperations(char** operations, int operationsSize) {
    int i;
    int x = 0;

    for (i = 0; i < operationsSize; i++) {
        if (strcmp(operations[i], "--X") == 0 || strcmp(operations[i], "X--") == 0) {
            x = x - 1; 
        } else if (strcmp(operations[i], "++X") == 0 || strcmp(operations[i], "X++") == 0) {
            x = x + 1; 
        }
    }

    return x;
}
