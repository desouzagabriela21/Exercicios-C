#include <stdio.h>

int main()
{
   float compra, desconto;
   
    printf("Para calcular o desconto, informe o valor da compra: ");
    scanf("%f", &compra);
   
    if(compra >= 100){ 
       
    desconto = compra * 0.9;
    printf("Desconto aplicado! \n Valor atual: %f", desconto);
    
}
    else{ 
    printf("Valor da compra não é elegivel a desconto");

}
    return 0;
}