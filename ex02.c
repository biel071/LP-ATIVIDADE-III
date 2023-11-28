#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
int i, j; 
char nome [3] [200];
int idade [3];
float notas [3];
int somanotas=0;
float media [3];



for ( i = 0; i < 3; i++)
{
    printf("Digite seu nome:");
    gets (nome[i]);

    printf ("Digite sua idade:");
    scanf("%d",&idade[i]);
for ( j = 0; j < 3; j++)
{

    printf("Digite suas notas:");
    scanf("%.1f",&notas[j]);
     fflush (stdin);
}

   somanotas+= notas[j];
   media[j] = somanotas / 3;
}
for ( i = 0; i < 3; i++)
{
printf ("Seu nome:%s\n", nome[i]);
printf ("Sua idade:%d\n",idade[i]);
printf ("Sua media:%.1f\n", media[j]);
    
}









    return 0;
}