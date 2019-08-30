#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
   /**
    int opcion;
    int numeroUno;
    int numeroDos;
    printf("Ingresame dos numeros: \n\n");

    numeroUno=obtenerNumeroEntero("Tu primer numero sera: ");
    numeroDos=obtenerNumeroEntero("Tu segundo numero sera: ");

    printf("tus numeros son %d y %d \n",numeroUno, numeroDos);

    printf("\n\nIngresa una opcion del 1 al 5\n");
    scanf("%d",&opcion);
    while(opcion>0 && opcion<6)
    {
        printf("Ok que hacemos con %d y %d \n\n", numeroUno, numeroDos);

        printf("si sumas tus numeros seria: %d\n", sumarNumeros(numeroUno,numeroDos));
        printf("si restas tus numeros seria: %d\n", restarNumeros(numeroUno,numeroDos));
        printf("si multiplicas tus numeros seria: %d\n", multiplicarNumeros(numeroUno,numeroDos));
        printf("si dividis tus numeros seria: %d\n", dividirNumeros(numeroUno,numeroDos));

        printf("Ingresa una opcion del 1 al 5\n");
        scanf("%d",&opcion);
    }
    printf("AH BUENO SOS UN BOLUDO");
**/

    int opcion;
    int numeroUno=NULL;
    int numeroDos=NULL;

    printf(" 1. Ingrese 1er operando ( A )  \n 2. Ingrese 2do operando ( B ) \n 3. Calcular todas las operaciones \n 4. Informar resultados \n\n");
    printf("Ingrese su eleccion: ");
    scanf("%d",&opcion);
    while(opcion>0 && opcion<6)
    {
        printf("\nEntraste joya\n");
        switch(opcion)
        {
        case 1:
            numeroUno=obtenerNumeroEntero("Tu primer numero sera: ");
            break;
        case 2:
            numeroDos=obtenerNumeroEntero("Tu segundo numero sera: ");
            break;
        case 3:
            if(numeroUno==NULL || numeroDos==NULL)
            {
                printf("Primero ingresa los numeros chabon!\n");
                break;
            }
            else
            {
                printf("Se hicieron todos los calculos");
                break;
            }
            break;
        case 4:
            if(numeroUno==NULL || numeroDos==NULL)
            {
                printf("Primero ingresa los numeros chabon!\n");
                break;
            }
            else
            {
                printf("\n\n\n");
                printf("si sumas tus numeros seria: %d\n", sumarNumeros(numeroUno,numeroDos));
                printf("si restas tus numeros seria: %d\n", restarNumeros(numeroUno,numeroDos));
                printf("si multiplicas tus numeros seria: %d\n", multiplicarNumeros(numeroUno,numeroDos));
                printf("si dividis tus numeros seria: %d\n", dividirNumeros(numeroUno,numeroDos));
                printf("\n\n\n");
                break;
            }
            break;

        }

        printf("\n\n\n");
        printf(" 1. Ingrese 1er operando ( %d )  \n 2. Ingrese 2do operando ( %d ) \n 3. Calcular todas las operaciones \n 4. Informar resultados \n\n",numeroUno,numeroDos);
        printf("\n\n\n");
        printf("Ingrese su eleccion: ");
        printf("\n\n\n");
        scanf("%d",&opcion);

    }

    if(!(opcion>0 && opcion<6))
       {
           printf("Opcion no valida!");
       }

    return 0;
}
