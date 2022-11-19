#include <stdio.h>

/*
  Pede-se a implementação de uma
função recursiva que exiba os n primeiros
termos de uma PG (Progressão Geométrica),
onde a1 é o seu primeiro termo e q a razão.

Observação: uma PG consiste em uma
sequência de valores, iniciadas pelo valor a1. Os
demais elementos são definidos como o
anterior multiplicado pela razão.
  */

void PG (int n, int a1, int q){
  if (n>0){//caso geral
    printf("%d ",a1);

    PG(n-1,a1*q,q);
  }//caso base - n<=0 - n=0
}
int main(void) {
  PG (4,2,3);

  
  return 0;
}