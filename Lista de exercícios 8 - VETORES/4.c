
#include <stdio.h>

int main()
{
   float faturamento[7];
   int i = 0;
   float soma = 0;
   float maior = 0;
   
   for (i = 0; i < 7; i++){
       printf("Informe o faturamento do dia %d: ",i + 1);
       scanf("%f", &faturamento[i]);
       soma = soma + faturamento[i];
    if (faturamento[i] > maior){
        maior = faturamento[i];
    }
     }
    
     printf("O faturamento total foi de R$%.2f\n", soma);
     printf("O maior faturamento foi de R$%.2f", maior);
 

   
    return 0;
}