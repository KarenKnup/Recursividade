#include <stdio.h>
/*
  Desenvolver uma função recursiva que, dado um vetor V com quant números inteiros,	determine se seus elementos estão dispostos de maneira a representar uma	progressão aritmética.
  */

int verificaPA_Aux (int vetor[], int tamanho, int posicao, int razao)
{
	if (posicao < tamanho)
	{
		//verificando se a razão se mantém entre os elementos consecutivos
		if ((vetor[posicao] - vetor[posicao-1]) == razao)
		{
			return verificaPA_Aux (vetor, tamanho, posicao+1, razao);
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 1;
	}
}

int verificaPA (int vetor[], int tamanho)
{
	return verificaPA_Aux (vetor, tamanho, 2, vetor[1]-vetor[0]);
}

int main(void) {
//declaração de variáveis
	int vetor1[6] = {1,4,7,10,13,16};	//Este é uma PA
	int vetor2[6] = {1,4,7,11,14,17};	//Este não é uma PA
	
	//chamando a função para o primeiro vetor
	if (verificaPA (vetor1, 6) == 1)
	{
		printf ("\n\nO vetor 1 representa uma PA!");
	}
	else
	{
		printf ("\n\nO vetor 1 NAO representa uma PA!");
	}
	
	//chamando a função para o segundo vetor
	if (verificaPA (vetor2, 6) == 1)
	{
		printf ("\n\nO vetor 2 representa uma PA!");
	}
	else
	{
		printf ("\n\nO vetor 2 NAO representa uma PA!");
	}	
  
  return 0;
}