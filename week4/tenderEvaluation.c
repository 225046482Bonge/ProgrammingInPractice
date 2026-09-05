#include <stdio.h>
int main(){
char supplierName[50];
double price;
double budget;
int registered;
int documentsComplete;

printf("Enter supplier name: ");
scanf("%49[^\n]", supplierName);

printf("Enter tender price: ");
scanf("%lf", &price);

printf("Enter available budget: ");
scanf("%lf", &budget);

printf("Is supplier registered? (1=Yes, 0=No): ");
scanf("%d", &registered);

printf("Are all documents complete? (1=Yes, 0=No): ");
scanf("%d", &documentsComplete);

if (registered == 0 || documentsComplete == 0){
printf("Supplier: %s\n", supplierName);
printf("Status: Disqualified \n");
}
else if (price > budget){
printf("Supplier: %s \n", supplierName);
printf("Status: Disqualified \n");
}
else{
printf("Supplier: %s \n", supplierName);
printf("Status: Qualified \n");
}
return 0;
}