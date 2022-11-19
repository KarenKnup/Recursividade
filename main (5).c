#include <stdio.h>

void Hanoi (int n, char O, char D, char aux)
{
	if (n > 0)
	{
		Hanoi (n-1, O, aux, D);
		
		printf  ("%c  ->  %c\n", O, D);
		
		Hanoi (n-1, aux, D, O);
	}
}

int main(void) {
Hanoi (10, 'A', 'C', 'B');
  
  return 0;
}