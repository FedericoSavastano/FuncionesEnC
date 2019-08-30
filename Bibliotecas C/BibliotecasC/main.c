#include <stdio.h>
#include <stdlib.h>
#include "Aritmeticas.h"

int main()
{
    int numero1= pedirEntero("ingrese edad :"); //esto es lo mismo que un prompt en javascript
    int numero2= pedirEntero("ingrese legajo :");

    printf("%d\n\n", numero1);
    printf("%d\n\n", numero2);


    int edad= pedirEntero("ingrese edad :");
    int legajo;
    int nota;
    int documento;

    printf("La edad es %d\n\n", edad);

    return 0;
}
