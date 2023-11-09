# include <stdio.h>
# include <cs50.h>
# include <ctype.h>
# include <string.h>

int main (void)
{
    char letra = get_char("Digite uma letra: ");
    int pulo = get_int("Quantidade de caracteres que eu quero pular: ");
    letra = letra + pulo;

    while (letra < 65 || letra > 122){

         printf ("Não há caracter para esse pulo: Faça o caminho novamente.");
         letra = get_char("\nDigite uma letra: ");
         pulo = get_int("Quantidade de caracteres que eu quero pular: ");
         letra = letra + pulo;

     }


    printf ("%c\n", letra);
}


