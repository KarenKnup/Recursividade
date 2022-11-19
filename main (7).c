#include <stdio.h>
#include <string.h>

//Desenvolver uma função recursiva que determine o número de caracteres comuns entre duas strings s1 e s2.

int caracteresComunsI (char s1[], char s2[])
{
	//declaração de variáveis
	int i, j, cont=0;
	
	//percorrendo a string 's1'
	for (i=0;s1[i];i++)
	{
		//percorrendo a string 's2'
		for (j=0;s2[j];j++)
		{
			//comparando cada caracter de 's2' com 's1[i]'
			if (s1[i] == s2[j])	
			{
				cont++;				
			}
		}
	}
	
	//retornando o resultado
	return cont;
}

int caracteresComunsRAux (char s1[], char s2[], int i, int j)
{
	//percorrendo a string 's1'
	if (s1[i])					//caso geral, pois há ainda caracteres em s1 a serem tratados
	{
		//percorrendo a string 's2'
		if (s2[j])
		{
			//comparando cada caracter de 's2' com 's1[i]'
			if (s1[i] == s2[j])	
			{
				return 1 + caracteresComunsRAux (s1, s2, i, j+1);
			}
			else
			{
				return caracteresComunsRAux (s1, s2, i, j+1);
			}
		}
		else
		{
			//s2 terminou
			return caracteresComunsRAux (s1, s2, i+1, 0);
		}
	}
	else
	{
		return 0;		//caso base, pois 's1' terminou.
	}
}

int caracteresComunsR (char s1[], char s2[])
{
	return caracteresComunsRAux (s1, s2, 0, 0);
}


int main(void) {
//declaração de variáveis
	int resp;
	
	//chamando a função recursiva
	resp = caracteresComunsR ("ABCDEF", "JUHWFSB");
	
	//exibindo o resultado
	printf ("\n\nResposta = %d", resp);
	
	//chamando a função recursiva
	resp = caracteresComunsR ("TESTE", "TESTE");
	
	//exibindo o resultado
	printf ("\n\nResposta = %d", resp);
  
  return 0;
}