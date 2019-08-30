#include <stdio.h>
#include <stdlib.h>
#include "Aritmeticas.h"

int pedirEntero(char msj[], int min, int max) // el [] es un vector, lo que hace es mandar una serie de char, o string
{
    /**
    int unNumero;
    printf("ingrese edad: ");
    scanf("%d", &unNumero);
    return unNumero;
    **/
    // le agregamos un minimo y maximo para validar y ver si lo que se envio es correcto
    int unNumero;
    printf("%s",msj); // la mascara S muestra el string
    scanf("%d", &unNumero);
    while(unNumero<min || unNumero>max)
    {
        printf("ERROR, \a %s", msj);
        scanf("%d",&unNumero);
    }
    return unNumero;
}





