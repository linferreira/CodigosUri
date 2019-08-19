#include <stdio.h>
int main (void)
{
	char Nome;
	double SalFixo, Vendas,Total;
	  
	scanf("%s", &Nome);
	scanf("%lf", &SalFixo);
	scanf("%lf", &Vendas);

		Total = SalFixo + Vendas*0.15; 

	printf("TOTAL = R$ %.2lf\n", Total);
	  	
	return 0;
}