#include <stdio.h>

/*

void showMenu(void)     =     Category: No arguments, no return value
int readNonNegative(void)  =  Category: No arguments, returns a value
void printLine(int length) =  Category: Arguments, no return value
long power(int base, int exp)=Category: Arguments, returns a value
long factorial(int n)    =    Category: Arguments, returns a value
int gcd(int a, int b)    =    Category: Arguments, returns a value
int lcm(int a, int b)     =   Category: Arguments, returns a value

power()
Returning a value allows the result to be used in other math equations too instead of just printing it.
 */

void showMenu(void);
int readNonNegative(void);
void printLine(int length);
long power(int base, int exp);
long factorial(int n);
int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    int choice;

    do {
        showMenu();
        
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int base = readNonNegative();
            int exp = readNonNegative();
            printLine(20);
            printf("%d ^ %d = %ld\n", base, exp, power(base, exp));
            printLine(20);
        } 
        else if (choice == 2) {
            int n = readNonNegative();
            printLine(20);
            printf("%d! = %ld\n", n, factorial(n));
            printLine(20);
        } 
        else if (choice == 3) {
            int a = readNonNegative();
            int b = readNonNegative();
            printLine(20);
            printf("GCD = %d\n", gcd(a, b));
			printf("LCM = %d\n", lcm(a, b));
			printLine(20);
        } 
        else if (choice == 4) {
            printf("Goodbye!\n");
        } 
        else {
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}

void showMenu(void) {
    printf("----- MINI MATH TOOLKIT -----\n");
    printf("1. Power\n");
    printf("2. Factorial\n");
    printf("3. GCD and LCM\n");
    printf("4. Exit\n");
}

int readNonNegative(void) {
    int val;
    do {
        printf("Enter a non-negative integer: ");
        scanf("%d", &val);
        if (val < 0) {
            printf("Error: Number cannot be negative. Try again.\n");
        }
    } while (val < 0);
    return val;
}

void printLine(int length) {
    for (int i = 0; i < length; i++) {
        printf("-");
    }
    printf("\n");
}

long power(int base, int exp) {
    long result = 1;
    for (int i = 0; i < exp; i++) {
        result = result * base;
    }
    return result;
}

long factorial(int n) {
    long result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return (a * b) / gcd(a, b);
}
