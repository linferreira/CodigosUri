#include <stdio.h>
int main (void){
	int X;
	float Y, Kml;
  
	scanf("%i", &X);
	scanf("%f", &Y);

		Kml = X/Y;
    
	printf("%.3f km/l\n", Kml);
    
	return 0;
}