/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    
    printf("Informe a quantidade de passos: ");
    scanf("%d", &num);
    
    
    for(int i = 0; i <= num; i++){
        printf("Passo %d \n", i);
    }
    
    
    return 0;
}