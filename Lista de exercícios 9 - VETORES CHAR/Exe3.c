#include <stdio.h>

int main() {
  char frase [50];
  printf("Digite uma frase de até 20 caracteres: ");
  fgets(frase, 21, stdin);
  printf("Palavra: %s", frase);


  return 0;
}