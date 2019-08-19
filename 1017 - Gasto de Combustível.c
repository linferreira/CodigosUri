#include "stdio.h"

int main(void) 
{
 float tempo, VM, combustivel;
    scanf("%f %f", &tempo, &VM);
   
   combustivel = (tempo*VM)/12;
   
   printf("%.3f\n",combustivel);
   
   
  return 0;
}