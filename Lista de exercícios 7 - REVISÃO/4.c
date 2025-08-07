#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Voto proibido\n");
    } else if ((idade >= 16 && idade < 18) || (idade > 65)) {
        printf("Voto facultativo\n");
    } else {
        printf("Voto obrigatório\n");
    }

    return 0;
}
