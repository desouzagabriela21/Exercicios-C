
#include <stdio.h>

int main()
{
   float temperatura[7];
   
   for (int i = 0; i < 7; i++){
       printf("Digite as temperaturas máximas de 7 dias: ");
       scanf("%f", &temperatura[i]);
       }
       
   for (int i = 0; i < 7; i++){
       printf("\n%.f°C", temperatura[i]);
     
       }
   
    return 0;
}