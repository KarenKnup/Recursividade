#include <stdio.h>

//Desenvolver uma função recursiva que exiba todos os múltiplos do número N, inferiores ou iguais ao valor V.

void Mult (int n, int v){
  /*for (i=0;i<=v;i++){
if (i%n==0){
  printf("%d",i);
      }
    }
  }

*/
  if (v>=0){
    Mult(n,v-1); //CRESCENTE ~~ já começa da última posição=0
    if (v%n==0){
      printf("%d ",v);
    }
    //Mult(n,v-1); ~~ DECRESCENTE 
  }
}

int main(void) {
  printf("\n\n");
  Mult(3,20);//Múltiplos de 3 menores/iguais a 20
  
  return 0;
}