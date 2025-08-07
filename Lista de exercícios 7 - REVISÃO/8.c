#include <stdio.h>

int main() {
    float valorCompra;
    int cupons;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    cupons = (int)(valorCompra / 20);

    printf("Quantidade de cupons ganhos: %d\n", cupons);

    return 0;
}
