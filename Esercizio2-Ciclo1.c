/*L’utente inserisce tre numeri interi. Il programma deve restituire la differenza tra il più grande e il più piccolo.*/
#include <stdio.h>
int main()

{
    int x = 0; int y = 0; int z = 0;
    int differenza = 0; int massimo = 0; int minimo = 0;
    
    printf("Input di x, y, z: ");
    scanf("%d %d %d", &x, &y, &z);
    
    massimo = x;
    if (massimo < y) {
        massimo = y;
    } else if (massimo < z) {
        massimo = z;
    }
    
    minimo = x;
        if (minimo > y) {
        minimo = y;
    } else if (minimo > z) {
        minimo = z;
    }
    
    printf("Il numero più grande è: %d \n", massimo);
    printf("Il numero più piccolo è: %d \n", minimo);
    
    differenza = massimo - minimo;
    printf("La differenza tra i due numeri è: %d", differenza);
    
    return 0;    
}
    
