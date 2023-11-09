#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i, j, n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1 || n > 8);

    for(i = 1; i <= n; i++) {

        for (j = n - i; j >= 1; j--){
            printf(" ");
        }

        for(j = 1;j <= i; j++){
          printf ("#");

        }
          printf ("  ");

         for(j = 1;j <= i; j++){
          printf ("#");

        }
          printf("\n");

     }

  }
