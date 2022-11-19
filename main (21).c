#include <stdio.h>
#include <string.h>

/*
  Considere uma string s contendo apenas letras
e algarismos. Desenvolver uma função
recursiva que verifique se as letras de s estão
em seu início (e, consequentemente, os
algarismos ao seu final). Se estiverem, a função
retornará 1; caso contrário, 0.
  */


/*
int FuncIt (char s[]){
  int i, j, t=strlen(s); //t - tamanho da string

  for (i=0; i<(t/2); i++){ //letras   
    if (s[i]>='0' && s[i]<='9'){//não pode ser número
      return 0;//errado
    }
  }

  for (j=strlen(s); j<(t/2); j--){//números
      if ((s[j]>='a' && s[j]<='z') && (s[j]>='A' && s[j]<='Z')){//não podem ser letras
        return 0;//errado
      }
    }

  return 1; //se estiver td certo
} */

int FuncRecAu(int i, int j, char s[]){
  int t=(strlen(s))/2;
    
  
  if(i<t){
     if (s[i]>='0' && s[i]<='9'){//não pode ser número
      return 0;//errado
       } else{
       return FuncRecAu(i+1,j-1,s);
       }
  }

  if (j>t){
    if ((s[j]>='a' && s[j]<='z') && (s[j]>='A' && s[j]<='Z')){//não podem ser letras
        return 0;//errado
      } else{
       return FuncRecAu(i+1,j-1,s);
       }
  }
  
  return 1;
}

int FuncRec(char s[]){
  return FuncRecAu(0,strlen(s),s);
}

int main(void) {
 char s[20]="abcd123";//1 - certo
 char s2[20]="a2b1234"; //0 - errado

 // printf("\n\tResposta de string 1: %d",FuncIt(s)); //1
  //printf("\n\tResposta de string 2: %d",FuncIt(s2)); //0
  
   printf("\n\tResposta de string 1: %d",FuncRec(s)); //1
  printf("\n\tResposta de string 2: %d",FuncRec(s2)); //0
  
  return 0;
}