#include <stdio.h>

// Function Prototypes
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
void displayMenu();
int searchEmployee(int id, int ids[], int size);

int main() {
    int choice;
    int employeeIDs[] = {101, 102, 103, 104, 105};
    int size = 5;

    do {
        displayMenu();
        if (scanf("%d", &choice) != 1) {
            break;
        }

        switch (choice) {
            case 1: {
                float amount;
                printf("\nEnter amount: ");
                scanf("%f", &amount);
                printf("VAT (15%%): %.2f\n", calculateVAT(amount));
                break;
            }
            case 2: {
                float basic, housing, transport;
                printf("\nEnter Basic salary: ");
                scanf("%f", &basic);
                printf("Enter Housing allowance: ");
                scanf("%f", &housing);
                printf("Enter Transport allowance: ");
                scanf("%f", &transport);
                printf("Gross Salary: %.2f\n", calculateSalary(basic, housing, transport));
                break;
            }
            case 3: {
                float revenue, expenses, balance;
                printf("\nEnter Revenue: ");
                scanf("%f", &revenue);
                printf("Enter Expenses: ");
                scanf("%f", &expenses);
                balance = calculateBudget(revenue, expenses);
                printf("Budget Balance: %.2f -> ", balance);
                if (balance > 0) printf("SURPLUS\n");
                else if (balance < 0) printf("DEFICIT\n");
                else printf("BALANCED\n");
                break;
            }
            case 4: {
                int searchID, pos;
                printf("\nEnter Employee ID to search: ");
                scanf("%d", &searchID);
                pos = searchEmployee(searchID, employeeIDs, size);
                if (pos != -1) {
                    printf("Employee found at index position %d.\n", pos);
                } else {
                    printf("Employee not found.\n");
                }
                break;
            }
            case 5:
                printf("\nGoodbye.\n");
                break;

            default:
                printf("\nInvalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function Definitions
void displayMenu() {
    printf("\n====================================\n");
    printf(" MUNICIPAL FINANCIAL MANAGEMENT     \n");
    printf("====================================\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Search Employee\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
}

float calculateVAT(float amount) {
    return amount * 0.15f;
}

float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

int searchEmployee(int id, int ids[], int size) {
    for (int i = 0; i < size; i++) {
        if (ids[i] == id) {
            return i;
        }
    }
    return -1;
}