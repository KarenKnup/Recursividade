#include <stdio.h>

float Log (int base, int val){
  if(val==1){
    return 0;
  } else {
    return 1+Log(base,val/base);
  }
}

float LogIterativo (int base, int val){
  float l, loga=0;
  
  while(val>=1){
    if(val==1){
      l=0;
    } else {
      l=1;
    }

    loga=loga+l;
    val=val/base;
  }

  return loga;
}

int main(void) {
  int a=3, b=81, c=10, d=15;

  printf("\n\t log%d(%d) = %.2f",a,b,LogIterativo (a,b));
  printf("\n\t log%d(%d) = %.2f",c,d,LogIterativo (c,d));
  
  return 0;
}