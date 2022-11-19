#include <stdio.h>

void inverte (int v[], int inicio, int fim){
  int aux;
  
  if(inicio<fim){
    aux=v[inicio];
    v[inicio]=v[fim];
    v[fim]=aux;

    inverte(v,inicio+1,fim-1);
  }
}

void imprime (int v[], int tam){
  if(tam==1){
    printf("%d ",v[tam-1]);
  } else {
     imprime(v,tam-1);
    printf("%d ",v[tam-1]);
    //imprime(v,tam-1);
  }
}

int main(void) {
  int v[5]={1,2,3,4,5};

  printf("\n------- Antes: ----------\n");
  imprime(v,5);
  inverte(v,0,4);
  printf("\n------- Depois: ----------\n");
  imprime(v,5);
  
    return 0;
}