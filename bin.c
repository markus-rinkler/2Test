#include <stdio.h>

//strings ermitteln 
int strlength(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

//funktionen
int power(int base, int exp) {
    for(int i = 1; i < exp; i++) {
        base *= base;
    }
    //neg. exp. micht berücksichtigen

    return base;
}




//main
int main(int argc, char* argv[]) { 
    //programm genau eine kommandozeilenargument entgegennehmen
    if(argc > 1) {
        printf("%d\n", strlength(argv[1]));
    }

    return 0;
}