#include <stdio.h>

int accountNumber;
char accountName[50];
float accountBalance = 0;

// this function is used to create an account
void createAccount() {
    printf("Enter your name = ");
    scanf("%s", accountName);
    printf("Enter the account Number = ");
    scanf("%d", &accountNumber);
    
    printf("Account Created \n");
}
// this function is used to display users information
void printAccountInfo() {
    printf("Name: %s \n", accountName);
    printf("Account Number: %d \n", accountNumber);
    printf("Balance: %f \n", accountBalance);
}

//this function is used to check balance 
void checkBalance() {
    printf("Your Balance is: %f \n", accountBalance);
}

//this function is used to deposit money 
void deposit() {
    float deposit;
    printf("Enter the amount to deposit: ");
    scanf("%f", &deposit);
    accountBalance = accountBalance + deposit;
    printf("Your money is deposited \n");
    printf("Your New balance is: %f \n", accountBalance);
}

//this function is used to withdraw money 
void withdraw() {
    float withdraw;
    printf("Enter the amount to withdraw: ");
    scanf("%f", &withdraw);
    accountBalance = accountBalance - withdraw;
    printf("Your money is withdrawn \n");
    printf("Your New balance is: %f \n", accountBalance);
}



int main() {
    int choice;
    do {
        printf("\n\n Banking System \n");
        printf("1. Create your account ");
        printf("2. Info ");
        printf("3. Check Balance ");
        printf("4. Deposit ");
        printf("5. Withdraw \n");
        printf("Enter your choice = ");
        scanf("%d", &choice);
        
        //this is a switch case implementation 
        switch(choice) {
            case 1: createAccount(); break;
            case 2: printAccountInfo(); break;
            case 3: checkBalance(); break;
            case 4: deposit(); break;
            case 5: withdraw(); break;
            case 0: printf("Exiting \n"); break;
            default: printf("Invalid \n");
        }
    } while (choice != 0);
    
    return 0;
}