#include <stdio.h>
#include <stdlib.h>
#include "Aritmeticas.h"


int factorial(int);

int main()
{
    /**int numero1= pedirEntero("ingrese edad :"); //esto es lo mismo que un prompt en javascript
    int numero2= pedirEntero("ingrese legajo :");

    printf("%d\n\n", numero1);
    printf("%d\n\n", numero2);


    int edad= pedirEntero("ingrese edad :",1,100);
    int legajo= pedirEntero("Ingrese legajo: ",0,2000);
    int nota=pedirEntero("Ingrese nota: ",0,10);
    int documento=pedirEntero("Ingrese docuumento: ",0,1000);

    printf("La edad es %d\n\n", edad);
    printf("El legajo es %d\n\n", legajo);
    printf("La nota es %d\n\n", nota);
    printf("El documento es %d\n\n", documento);

     **/


    int resultado;

    resultado= factorial(10);

    printf("El factorial es : %d", resultado);

    return 0;
}


 int factorial(int numero)
 {
    int resultado;

    if(numero==0)
    {
        resultado=1;
    }
    else
    {
        resultado= numero * factorial( numero - 1);
    }

    return resultado;
 }
