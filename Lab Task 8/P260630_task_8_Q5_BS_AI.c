#include <stdio.h>

void showBalance(float *balance) {
    printf("Balance: Rs %.2f\n", *balance);
}

void deposit(float *balance, float amount) {
    if (amount <= 0) {
        printf("Invalid amount.\n");
        return;
    }
    *balance = *balance + amount;
}

int withdraw(float *balance, float amount) {
    if (amount <= 0 || amount > *balance) {
        return 0;
    }
    *balance = *balance - amount;
    return 1;
}

int main() {
    float balance = 5000.0;
    int choice;
    float amount;

    do {
        printf("----- BANK ACCOUNT -----\n");
        printf("1. Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            showBalance(&balance);

        else if (choice == 2){
            printf("Amount: ");
            scanf("%f", &amount);
            deposit(&balance, amount);
        }

        else if (choice == 3){
            printf("Amount: ");
            scanf("%f", &amount);
            if (withdraw(&balance, amount) == 1)
                printf("Withdrawn.\n"); 
            else 
                printf("Insufficient balance.\n");
        }
                
        else if (choice == 4)
            printf("Goodbye!\n");
         
        else
            printf("Invalid choice.\n");
                
        
    } while (choice != 4);

    return 0;
}
