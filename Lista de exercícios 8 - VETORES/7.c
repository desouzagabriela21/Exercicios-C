
#include <stdio.h>

int main()
{
   float sobras[7];
   int i = 0;
   float dias = 0;
   float maior = 0;
   
    for (i = 0; i < 7; i++){
       printf("Sobras no dia %d: ",i + 1);
       scanf("%f", &sobras[i]);
       
    if (sobras[i] <= 50){
        dias = dias + 1;
    }
     }
     
     printf("Dias que tiveram menos de 50 pães sobrando: %.f", dias);
 

   
    return 0;
}