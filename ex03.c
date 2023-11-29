
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>

int main(){

    setlocale(LC_ALL,"portuguese");
int i=0,j, num[200], warzone;
char nome[200] [200];

printf("-----Digite os dados telefonicos-----\n");

do
{
    printf ("Digite o nome do seu contato:");
    gets (nome[i]);


    printf ("Digite o numero do seu contato ");
    scanf("%d", &num[i]);

    i++;

    printf ("DESEJA DIGITAR OUTRO NUMERO?\n1-sim\n2-não\n");
    scanf("%d",&warzone);
    
    while (warzone!=1&&warzone!=2)
    {
        printf ("\nNumero não identificado, digite novamente.\n");
        scanf("%d",&warzone);
    
    }
    
    fflush(stdin);
    

} while (warzone!=2);

printf("\nEXIBINDO CONTATOS...\n");

for ( j = 0; j < i; j++)
{
    printf ("Nome do seu contato:%s\n", nome[j]);
    printf ("Número do seu contato:%s\n", num[j]);
}

    return 0;
}