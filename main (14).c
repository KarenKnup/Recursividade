#include <stdio.h>

//x elevado a n

int potencia (int x, int n){// 2^2=4
  if (n==0){
    return 1;
  } else{
    return x*potencia(x,n-1);
    //f(2)=2*f(1)=2*2=4
    //f(1)=2*f(0)=2
    //f(n)=f(0)=1
  }
}

int main(void) {
int x,n;

  printf("\nDigite X e N: ");
  scanf("%d %d",&x,&n);

  printf("\n\t%d elevado a %d = %d",x,n,potencia(x,n));
  
  
  return 0;
}