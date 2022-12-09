/*
Fazer uma função recursiva que, dado um número inteiro e positivo N, calcule a soma de seus algarismos.
*/

#include <stdio.h>
#include <stdlib.h>

int somaIterativa (int n){
  int total=0;

  while(n>0){
    total+=n%10;
    n=n/10;
  }
  
  return total;
}

int somaRec (int n){
  int total;
  
  if(n != 0){
    total = n % 10;
    n=n/10;
    return total + somaRec(n);
  }
  else{
    return 0;
  }
}

int main(void) {
  int n=541; //10
  int soma;
  
  soma=somaRec(n);
  printf("%d", soma);
  
  return 0;
  }
