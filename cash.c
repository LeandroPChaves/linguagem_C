//programa que primeiro pergunta ao usuário quanto dinheiro é devido e depois imprime o número mínimo de moedas com as quais essa mudança pode ser feita.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int qmoeda1 = 0;
    int qmoeda5 = 0;
    int qmoeda10 = 0;
    int qmoeda25 = 0;
    float vmoeda1 = 0;
    float vmoeda5 = 0;
    float vmoeda10 = 0;
    float vmoeda25 = 0;
    int quantmoedatroco = 0;
    float trocoreduzido;
    float valorpago;
    float valortroco;
    
   float valortotal = get_float("Digite o valor total: ");
   
   do{
    valorpago = get_float ("Digite valor pago: ");  
     }
   while (valorpago < 1);
   
   valortroco = valorpago - valortotal;
   
    for (vmoeda25 = valortroco; vmoeda25 >= 0.25; vmoeda25 = vmoeda25 - 0.25){
        qmoeda25++;
        }
        trocoreduzido = vmoeda25;
    
    for (vmoeda10 = trocoreduzido; vmoeda10 >= 0.10; vmoeda10 = vmoeda10 - 0.10){
        qmoeda10++;
    }
    trocoreduzido = vmoeda10;

    for (vmoeda5 = trocoreduzido; vmoeda5 >= 0.05; vmoeda5 = vmoeda5 - 0.05){
        qmoeda5++;
    }
    trocoreduzido = vmoeda5;

    for (vmoeda1 = trocoreduzido; vmoeda1 >= 0.01; vmoeda1 = vmoeda1 - 0.01){
        qmoeda1++;
    }
    trocoreduzido = vmoeda1;
    
    quantmoedatroco = qmoeda1 + qmoeda5 + qmoeda10 + qmoeda25;
    
    printf("%1.2f O valor total do troco \n", valortroco);
    printf("%i troco em moeda de 0,25 \n", qmoeda25);
    printf("%i troco em moeda de 0,10 \n", qmoeda10);
    printf("%i troco em moeda de 0,05 \n", qmoeda5);
    printf("%i troco em moeda de 0,01 \n", qmoeda1);
}

