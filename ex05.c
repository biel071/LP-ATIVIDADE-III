


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    system("cls||clear");

int i;
char nome[200];
float preco;
int Quantidade;
int escolha;

printf("----Central de vendas----");

do
{
    printf ("Digite o nome do produto:\n");
    gets(nome);

    printf ("Digite o preco do produto:\n");
    scanf ("%.1f",&preco);

    printf ("Digite a quantidade de vendas:");
    scanf ("%d", &Quantidade);


while (escolha !=1 && escolha !=2);
{
    printf("\nOpção invalida, Digite 1 ou 2.\n");
    scanf ("%d",&escolha);
}
    printf ("Deseja digitar mais alguma coisa?\n 1-sim\n2-não\n");
    scanf("%d",&escolha);
    
    fflush(stdin);

} while (escolha==2);





    return 0;
}