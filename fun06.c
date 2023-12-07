#include <stdio.h>
#include <stdlib.h>

int resultado(int numero[])
{
    int i;
    int par = 0;
    for (i = 0; i < 6; i++)
    {
        if (numero[i] % 2 == 0)
        {
            par++;
        }
    }
    return par;
}
int resultado2(int numero[])
{
    int i;
    int impar = 0;
    for (i = 0; i < 6; i++)
    {
        if (numero[i] % 2 == 1)
        {
            impar++;
        }
    }
    return impar;
}

int main()
{

    int num[6], i;


    for (i = 0; i < 6; i++)
    {
        printf("Digite o numero:");
        scanf("%d", &num[i]);

        resultado(num);
        resultado2(num);
    }

    printf("esses numero sao pares:%d\n", resultado(num));
    printf("esses numero sao impares:%d\n", resultado2(num));

    return 0;
}