#include <stdio.h>

int main() {
    int num, i;
    int maior, menor;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (i == 1) {
            maior = num;
            menor = num;
        } else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }

    printf("Maior número digitado: %d\n", maior);
    printf("Menor número digitado: %d\n", menor);

    return 0;
}
