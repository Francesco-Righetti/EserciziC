/* Ricevuti in input 3 numeri, dire se c'C( almeno una coppia di numeri uguali e mostrarli. */

#include <stdio.h>
int
main ()
{
  int x = 0;
  int y = 0;
  int z = 0;

  printf ("Input di x, y, z: ");
  scanf ("%d %d %d", &x, &y, &z);

  if (x == y)
    {
      printf
	("Ho una sola coppia di numeri uguali. I due numeri uguali sono x e y, uguali a: %d \n", x);
    }

  else if (x == z)
    {
      printf
	("Ho una coppia di numeri uguali. I due numeri uguali sono x e z, uguali a: %d \n", x);
    }

  else if (y == z)
    {
      printf
	("Ho una coppia di numeri uguali. I due numeri uguali sono y e z, uguali a: %d \n", y);
    }

  else if (x == y && x == z && y == z)
    {
      printf ("Ho 3 coppie di numeri uguali. Tutti e 3 i numeri sono uguali");
    }

  else
    {
      printf ("Non ci sono numeri uguali.");
    }


}
