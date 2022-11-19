#include <stdio.h>
//Imprimir todos os elementos de n até 0

void imprimir (int n){
  if (n==0){
    printf("%d ",n);
  } else{
    imprimir(n-1); //crescente ~~ chama primeiro aí começa do fim
    printf("%d ",n);
    //imprimir(n-1); ~~ decrescente
  }
}

int main(void) {
int n;

  printf("\nDigite um valor: ");
  scanf("%d",&n);

  imprimir(n);
  
  return 0;
}