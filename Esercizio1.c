/*Scrivere un programma che calcoli e restituisca in output la somma dei primi n numeri naturali (con n inserito da tastiera).*/

#include<stdio.h>
int main ()
{
  int n = 0;
  int output = 0;

  printf ("Input di n: ");
  scanf ("%d", &n);

  for (int i = 0; i <= n; i++)
    {
      output = output + i;
    }

  printf ("La somma totale è: %d", output);
  return 0;
}
