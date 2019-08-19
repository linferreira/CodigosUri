#include <stdio.h>
int main (void){
	double raio, volume;
	  
	scanf("%lf", &raio);
	  
		volume = (raio*raio*raio)*3.14159*(4/3.0);
		
	printf("VOLUME = %.3lf\n",volume);
	
	return 0; 
}