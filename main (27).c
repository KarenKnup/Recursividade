
/*
Desenvolver uma função recursiva que, dada uma string s, determine se esta representa um número válido.

Para representar um valor numérico, s deve atender às seguintes regras:
I - Todos os caracteres são algarismos ou o símbolo ponto (.)
II - No máximo UM ponto pode aparecer na string
III - Caso o ponto exista, não pode ser o primeiro nem o último caracter

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 0
#define FALSE 1

int ContaPonto (char s[]){
  int qtde=0, tam=strlen(s)-1;

  for(int i=1; i<tam-1; i++){
    if(s[i]=='.'){
      qtde++;
    }
  }
  return qtde;
}

/*int Verifica (char s[]){
  int tam=strlen(s)-1;//contagem=4, mas o PC lê: 0 1 2 3

  if(s[0]=='.' || s[tam]=='.'){
    return FALSE;
  }
  
  for(int i=1; i<tam-1; i++){  
    if(!(((s[i]>='0' && s[i]<='9') || s[i]=='.') && (ContaPonto(s)<2))){
      return FALSE;
      break;
    }
  }
  return TRUE;
} */

int VerificaRec (char s[], int i, int tam){  
   if(s[0]=='.' || s[tam]=='.'){
    return FALSE;
      }
    
  if(i<tam-1){  
    if(!(((s[i]>='0' && s[i]<='9') || s[i]=='.') && (ContaPonto(s)<2))){
      return FALSE;
    } else {
      return VerificaRec(s,i+1,tam);
    }
  }
  return TRUE;
}

int Verifica (char s[]){
  return VerificaRec(s,1,strlen(s)-1);
}

int main(void) {
  char s[20]="1.010";

  printf("\n%d",Verifica(s));//0
  
  return 0;
}