#include <stdio.h>

/*
Busca linear - O (n) - elimina 1 posição por vez
Buaca binária- O (log 2 n) - começa da metade e elimina metade 

n         linear    binária
16       16          4
1024   1024     10
2048    2048     11
4090    4090      12
  */

//10 12 15 20 23 28 29 30 31 35
//0 1 2 3 4 5 6 7 8 9
//Meio = 4

int buscaBinaria (int v[], int tamanho, int x){
    int inicio=0, meio, fim=tamanho-1;
    /*tamanho(qtde de elementos do vetor)-1 = tamanho -0 (inicio) */
    while (inicio<=fim){
      meio=(inicio+fim)/2;
      if (v[meio]==x) {
        return meio;
     } else  {
      If (v[meio]>x) {
       return meio-1
     } else {
return meio+1
}
    }
  }
}
  return-1}

//10 12 15 20 23 28 29 30 31 35
//0 1 2 3 4 5 6 7 8 9
//Meio = 4

int buscaBinaria (int v[], int inicio, int fim, int x){
    int meio;
    
    If (inicio<=fim){
      meio=(inicio+fim)/2;
      if (v[meio]==x){
       return meio
       } else {
      If (v[meio]>x){
      return buscaBinaria(v,inicio,meio-1,x)
  } else {
    return buscaBinaria(v,meio+1,fim,x)
}
}


  }
else {
return -1
}
}

int main(void) {

  
  return 0;
}