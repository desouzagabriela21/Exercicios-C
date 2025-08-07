
#include <stdio.h>

int main()
{
   
   int energia1, energia2 = 0;
  
    do {
        printf("Informe a energia do cristal: ");
        scanf("%d", &energia1);
        
       if(energia1 >= 0){
       energia2 = energia2 + energia1;
       
       }
       } while(energia1 >= 0);
    
    printf("Parabéns! O total de energia coletada foi de %d", energia2);
    
    
    return 0;
    
    }