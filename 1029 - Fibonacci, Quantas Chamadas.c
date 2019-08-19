#include <stdio.h>

int N, x; // Contador do loop e aux
int I; // o fibo

int fibo(int i){
	if(i<=2){
		return 1;
	} 
	else{
		return fibo(i - 1) + fibo(i-2);
	}
}

int call(int j){

	if(j<=1){
		return 0;
	}

	if(j == 2){
		return 2;
	}

	if(j>2){
		return (call(j-1) * 2) - call(j-3);
	}
}

int main(){
  scanf("%d", &N);

  for(x = 0; x < N; x++){
	scanf("%d", &I);
	printf("fib(%d) = %d calls = %d\n",I ,call(I) ,fibo(I));
  } 

  return 0;
}