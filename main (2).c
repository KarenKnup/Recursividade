#include <stdio.h>
// Fazer uma função recursiva que, dado um número inteiro N, exiba o mesmo na base 2 (binária).

void binario (int n){
  if (n != 0){//caso geral
    
    //Exibindo o resto
    printf("%d ",n%2);
    
    //chamando a função recursivamente
    binario(n/2);
  }
  //caso base - n==0 -> 1
}

int main(void) {
  binario(19);
  
    return 0;
}