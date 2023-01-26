#include <stdio.h>

float media_Pares (int v[], int tam, int soma, int quant){
  if (tam==0){
    return soma/quant;
  } else {
    if (v[tam-1]%2==0){
      return media_Pares (v,tam-1,soma+v[tam-1], quant+=1);
    } else {
      return media_Pares (v,tam-1,soma, quant);
    }
  }
}

int main(void) {
  int v[6]={1,2,3,4,5,6};

  printf("\n\tMédia dos pares: %.1f ",media_Pares(v,6,0,0));
  
  return 0;
}
