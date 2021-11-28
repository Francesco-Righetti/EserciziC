/*Ricevuti in input n numeri, dire se c'è almeno una coppia di numeri uguali e mostrarli.*/

#include <stdio.h>
#include <stdbool.h>

int main ()
{
    int n = 0, a;
    bool correct = true;
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);
    
    int lista[n];
    
    for(int i=0; i<n; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &lista[i]);
    }
    
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(lista[i] == lista[j]) {
                correct = false; 
            }
        }
    }

    if(correct == true) {
        printf("Non ci sono numeri uguali.");
    } else {
    printf("C'è una coppia di numeri uguali!");
    }
    return 0; 
    }
