#include <stdio.h>
int main (void)
{
  int N, seg, min, hr, seg_h;
   
   seg_h = 3600;
   
  scanf("%i", &N);
   
   hr = N/seg_h;
   min = (N-(hr*seg_h))/60;
   seg = (N-(hr*seg_h)-(min*60));
  
  printf("%i:%i:%i\n",hr,min,seg);
  
  
  return 0;
}