#include <stdio.h>

float calculateVAT(float amount) {
    return amount * 0.15f;
}

int main() {
    float amount, vat;
    printf("Enter amount: ");
    scanf("%f", &amount);

    vat = calculateVAT(amount);
    printf("VAT: %.2f\n", vat);

    return 0;
}