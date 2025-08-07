#include <stdio.h>

int main() {
    int senhaCorreta = 2468;
    int senhaDigitada;
    int tentativas = 0;
    int maxTentativas = 3;

    while (tentativas < maxTentativas) {
        printf("Digite a senha: ");
        scanf("%d", &senhaDigitada);

        if (senhaDigitada == senhaCorreta) {
            printf("Acesso permitido\n");
            return 0;
        } else {
            printf("Senha incorreta\n");
            tentativas++;
        }
    }

    printf("Acesso bloqueado\n");
    return 0;
}
