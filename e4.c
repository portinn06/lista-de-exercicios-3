#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    do {
        printf("Enter the second number (cannot be zero): ");
        scanf("%f", &num2);

        if (num2 == 0) {
            printf("VALOR INV�LIDO.\n");
        }
    } while (num2 == 0);

    printf("Result of division: %.2f\n", num1 / num2);

    return 0;
}