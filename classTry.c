#include <stdio.h>
int main(){
int numbers[6] = {50, 10, 70, 20, 21,7};
int temp;

for(int i = 0; i < 6 - 1; i++){
    for(int j = 0; j < 6 - i - 1; j++){
        if(numbers[i] > numbers[j+1]){
            temp = numbers[i];
            numbers[i] = numbers[j+1];
            numbers[j+1] = temp;
        }
    }
}
printf("Sorted numbers: ");
for(int i = 0; i < 6; i++){
    printf("%d\n ", numbers[i]);
}
