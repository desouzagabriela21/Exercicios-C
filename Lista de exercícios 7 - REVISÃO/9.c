#include <stdio.h>

int main() {
    float nota, soma = 0.0, media;
    int i;

    for (i = 1; i <= 3; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }
    media = soma / 3;

    if (media >= 7.0) {
        printf("Aluno aprovado. Media = %.2f\n", media);
    } else {
        printf("Aluno reprovado. Media = %.2f\n", media);
    }

    return 0;
}
