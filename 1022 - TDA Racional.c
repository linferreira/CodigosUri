#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int mdc(int m, int n){	
	if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}

typedef struct {int num, den;} TRac;

TRac SomaRac(TRac, TRac);
TRac SubtraiRac(TRac, TRac);
TRac MultRac(TRac, TRac);
TRac DivRac(TRac, TRac);
TRac SimplRac(TRac);

TRac SomaRac(TRac n1, TRac n2){	
	TRac res;

	res.num = n1.num * n2.den + n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac SubtraiRac(TRac n1, TRac n2){	
	TRac res;

	res.num = n1.num * n2.den - n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac MultRac(TRac n1, TRac n2){	
	TRac res;
	
	res.num = n1.num * n2.num;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac DivRac(TRac n1, TRac n2){	
	TRac res;
	
	res.num = n1.num * n2.den;
	res.den = n2.num * n1.den;
	
	return res;
}

TRac SimplRac(TRac n1){	
	TRac res;
	
	res.num = n1.num / mdc(n1.num, n1.den);
	res.den = n1.den / mdc(n1.num, n1.den);
	
	return res;
}

int main ()
{
	int N, i;
	TRac X, Y, R, b;
	char Op;
  	
	scanf ("%d", &N);
	for (i=0; i<N; i++){
		scanf ("%d / %d %c %d / %d", &X.num, &X.den, &Op, &Y.num, &Y.den);
		if (Op == '+'){
			R = SomaRac(X, Y);	
			printf("%d/%d =", R.num, R.den);
			b = R;
			R = SimplRac(b);
			printf(" %d/%d\n", R.num, R.den);
		}
	
		if (Op == '-'){
			R = SubtraiRac(X, Y);		
			printf("%d/%d =", R.num, R.den);
			b = R;
			R = SimplRac(b);
			printf(" %d/%d\n", R.num, R.den);
		}
	
		if (Op == '*'){
			R = MultRac(X, Y);	
			printf("%d/%d =", R.num, R.den);
			b = R;
			R = SimplRac(b);
			printf(" %d/%d\n", R.num, R.den);
		}
	
		if (Op == '/'){
			R = DivRac(X, Y);	
			printf("%d/%d =",R.num, R.den);
			b = R;
			R = SimplRac(b);
			printf(" %d/%d\n",R.num, R.den);
		}
	}
	return 0;
}