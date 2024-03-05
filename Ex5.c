#include <stdio.h>

int main() {
    char string[] = "paralelepipedo"; 
    char stringAux[30];
    int i, j = 0;

    while (string[j] != '\0') {
        j++;
    }
    j--; 
    
    for (i = 0; i <= j; i++) {
        stringAux[i] = string[j - i];
    }
    stringAux[i] = '\0'; 

    printf("\nInversao: %s.\n\n", stringAux);

    return 0;
}
