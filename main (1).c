#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

char numeros[10]="0123456789";
char resposta[1000];
char S[1000];
printf("Digite a sequencia de letras e/ou numeros: \n");
scanf(" %s",S);


int j=0;
int i=0;

while(S[i]!='\0'){
    if(S[i]=='Z'){
       resposta [j]=S[i];
       j++;
       resposta [j]=S[i];
    }else if(strchr(numeros,S[i])!=NULL){
        resposta [j]='Z';
        j++;
        //com a tabela ASCII
        resposta[j]=S[i]+17;


    }else{
        resposta [j]=S[i];
    }

    j++;
    i++;
}

printf(" %s",resposta);
return 0;
}