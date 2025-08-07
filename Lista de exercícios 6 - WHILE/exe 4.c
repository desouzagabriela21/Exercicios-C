
#include <stdio.h>

int main()
{
   
   int moeda, soma = 0;
  
    printf("Guarde suas moedas: ");
    scanf("%d", &moeda);
  
  
    while(soma <= 100){
    
        printf("Guarde mais moedas: ");
        scanf("%d", &moeda);
        soma = soma + moeda;
    }
    
    printf("Cofre aberto!");
    
    
    return 0;
    
    }