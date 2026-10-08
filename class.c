#include <stdio.h>
int main(){
    char name[50];
    printf("Welcome User!\n");
    printf("Enter your name: \n");
    scanf("%49[^\n]", &name);
    if(strcmp(name, "Shikuambi") == 0){
        printf("Greatings Shikuambi!\n");
    }else{
        printf("bye!\n");
    } 
    return 0;
}