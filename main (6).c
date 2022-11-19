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

int main(void) {
exibirInvertida ("ALGORITMOS");
  
  return 0;
}