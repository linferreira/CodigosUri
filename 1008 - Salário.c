#include <stdio.h>
int main (){
  int NumFunc, HorasTrab;
  float ValHora, SalFinal;
  
  scanf("%d", &NumFunc);
  scanf("%d", &HorasTrab);
  scanf("%f", &ValHora);
  
    SalFinal = HorasTrab*ValHora;
    
  printf("NUMBER = %d\n",NumFunc);
  printf("SALARY = U$ %.2f\n", SalFinal);
  
  return 0;
  
}