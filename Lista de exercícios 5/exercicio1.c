#include <stdio.h>

int main()
{
      int senha;
      
      printf("Digite a senha: ");
      scanf("%d", &senha); 
      
      if (senha == 1234){
          printf("Cofre aberto");
      }
        else{
        printf("Senha incorreta");
    
      }

    return 0;
}