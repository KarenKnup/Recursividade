#include <stdio.h>

int soma(int n){//n=3
  if (n==0){
    return 0;
  } else{
    return n+soma(n-1);
  }
  //f(3)=n+f(2)=3+3=6
  //f(2)=n+f(1)=2+1=3
  //f(1)=n(1)+f(0)=1
  //f(n)=f(0)=0
}

int main(void) {
  int n;

  printf("\nDigite n: ");
  scanf("%d",&n);

  printf("\n\tSomatório de 1 até %d = %d",n,soma(n));
  
  return 0;
}