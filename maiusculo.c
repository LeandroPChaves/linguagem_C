# include <stdio.h>
# include <cs50.h>
# include <ctype.h>
# include <string.h>

int main (void)
{
    string s = get_string("Antes: ");
    printf ("Depois: ");
    
    for (int i = 0; i < strlen(s); i++)
    {
        // if (s[i] >= 'a' && s[i] <= 'z')
        // {
        //     printf ("%c", s[i] - 32);   //tabela ascII
        // }
        // else
        // {
        //     printf ("%c", s[i]) ; 
        // }
        
        if (islower(s[i]))
        {
            printf ("%c", toupper(s[i]));
        }
        else
         {
             printf ("%c", s[i]) ; 
         }
    }
    printf ("\n");
}


