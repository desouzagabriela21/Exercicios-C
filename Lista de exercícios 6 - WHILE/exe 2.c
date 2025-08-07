
#include <stdio.h>

int main()
{
   
   int senha;
  
   do {
    printf("Escolha um número de 1 a 100 para encontrar o tesouro: ");
    scanf("%d", &senha);
    
    if (senha > 16){
        printf("Menos! \n");
    }
    if (senha < 16){
        printf("Mais alto! \n");
    }
    
   }while(senha != 16);
   
   
    printf("Você encontrou o tesouro!");
    
    
    return 0;
    
    }