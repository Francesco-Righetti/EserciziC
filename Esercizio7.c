/*Dato un numero intero n, scrivere un algoritmo che scriva quali e quanti fattori primi ha.*/
#include <stdio.h>
int main()
{   
    int n, counter = 0;
    
    printf("Inserire il numero di cui si vogliono scoprire i fattori primi: ");
    scanf("%d", &n);

    for(int k = 2; k <= n;)
    {
        if(n%k == 0){
            n = n / k;
            counter += 1;
            printf("\n%d è un fattore primo del numero n.", k);
        } else {
            k += 1;
        }
    }

    printf("\nIl numero di fattori primi è: %d", counter);

    return 0;
}
