/*
Desenvolver uma função recursiva que, dada uma 
string S1, crie uma nova string S2 consistindo na 
inversão de S1.
*/

#include <stdio.h>
#include <string.h>

/* void Inverte (char s[], char s2[]){
  int tam=strlen(s)-1;//adaptando p linguagem de PC
  char c;

  for(int i=0, j=tam; s[i]; j--, i++){
    s2[i]=s[j];
  }

} */

void Inverte (char s[], char s2[], int i, int j){
  char c;

  if(s[i]!='\0'){
    s2[i]=s[j];
    return Inverte (s,s2,i+1,j-1);
  } 
}

void InverteRec (char s[], char s2[]){
  return Inverte(s,s2,0,strlen(s)-1);
}
  
int main(void){
  char s[20]="Lacie", s2[20];

  printf("\nAntes:\t %s",s);
  InverteRec(s,s2);
  printf("\n\nDepois:\t %s",s2);


return 0;
  }