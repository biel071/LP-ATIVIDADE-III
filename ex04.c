
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    system("cls||clear");
    int i, num[5], quantiaimpar=0, somapar=0, par=0;
    int maior, menor, negativo=0;
    float mediapar=0, medianum=0;

    printf("----Digite 5 numeros inteiros.----\n");
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº numero:", i + 1);
        scanf("%d", &num[i]);

        medianum +=num[i] /5;
        negativo +=num[i]<0?1:0;

        if (num[i] % 2 == 0)
        {
            par++;
            somapar += num[i];
        }
        else
        {
            quantiaimpar++;
        }

        if (i==0)
        {
        maior = menor = num[i];
        } else
        {
            maior= maior>maior?num[i]:maior;
            menor= menor<menor?num[i]:menor;
        }
        
        }
        mediapar= somapar / 5;
       

    printf("Quantidade de numero impares:%d\n", quantiaimpar);
    printf("A media dos numeros pares:%.1f\n", mediapar);
    printf("A media de todos os numeros:%.1f\n", medianum);
    printf("QUANTIDADE DE NÚMEROS NEGATIVOS: %d\n",negativo);
    printf("Maior: %d // Menor%d\n",maior,menor);

    return 0;
}
