#include <stdio.h>
#include <string.h>

int main() {
    char supplierName[50] = "ABC Office Supplies";
    char town[50] = "Windhoek";
    char sentence[150] = "";

    strcpy(sentence, supplierName);
    strcat(sentence, " operates in ");
    strcat(sentence, town);
    strcat(sentence, ".");

    printf("%s\n", sentence);

    return 0;
}