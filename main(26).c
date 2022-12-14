#include <stdio.h>
#include <string.h>

//Desenvolver uma função recursiva que, dada um vetor, exiba-o invertido.

void inverteAu(int s[], int a, int b){
  int c;

  if(a<b){
    c = s[a];
    s[a] = s[b];
    s[b] = c;

    inverteAu(s,a+1,b-1);
  }
}

void inverteRec(int s[]){
  return inverteAu(s,0,2);  
}

int main(void) {
 int  s[3]={1,2,3};
  
inverteRec (s);
  printf("\n\n%d %d %d",s[0],s[1],s[2]);
  
  
  return 0;
}