#include <stdio.h>
#include <stdlib.h>

float preco (float numero){

float preco=0;
float inflacao=0;
if (preco < 100)
{
    preco= numero * 0.1;
    inflacao = preco + numero;
} else {
    preco= numero * 0.2;
    preco = inflacao + numero;
}
return preco;

}
int main (){

float num;

printf ("Digite o preco do produto:");
scanf ("%f",&num);

printf ("O valor com o acrescimo de R$%.2f", preco(num));
    return 0;
}