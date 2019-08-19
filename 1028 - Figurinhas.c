#include <stdio.h>

int mdc( int n, int m ){   
	
	if( n < 0 ) n = -n;
    if( m < 0 ) m = -m;

    if( n % m == 0 )
		return m;
    else
		return mdc(m, n % m);
}

int main(){
	int cont, a, b, i;

	scanf("%d", &cont);

	for(i = 0; i < cont; i++){
		scanf("%d %d" , &a, &b);
	 
		printf("%d\n", mdc(a, b));
	}
}