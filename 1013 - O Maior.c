#include <stdio.h>
int main (){
	int A, B, C, MaiorAB;
  
	scanf("%i", &A);
	scanf("%i", &B);
	scanf("%i", &C);
  
		MaiorAB = (A+B+abs(A-B))/2;
		MaiorAB = (C+MaiorAB+abs(C-MaiorAB))/2;
  
	  printf("%i eh o maior\n", MaiorAB);

	return 0;
}