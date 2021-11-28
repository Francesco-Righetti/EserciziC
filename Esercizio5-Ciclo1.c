/* Scrivere una funzione che stampi la serie di Fibonacci per i primi n numeri interi (n inserito dall'utente).*/

#include <stdio.h>

int main ()

{
  int i, n, x, y, z, zero;

  printf("Quanti numeri della successione si vogliono visualizzare? ");
  scanf("%d", &n);

  zero = 0;
  x = 1;
  y = 1;

  printf("%d\n", zero);
  printf("%d\n", x);
  printf("%d\n", y);

  for(i = 2; i < n; i++)
    {
      z = x + y;
      x = y;
      y = z;

      printf("%d\n", z);
    }
}
