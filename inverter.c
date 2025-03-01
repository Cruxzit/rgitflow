#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, len;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    len = strlen(palavra);

    printf("A palavra invertida é: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}
