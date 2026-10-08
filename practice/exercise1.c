#include <stdio.h>
int main(){

    int num[4];
    int sum=0;
    float average;
    int i=0;
    

    while(i<4){
        printf("Enter number %d!\n: ", i+1);
        scanf("%d", &num[i]);
        sum = sum + num[i];
        i++;
    }

    printf("Number 1 is %d\n", num[0]);
    printf("Number 2 is %d\n", num[1]);
    printf("Number 3 is %d\n", num[2]);
    printf("Number 4 is %d\n", num[3]);

    average = sum / 4;

    printf("The sum is: %d\n", sum);
    printf("The average is: %.2f\n", average);

    return 0;
}

