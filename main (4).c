#include <stdio.h>
#include <string.h>

//Dada uma string s, desenvolver uma função recursiva que determine se s é ou não um palíndromo. 


int palindromoRec (char s[], int inicio, int fim){
    if (inicio<fim){//caso geral
      if (s[inicio]!=s[fim]){
        return 0; //não é
      } else {
        return palindromoRec(s,inicio+1, fim-1);
      } 
    } else {
       return 1; //é
    }
   
  }

int palindromo (char s[]){
  return palindromoRec(s,0,strlen(s)-1);//tira o \0
}

int main(void) {
  int x,x2;
 char s[5]="arara";
  char s2[5]="rara";
  
  x=palindromo (s);
  x2=palindromo (s2);

  printf("\nResposta: %d - '%s' É PALÍNDROMO",x,s);
  printf("\nResposta: %d - '%s' NÃO É PALÍNDROMO",x2,s2);
  
  
  return 0;
}