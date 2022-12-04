/*
Pede-se o desenvolvimento de uma função recursiva que, dada uma matriz M de L linhas e C colunas, onde L e C são
constantes, e três linhas L1, L2 e L3, altere os elementos de L3, de forma que cada um consista na soma dos elementos
de L1 e L2.
*/

#include <stdio.h>
#include <stdlib.h>

#define L 8
#define C 4

void Exibe (int m[L][C]){
  int i,j;

  printf("\n");
  for (i=0; i<L; i++){//linhas
    for (j=0; j<C; j++){//colunas
      printf("%d\t",m[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}
/*
void Matriz(int L3, int m[L][C]){
  int L1=L3-3, L2=L3-5, i, j;

  L3--; //adequando L3 p/ língua do PC

  for (i=0; i<L; i++){
    for (j=0; j<C; j++){
      if (i==L3){
        //m[i][j]=m[i-3][j]+m[i-5][j];
	m[L3][j]=m[L1][j]+m[L2][j];
      }
    }
  }
} */


void MatrizRec(int L3, int m[][C], int j){
  int L1=L3-3, L2=L3-5;

  if(j<C){
        m[L3-1][j]=m[L1-1][j]+m[L2-1][j];//convertendo p língua PC
          return MatrizRec(L3,m,j+1);
    }
}

int main (void){
  int L3, m[L][C]={1,5,9,2,0,3,4,8,1,1,3,7,7,9,6,5,1,3,2,4,8,6,8,7,9,7,2,1,4,6,7,8};

  printf("\n-------- ANTES -----------\n");
  Exibe(m);
  
  printf("\n-------- DEPOIS -----------\n");
  printf("Digite L3: ");
  scanf("%d",&L3);
  MatrizRec(L3,m,0);
  Exibe(m);
  
	return 0;
}
  
