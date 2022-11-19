#include <stdio.h>

/*
A recursive function is one that calls itself and includes a base case, or exit condition, for ending the recursive calls. In the case of computing a factorial, the base case is num equal to 1. 

A recursive solution requires a base case to prevent an infinite loop.
  */

int fatorial (int n){
  if (n==1){ //caso base
    return 1;
  } else { //caso geral
    return n*fatorial(n-1);
    //5*f(4)=5*4=20
    //20*f(3)=60
    //60*f(2)=120
    //120*f(1)=120
  }
}

int main(void) {
  int x=5;

  printf("\n\t%d! = %d",x,fatorial(x));
  
  return 0;
}