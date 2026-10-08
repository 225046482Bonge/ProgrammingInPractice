#include <stdio.h>

void displayMenu() {

    printf(" MUNICIPAL FINANCIAL MANAGEMENT \n");

    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
}

int main() {
    displayMenu();
    return 0;
}