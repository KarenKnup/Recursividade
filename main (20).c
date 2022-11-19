#include <stdio.h>
#include <string.h>

void gera (char s[], int inicio, int fim, int tam){
  int i;

  if (fim<tam){
    for (i=inicio; i<=fim; i++){
      printf("%c",s[i]);
    }
    printf(", ");
    gera(s,inicio,fim+1,tam);
  } else if (inicio<fim){
    gera(s,inicio+1,inicio+1,tam);
  }
}

int main(void) {
  char s[]="Karen";
  int tam=strlen(s);

  gera(s,0,0,tam);
  printf("\n");
  
  return 0;
}