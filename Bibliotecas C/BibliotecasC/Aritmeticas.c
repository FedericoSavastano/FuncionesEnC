#include <stdio.h>
#include <stdlib.h>
#include "Aritmeticas.h"

int pedirEntero(char msj[]) // el [] es un vector, lo que hace es mandar una serie de char, o string
{
    /**
    int unNumero;
    printf("ingrese edad: ");
    scanf("%d", &unNumero);
    return unNumero;
    **/

    int unNumero;
    printf("%s",msj); // la mascara S muestra el string
    scanf("%d", &unNumero);
    return unNumero;
}
