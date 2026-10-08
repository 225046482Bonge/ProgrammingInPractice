#include <stdio.h>

float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

int main() {
    float basic, housing, transport, gross;

    printf("Basic salary: ");
    scanf("%f", &basic);
    printf("Housing allowance: ");
    scanf("%f", &housing);
    printf("Transport allowance: ");
    scanf("%f", &transport);

    gross = calculateSalary(basic, housing, transport);
    printf("Gross salary: %.2f\n", gross);

    return 0;
}