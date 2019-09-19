#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define CANTIDAD 3


int main()
{
    //ePersona laPersona;
    ePersona listaPersonas[CANTIDAD];
    int opcion;
    int i;
    int vacio=1;
    int flagEncontro=0;


    inicializarPersonas(listaPersonas,CANTIDAD);

//mostrarPersona(listaPersonas[0]);


    opcion=mostrarMenu();
    while(opcion!=3)
    {
        switch(opcion)
        {
            case 1:
                for (i=0;i<CANTIDAD;i++)
                    {
                        if(listaPersonas[i].estaVacio==vacio)
                             {
                                listaPersonas[i]=ingresarPersona();
                                flagEncontro=1;
                                //mostrarListaDePersonas(listaPersonas,CANTIDAD);
                                break;

                             }
                    }
                    if(flagEncontro==0)
                    {
                        printf("no hay mas espacio");
                        break;
                    }

                break;

            case 2:
                for (i=0;i<CANTIDAD;i++)
                    {
                        if(listaPersonas[i].estaVacio==0)
                             {
                                mostrarPersona(listaPersonas[i]);
                                flagEncontro=1;
                                //break;
                             }
                    }
                    if(flagEncontro==0)
                    {
                        printf("no hay nada cargado");
                        break;
                    }


                break;
        }

        opcion=mostrarMenu();
    }




    return 0;
}


