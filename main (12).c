#include <stdio.h>

int soma (int v[], int tam){
  if (tam==0){
    return 0;
  } else{
    return v[tam-1]+soma(v,tam-1);
  }
  //tam=3 -> v[2]+v[1]=3+3=6
  //tam=2 -> v[1]+v[0]=1+2=3
  //tam=1 -> v[0]+0=1
  //tam=0 ->0
}

int main(void) {
int v[3]={1,2,3};// 0 1 2

  printf("\n\t Soma= %d", soma(v,3));
  
  return 0;
}