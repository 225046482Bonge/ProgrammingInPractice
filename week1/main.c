#include <stdio.h>

//budget code below
int budget() {
 double revenue;
 double expenses;
 double balance;

 printf("MUNICIPAL BUDGET CALCULATOR\n");
 printf("---------------------------\n");
 printf("Enter total revenue: ");
 scanf("%lf", &revenue);

 printf("Enter total expenses: ");
  scanf("%lf", &expenses);

 balance = revenue - expenses;

 printf("\nRevenue: %.2f\n", revenue);
 printf("Expenses: %.2f\n", expenses);
 
 if (balance > 0) {
 printf("Surplus: %.2f\n", balance);
 }
 else if (balance < 0) {
 printf("Deficit: %.2f\n", -balance);
 }
 else {
 printf("The budget is balanced.\n");
 }
 return 0;
}
//end of budget code

int main()
{
 char municipality[50];
 char mayor[50];
 int population;
 int calBudget= 0;

 printf("NUST Financial Management System\n\n");
 
 printf("Enter Municipality Name: ");
 scanf("%49[^\n]", municipality);
 
 printf("Enter Mayor: ");
 scanf(" %49[^\n]", mayor);

 printf("Enter Population: ");
 scanf("%d", &population);

 printf("\n---------------------------------\n");

 printf("Municipality : %s\n", municipality);
 printf("Mayor : %s\n", mayor);
 printf("Population : %d\n", population);

 printf("Press 1 to calculate budget: \n");
 scanf("%d", &calBudget);

 if(calBudget==1){
    budget ();
 }
 return 0;
}