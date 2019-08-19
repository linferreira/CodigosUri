#include <stdio.h>
int main (void)
{
  int N, ano, mes, dia, DiasAno, DiasMes;
   
   DiasAno = 365;
   DiasMes = 30;
   
  scanf("%i", &N);
   
    dia = (N%DiasAno)%DiasMes;
    mes = (N%DiasAno)/DiasMes;
    ano = N/DiasAno;
    
  
  printf("%i ano(s)\n",ano);
  printf("%i mes(es)\n",mes);
  printf("%i dia(s)\n",dia);
  
  
  return 0;
}