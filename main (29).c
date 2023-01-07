/*
Desenvolver uma função RECURSIVA que determine se os 
elementos de uma lista encadeada, do tipo TLista, 
estão ou não ordenados de forma crescente.
*/

#include <stdio.h>
#include <stdlib.h>

//definição de constantes
#define TRUE 1
#define FALSE 0
  
typedef struct No {
	int valor;
  int pos;
	struct No* prox; 
} TNo;

typedef TNo* TLista; 

int inserir (TLista *L, int numero){
	TLista aux; 
  
	aux = (TLista) malloc (sizeof(TNo));

  TLista aux2=aux->prox;
  
	if (aux == NULL){ 
		return FALSE;
	}	else{
		aux->valor = numero; //aux->valor = *aux.valor
    
		aux->prox = *L;
		
		*L = aux;
		
		return TRUE;
	}
}

void exibir (TLista L){
	//declaração de variáveis
	TLista aux = L;
	
	//testando se a lista está vazia
	if (!L){ //L==NULL 
		printf ("\nLista vazia!");
	}	else	{
		printf ("\nElementos da lista: ");
		
		//percorrendo a lista até o seu final
		while (aux != NULL)	{
			//exibindo o valor apontado pelo 'aux'
			printf ("%d ", aux->valor);
			
			//atualizando o 'aux' para apontar para o próximo nó
			aux = aux->prox;
		}
	}
}

/* int Verifica (TLista L){
  TLista aux=L->prox, aux2=L;
  
  while(aux){//1 2 3 - crescente 
    if(aux2->valor > aux->valor){
      return FALSE;
    }

    aux2=aux2->prox;
    aux=aux->prox;
  }

  return TRUE;
} */

int Verifica(TLista L, TLista aux, TLista aux2){
  while(aux){
    if(aux2->valor > aux->valor){
      return FALSE;
    } else {
      return Verifica (L,aux->prox,aux2->prox);
    }
  }
  return TRUE;
}

int VerificaRec(TLista L){
  return Verifica (L,L->prox,L);  
}

int main(void){
  TLista L1=NULL, L2=NULL;

  printf("\n-------- LISTA 1 ---------\n");
  inserir(&L1,1);
  inserir(&L1,2);
  inserir(&L1,3);
  exibir(L1);

  if(VerificaRec(L1)==TRUE){
    printf("\n\n\tA lista está em ordem crescente!");
  } else {
    printf("\n\n\tA lista NÃO está em ordem crescente!");    
  }

  printf("\n\n-------- LISTA 2 ---------\n");
  inserir(&L2,3);
  inserir(&L2,2);
  inserir(&L2,1);
  exibir(L2);

  if(VerificaRec(L2)==TRUE){
    printf("\n\n\tA lista está em ordem crescente!");
  } else {
    printf("\n\n\tA lista NÃO está em ordem crescente!");    
  }


  return 0;
}
