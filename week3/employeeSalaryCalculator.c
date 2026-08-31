#include <stdio.h>
int main()
{
double basicSalary;
double housing;
double transport;
double tax=0.15;
double grossSalary;
double netSalary;

printf("Enter basic salary: ");
scanf("%lf", &basicSalary);

printf("Enter housing allowance: ");
scanf("%lf", &housing);

printf("Enter transport allowance: ");
scanf("%lf", &transport);

grossSalary = basicSalary + housing + transport;
netSalary = grossSalary - tax;

printf("Gross Salary: %.2f\n", grossSalary);
printf("Net Salary: %.2f\n", netSalary);
return 0;
}