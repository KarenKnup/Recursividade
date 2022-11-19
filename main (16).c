#include <stdio.h>

int maior (int v[], int tam, int indice){
  if (tam==0){
    return v[indice];
  } else{
    if (v[tam-1] > v[indice]){
      return maior(v, tam-1, tam-1);
    } else{
      return maior(v,tam-1,indice);
    }
  }
}

int main(void) {
  int v[5]={1,2,3,4,5};

  printf("\n\tMaior número do vetor = %d", maior(v,5,0));

  
  return 0;
}