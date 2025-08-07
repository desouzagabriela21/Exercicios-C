
#include <stdio.h>

int main()
{
    int planetas, i, mais=0, menos=0;
    float agua;
    
    printf("Informe a quantidade de planetas visitados: ");
    scanf("%d", &planetas);
    
    for (i = 1; i <= planetas; i++) {
        
    printf("Informe a porcentagem de água: ");
    scanf("%f", &agua);    

    if(agua > 50){
        mais++;
    }
    
    if(agua <= 50){
        menos++;
    }
    }
    
    printf("Planetas com mais de 50 porcento de água: %d\n", mais);
    printf("Planetas com 50 porcento ou menos de água: %d\n", menos);
    

   

    return 0;
}