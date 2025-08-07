
#include <stdio.h>

int main()
{
   float nota[5];
   float maior = 0;
   float menor;
   int i = 0;
   
    for (i = 0; i < 5; i++){
       printf("Informe uma nota de 0 a 10 para o %d filme: ",i + 1);
       scanf("%f", &nota[i]);
    }
        menor = nota[0];  
        
  for (i = 0; i < 5; i++){
       printf("A nota do %d filme é: %.2f\n",i + 1,nota[i]);
       
  if (nota[i] > maior){
        maior = nota[i];
    }
    
  if (nota[i] < menor){
        menor = nota[i];
     }
  
   }
    
     printf("A menor nota foi: %.2f\n", menor);
     printf("A maior nota foi: %.2f", maior);
 

   
    return 0;
}