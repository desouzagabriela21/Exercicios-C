
#include <stdio.h>

int main()
{
   float produto[5];
   int i = 0;
   
   for (i = 0; i < 5; i++){
       printf("Digite a quantidade do produto %d: ",i + 1);
       scanf("%f", &produto[i]);
     }
       
   for (int i = 0; i < 5; i++){
     if(produto[i] > 0){
       printf("\nQuantidade do produto %.d: %.f", i+1, produto[i]);
     }
     
     if(produto[i] == 0){
         printf("\nO produto %.d está em falta!",i+1);
     }
     
     }
   
    return 0;
}