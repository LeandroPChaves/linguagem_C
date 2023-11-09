//Vamos escrever um programa chamado readability que pega um texto e determina seu nível de leitura.

# include <stdio.h>
# include <cs50.h>
# include <ctype.h>
# include <string.h>

int main (void)
{
    string frase = get_string ("Digite uma frase ou texto: ");
    int quantletras = 0;
    int quantpalavras = 1; // COLOCO 1 por que pegando as palavras pela quantidade de espaço vai faltar uma palavra na quantidade.
    int quantfrases = 0;

    for (int i = 0; i < strlen(frase); i++){

        if (frase[i] >= 'A' && frase[i] <= 'z'){
            quantletras++;
        }

        if (frase[i] == ' '){
            quantpalavras++;
        }

        if (frase[i] == '!' || frase[i] == '?' || frase[i] == '.'){
            quantfrases++;
        }
    }

    

    float medialetras = (float) quantletras / (float) quantpalavras * 100.0;
    float mdfrases = (float) quantfrases / (float) quantpalavras * 100.0;

    float indice = 0.0588 * medialetras - 0.296 * mdfrases - 15.8;

    printf ("%0.1f de índice \n", indice);

    if (indice < 1)
    {
        printf ("Ensino Fundamental\n");
    }
    else if (indice > 16)
    {
        printf ("Ensino Superior\n");
    }
    else
    {
        printf ("Ensino Médio\n");
    }

    printf ("%i  Quantidade de letras, exceto com acentos. \n", quantletras);
    printf ("%i  Quantidade de palavras. \n", quantpalavras);
    printf ("%i  Quantidade de frases. \n", quantfrases);

}