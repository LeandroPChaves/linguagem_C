//Cifra de Cézar

# include <stdio.h>
# include <stdlib.h>
# include <cs50.h>
# include <ctype.h>
# include <string.h>

int main (void)
{
    string palavras = get_string("plaintext: ");
    int key = get_int("Número da chave: ");


    for (int i = 0; i < strlen(palavras); i++){
        
          if ((palavras[i] >= 65 && palavras[i] <= 90) || (palavras[i] >= 97 && palavras[i] <= 122) ){
              
              printf ("%c", palavras[i] + key);
              
          }
          
          else {
              
              printf ("%c", palavras[i]);
          }

   }

    printf (" - ciphertext: ");

}
 

