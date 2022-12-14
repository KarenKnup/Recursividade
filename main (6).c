#include <stdio.h>
#include <string.h>

//Desenvolver uma função recursiva que, dada uma string, exiba-a invertida.

void exibirInvertidaAux (char s[], int i)
{
	//caso geral
	if (i >= 0)
	{
		printf ("%c", s[i]);
		
		exibirInvertidaAux (s, i-1);
	}
	//caso base implícito: i < 0	
}

void exibirInvertida (char s[])
{
	exibirInvertidaAux (s, strlen(s)-1);
}

/* INVERTER UMA STRING RECURSIVAMENTE:

void inverteAu(char s[], int a, int b){
  char c;

  if(a<b){
    c = s[a];
    s[a] = s[b];
    s[b] = c;

    inverteAu(s,a+1,b-1);
  }
}

void inverteRec(char s[]){
  return inverteAu(s,0,strlen(s)-1);  
}

*/

int main(void) {
exibirInvertida ("ALGORITMOS");

/*
char  s[50]="Karen";
  
inverteRec (s);
  printf("\n\n%s",s);
*/
  
  return 0;
}
