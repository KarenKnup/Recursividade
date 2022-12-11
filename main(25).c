#include <stdio.h>
#include <stdlib.h>

/*
  Desenvolver uma função recursiva que, dado um vetor 
de inteiros de tamanho TAM, preencha as suas 
posições com os valores de TAM (na posição 0) a 1
(posição TAM-1).

Exemplo: TAM = 10

vetor-> 10 9 8 7 6 5 4 3 2 1
i->      0 1 2 3 4 5 6 7 8 9
*/

#define TAM 10

void zera (int v[]){
  for(int i=0; i<TAM; i++){
    v[i]=0;
  }
}

void exibe (int v[]){
  printf("\n\tVETOR = ");
  for(int i=0; i<TAM; i++){
    printf("%d ",v[i]);
  }
}

/* void vetor(int v[]){
  int n=TAM;

  for(int i=0; i<TAM; i++){
    v[i]=n;
    n--;
  }
} */

void vetorRec(int v[], int i, int n){
  if(i<TAM-1){
    v[i]=n;
    return vetorRec(v,i+1,n-1);
  } else{
    return v[i]=1;
  }
}

int main(void) {
 int v[TAM];

  zera(v);
  vetorRec(v,0,TAM);
  exibe(v);

  
  return 0;
}