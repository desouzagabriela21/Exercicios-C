#include <stdio.h>

int main()
{
    
 int metros1 = 0, metros2 = 0;
 
  while(metros1 <= 99  && metros2 <= 99) {
    metros1 = metros1 + 1;
    printf("Robo 1 percorreu %d metros\n", metros1);
    metros2 = metros2 + 1;
    printf("Robo 2 percorreu %d metros\n", metros2);
}
    printf("Robo 1 venceu a corrida!");
}