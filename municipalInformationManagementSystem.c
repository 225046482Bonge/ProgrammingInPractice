#include <stdio.h>
#include <string.h>

int main(){
   //Employee Salaries
    double salaries[50];
    double totalSalary = 0, averageSalary;
    double highestSalary, lowestSalary;
    double searchSalary;
    int found = 0;

    printf("===== EMPLOYEE SALARIES =====\n");

    for(int i = 0; i < 50; i++)
    {
        printf("Enter salary %d: ", i + 1);
        scanf("%lf", &salaries[i]);
        totalSalary += salaries[i];
    }

    printf("\nAll Salaries:\n");
    for(int i = 0; i < 50; i++)
    {
        printf("%.2lf\n", salaries[i]);
    }

    averageSalary = totalSalary / 50;

    highestSalary = salaries[0];
    lowestSalary = salaries[0];

    for(int i = 1; i < 50; i++)
    {
        if(salaries[i] > highestSalary)
            highestSalary = salaries[i];

        if(salaries[i] < lowestSalary)
            lowestSalary = salaries[i];
    }

    printf("\nAverage Salary: %.2lf\n", averageSalary);
    printf("Highest Salary: %.2lf\n", highestSalary);
    printf("Lowest Salary: %.2lf\n", lowestSalary);

    printf("\nEnter salary to search: ");
    scanf("%lf", &searchSalary);

    found = 0;
    for(int i = 0; i < 50; i++)
    {
        if(salaries[i] == searchSalary)
        {
            printf("Salary found at position %d\n", i + 1);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Salary not found.\n");
    }

    //Department Budgets
    float budgets[10];
    float totalBudget = 0, averageBudget;
    float temp;

    printf("\n\n===== DEPARTMENT BUDGETS =====\n");

    for(int i = 0; i < 10; i++)
    {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
        totalBudget += budgets[i];
    }

    printf("\nDepartment Budgets:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%.2f\n", budgets[i]);
    }

    averageBudget = totalBudget / 10;

    printf("\nTotal Budget: %.2f\n", totalBudget);
    printf("Average Budget: %.2f\n", averageBudget);

    // Sort budgets from lowest to highest
    for(int i = 0; i < 9; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(budgets[i] > budgets[j])
            {
                temp = budgets[i];
                budgets[i] = budgets[j];
                budgets[j] = temp;
            }
        }
    }

    printf("\nBudgets Sorted (Lowest to Highest):\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%.2f\n", budgets[i]);
    }

    //Vehicle Registration Numbers
    char registrations[20][20];
    char searchReg[20];

    printf("\n\n===== VEHICLE REGISTRATION NUMBERS =====\n");

    for(int i = 0; i < 20; i++)
    {
        printf("Enter registration number %d: ", i + 1);
        scanf("%s", registrations[i]);
    }

    printf("\nRegistration Numbers:\n");
    for(int i = 0; i < 20; i++)
    {
        printf("%s\n", registrations[i]);
    }

    printf("\nEnter registration number to search: ");
    scanf("%s", searchReg);

    found = 0;
    for(int i = 0; i < 20; i++)
    {
        if(strcmp(registrations[i], searchReg) == 0)
        {
            printf("Registration number found at position %d\n", i + 1);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Registration number not found.\n");
    }

    return 0;
}