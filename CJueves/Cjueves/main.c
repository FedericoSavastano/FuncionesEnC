#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANTIDAD 6




int main()
{
 /**
    int numero;
    int listadoDeEdades[10];
    int i;

    for(i=0;i<3;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&listadoDeEdades[i]);
    }


    for(i=0;i<3;i++)
    {
        printf("%d\n",listadoDeEdades[i]);
    }

    **/
    //int miArray[CANTIDAD];
   /**
    int i;

     for(i=0;i<3;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&miArray[i]);
    }
**/
    int miArray[CANTIDAD];

    InicializarArray(miArray,CANTIDAD);
    cargaSecuencialDeArray(miArray,CANTIDAD,"dame un numero : ");
    mostrarArray(miArray,CANTIDAD);
    printf("El maximo es: %d\n",dameElMaximo(miArray,CANTIDAD));
    printf("El minimo es: %d\n",dameElMinimo(miArray,CANTIDAD));
    printf("El promedio es : %.2f",dameElPromedio(miArray,CANTIDAD));
    printf("\nDe menor a mayor va: \n");
    ordenarArrayMenorAMAyor(miArray,CANTIDAD);
    mostrarArray(miArray,CANTIDAD);


    return 0;
}
