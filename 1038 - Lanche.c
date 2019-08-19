#include "stdio.h"

int main(void){
	int QTD, COD;
	  
	scanf("%i", &COD);
	scanf("%i", &QTD);
	  
	if (COD == 1)
		printf("Total: R$ %.2f\n",QTD*4.00);
	
	else if (COD == 2)
		printf("Total: R$ %.2f\n",QTD*4.50);

	else if (COD == 3) 
		printf("Total: R$ %.2f\n",QTD*5.00);

	else if (COD == 4)
		printf("Total: R$ %.2f\n",QTD*2.00);

	else if(COD == 5)
		printf("Total: R$ %.2f\n",QTD*1.50);
		 
	return 0;
}