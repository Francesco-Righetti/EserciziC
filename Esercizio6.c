/*L'utente inserisce un numero naturale in input. Il programma deve stabilire se il numero è PRIMO.*/

#include <stdio.h>
int main ()
{
  int n = 0, i, c = 0;

  printf("Questo programma verifica se un numero è primo. Inserire il numero che si vuole verificare: ");
  scanf ("%d", &n);

  if (n >= 1 && n <= 3) {
    printf ("Il numero è primo.");
    return 0;
  } else { for (i = 1; i <= n; i++) {
	    if (n % i == 0) {
	        c++;
	    }
      }
  }
  
      if (c == 2)
        {
          printf ("n è un numero primo.");
        }
      else
        {
          printf ("\nn non è un numero primo.");
        }
}

