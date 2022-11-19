#include <stdio.h>

int menor (int v[], int tam, int indice){
  if (tam==0){
    return v[indice];
  } else {
    if (v[tam]<v[indice]){
      return menor (v,tam,tam-1);
    } else {
      return menor (v,tam-1,indice);
    }
  }
}

int main(void) {
  int v[5]={1,2,3,4,5};

  printf("\n\tMenor valor do vetor: %d",menor(v,5,0));
  
  return 0;
}