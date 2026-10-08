#include <stdio.h>

float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

int main() {
    float revenue, expenses, balance;

    printf("Enter revenue: ");
    scanf("%f", &revenue);
    printf("Enter expenses: ");
    scanf("%f", &expenses);

    balance = calculateBudget(revenue, expenses);
    printf("Budget Balance: %.2f\n", balance);

    if (balance > 0) {
        printf("SURPLUS\n");
    } else if (balance < 0) {
        printf("DEFICIT\n");
    } else {
        printf("BALANCED\n");
    }

    return 0;
}