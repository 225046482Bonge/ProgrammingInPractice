#include <stdio.h>

int searchEmployee(int id, int ids[], int size) {
    for (int i = 0; i < size; i++) {
        if (ids[i] == id) {
            return i; // position/index found
        }
    }
    return -1; // not found
}

int main() {
    int employeeIDs[] = {101, 102, 103, 104, 105};
    int size = sizeof(employeeIDs) / sizeof(employeeIDs[0]);
    int targetID, position;

    printf("Enter employee ID: ");
    scanf("%d", &targetID);

    position = searchEmployee(targetID, employeeIDs, size);

    if (position != -1) {
        printf("Employee found at position %d.\n", position);
    } else {
        printf("Employee not found.\n");
    }

    return 0;
}