
#include <stdio.h>

int main()
{
   float numero[5];
   float quadrado[5];
   int i;
 
   
    for (i = 0; i < 10; i++){
       printf("Informe o %d° número: ",i + 1);
       scanf("%f", &numero[i]);
       quadrado[i] = numero[i] * numero[i];
       printf("O quadrado de %.f é %.f\n\n", numero[i],quadrado[i]);

    }


 

   
    return 0;
}