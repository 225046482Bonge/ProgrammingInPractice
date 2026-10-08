#include <stdio.h>
#include <string.h>

int main() {
    char name[100] = "";
    char email[100] = "";
    char phone[30] = "";
    char town[50] = "";
    char searchName[100];
    int choice;
    int isAdded = 0;

    do {
        printf(" MUNICIPAL FINANCIAL MANAGEMENT \n");
        printf("1. Add Supplier\n");
        printf("2. Display Supplier\n");
        printf("3. Search Supplier\n");
        printf("4. Show Name Length\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // consume trailing newline

        switch (choice) {
            case 1:
                printf("\nEnter supplier name: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0';

                printf("Enter email: ");
                fgets(email, sizeof(email), stdin);
                email[strcspn(email, "\n")] = '\0';

                printf("Enter phone: ");
                fgets(phone, sizeof(phone), stdin);
                phone[strcspn(phone, "\n")] = '\0';

                printf("Enter town: ");
                fgets(town, sizeof(town), stdin);
                town[strcspn(town, "\n")] = '\0';

                isAdded = 1;
                printf("Supplier added successfully.\n");
                break;

            case 2:
                if (!isAdded) {
                    printf("\nNo supplier information available.\n");
                } else {
                    printf("\n--- SUPPLIER DETAILS ---\n");
                    printf("Name:  %s\n", name);
                    printf("Email: %s\n", email);
                    printf("Phone: %s\n", phone);
                    printf("Town:  %s\n", town);
                }
                break;

            case 3:
                if (!isAdded) {
                    printf("\nNo suppliers registered to search.\n");
                } else {
                    printf("\nEnter supplier name to search: ");
                    fgets(searchName, sizeof(searchName), stdin);
                    searchName[strcspn(searchName, "\n")] = '\0';

                    if (strcmp(name, searchName) == 0) {
                        printf("Supplier found!\n");
                    } else {
                        printf("Supplier not found.\n");
                    }
                }
                break;

            case 4:
                if (!isAdded) {
                    printf("\nNo supplier available to check length.\n");
                } else {
                    printf("\nSupplier name length: %zu characters\n", strlen(name));
                }
                break;

            case 5:
                printf("\nExiting Supplier Module...\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}