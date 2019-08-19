#include <stdio.h>

int main(void){
  float n1, n2, media;

  scanf("%f %f", &n1, &n2);

  media = ((n1*3.5) + (n2*7.5))/11;

  printf("MEDIA = %.5f\n", media);
  
}