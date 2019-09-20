#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define CANTIDAD 3


int main()
{
    ePersona listaPersonas[CANTIDAD];

    inicializarPersonas(listaPersonas,CANTIDAD);
    int i;
    int opcion;
    //int flagEncontro=0;

    opcion=mostrarMenu();


    while(opcion!=5)
    {
        int flagEncontro=0;

        switch(opcion)
        {
        case 1:
            for(i=0;i<CANTIDAD;i++)
            {
                if(listaPersonas[i].estaVacio==1)
                {
                    cargarPersona(listaPersonas,CANTIDAD, i);
                    flagEncontro=1;
                    break;
                }
            }

            if(flagEncontro==0)
                {
                    printf("\nNo hay mas lugar para cargar\n");
                }
            break;


        case 2:
            printf("nombre -- apellido --- dni \n");
            for(i=0;i<CANTIDAD;i++)
            {
            if(listaPersonas[i].estaVacio==0)
            {
                printf("\n%s -- %s -- %d \n",listaPersonas[i].nombre,listaPersonas[i].apellido, (int)listaPersonas[i].dni);
            }

            }

            break;
        case 3:
            ordenarPorDni(listaPersonas,CANTIDAD);
            break;
        case 4:
            ordenarPorApellido(listaPersonas,CANTIDAD);
            break;



        }
        opcion=mostrarMenu();

    }

    return 0;
}
