#include <stdio.h>

int main() {

    char letter = 'M';
    int number = 42;
    float pi = 3.141590f;
    double value = 98.765432;

    printf("Type Name\tVariable Value\tSize in Memory\n");
      
    printf("char\t\t'%c'\t\t\t\t%zu byte(s)\n", letter, sizeof(letter));
    printf("int\t\t\t%d\t\t\t\t%zu byte(s)\n", number, sizeof(number));
    printf("float\t\t%f\t\t%zu byte(s)\n", pi, sizeof(pi));
    printf("double\t\t%f\t\t%zu byte(s)\n", value, sizeof(value));
    
    return 0;
}