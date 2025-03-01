#include <stdio.h>

int main() {
    double num1, num2, num3, media;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);
    printf("Digite o terceiro número: ");
    scanf("%lf", &num3);

    media = (num1 + num2 + num3) / 3;
    printf("A média é: %.2f\n", media);

    return 0;
}
