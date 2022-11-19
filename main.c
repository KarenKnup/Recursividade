#include <stdio.h>

//Recursão - a função chama ela própria - busca tornar um problema o mais simples possível
//A chamada para ao chegar no caso base
//Convenção - colocar caso base primeiro


int fatorialIterativo (int n){
  int i, fat=1;

  for (i=2; i<=n; i++){
    fat*=i;
  }

  return fat;  
}

int fatorialRecursivo (int n){
  /* n! - n*(n-1)  se n>0
        - 1        se n=0
*/
  if (n==0){
    return 1; //caso base
  } else{
    return n*fatorialRecursivo(n-1); //caso geral
  }
  /*
    3! = 3x2x1 = 6

    n=3-->3*f(2)=6 -- resultado
    n=2-->2*f(1)=2
    n=1-->1*f(0)=1
    n=0-->1
      De trás p/ frente: 1*1*2*3=6
    */
}

void funcao (int n){
  if (n>0){//caso geral
    printf("\n%d",n);
    funcao(n-1);
  }
  //caso base implícito (n<=0) = 1
}

void funcaoCrescente (int n){
  if (n>0){//caso geral
        funcaoCrescente(n-1); 
    printf("\n%d",n);
  }
  //caso base implícito (n<=0) = n
}

int fibonacci (int n){
  //1,1,2,3,5,8,13,21...
  if (n<=2){
    return 1;
  } else{
    return fibonacci(n-2)+fibonacci(n-1);
    /*
      n=1 e n=2 -> f(1)=f(2)=1
      n=3 -> f(3-2)+f(3-1)=f(1)+f(2)=1+1=2
      ...
      */
  }
}

int main(void) {
  int fat=fatorialIterativo(5), fatRec=fatorialRecursivo(3);
  
  printf("\n5!= %d\n", fat);
  printf("\n3!= %d\n", fatRec);

  funcao(10);
  printf("\n");
  funcaoCrescente(10);

  printf("\n\n\tFibonacci de n=8: %d",fibonacci(8));
  
  return 0;
}