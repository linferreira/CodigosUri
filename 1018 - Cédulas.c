#include <stdio.h>

int main(void) {
 int x, a, b, c, d, e, f, g;
 
 scanf("%d", &x);
 printf("%d\n", x);
 
 a = x/100;
 printf("%d nota(s) de R$ 100,00\n", a);
 
 b= (x%100)/50;
 printf("%d nota(s) de R$ 50,00\n", b);
 
 c= ((x%100)%50)/20;
 printf("%d nota(s) de R$ 20,00\n", c);
 
 d = (((x%100)%50)%20)/10;
 printf("%d nota(s) de R$ 10,00\n", d);
 
 e = ((((x%100)%50)%20)%10)/5;
 printf("%d nota(s) de R$ 5,00\n", e);
 
 f = (((((x%100)%50)%20)%10)%5)/2;
 printf("%d nota(s) de R$ 2,00\n", f);
 
 g = ((((((x%100)%50)%20)%10)%5)%2);
 printf("%d nota(s) de R$ 1,00\n", g );
 
 
  return 0;
}