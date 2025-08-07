#include <stdio.h>

int main()
{
    float paes, valor, total, precof;
    
    printf("Para calcular o desconto, informe o a quantidade de pães: ");
    scanf("%f", &paes);
    
    printf("Agora, informe o valor de cada pão: ");
    scanf("%f", &valor);
    
       total = valor * paes;   
       
    if (paes >= 6 && paes <= 10){
        precof = total * 0.95; 
        printf("Desconto de 5 porcento aplicado \nValor final: %f", precof);
    }
    
    if (paes >= 10){
        precof = total * 0.9; 
        printf("Desconto de 10 porcento aplicado \nValor final: %f", precof);
    }
    
    if (paes <= 5){
        precof = total; 
        printf("Desconto não aplicado \nValor final: %f", precof);
    } 
    return 0;
}