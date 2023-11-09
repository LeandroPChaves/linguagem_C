#include <stdio.h>
#include <cs50.h>

int main (void)
{
int popInicio;

    do{
        popInicio = get_int("Digite a população atual: ");
    }
    while (popInicio <= 9);


int popFinal;

    do{
        popFinal= get_int("Digite a população Final: ");
    }
    while (popFinal < popInicio);
    
int ano = 0;
int popGanho;
int popPerda;
int popAtual;

while (popInicio < popFinal){

    popGanho = popInicio / 3;
    popPerda = popInicio / 4;
    popAtual = popInicio + (popGanho - popPerda);
    popInicio = popAtual;
    ano++;
}

printf ("%i ano(s) para chegar na população final \n", ano);
}