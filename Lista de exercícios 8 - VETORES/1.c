
#include <stdio.h>

int main()
{
   float moedas[5];
   
   for (int i = 0; i < 5; i++){
       printf("Digite o valor da moeda: ");
       scanf("%f", &moedas[i]);
       }
       
   for (int i = 0; i < 5; i++){
       printf("\nR$%.2f", moedas[i]);
     
       }
   
    return 0;
}