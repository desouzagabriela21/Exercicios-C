#include <stdio.h>

int main()
{
	int opcao;

	printf("======Menu======  \n");
	printf("Selecione um sabor de sorvete abaixo:  \n");
	printf("1 - Chocolate \n");
	printf("2 - Morango \n");
	printf("3 - Baunilha \n");
	printf("4 - Pistache \n");
	scanf("%d", &opcao);
	
	
	switch (opcao){
	    
	  case 1: 
	  printf("Sabor selecionado: Chocolate"); break;
	  
	  case 2: 
	  printf("Sabor selecionado: Morango"); break;
	  
	  case 3: 
	  printf("Sabor selecionado: Baunilha"); break;
	  
	  case 4: 
	  printf("Sabor selecionado: Pistache"); break;
	  
	  default:
      printf("Opção inválida");
}
    return 0;
}