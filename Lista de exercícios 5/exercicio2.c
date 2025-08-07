
#include <stdio.h>

int main()
{
   int idade;
   
   printf("Para iniciar o treino, informe sua idade: ");
   scanf("%d", &idade);
   
       if (idade <= 11){
           printf("Menores de 12 anos não podem treinar.");
       } 
       
        if (idade >= 12 && idade <= 17){
           printf("Pessoas de 12 a 17 anos precisam de autorização dos pais.");
       } 
       
        if (idade >= 18){
           printf("Treino liberado");
       } 

    return 0;
}