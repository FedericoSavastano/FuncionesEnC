#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define CANTIDAD 3


void inicializarPersonas ( ePersona lista[], int cantidad )
{
    int i;
    int vacio=1;
    for (i=0;i<cantidad;i++)
    {
        lista[i].estaVacio=vacio;
    }
}

void cargarPersona (ePersona lista[], int cantidad, int indice)
{
    /**
    printf("Ingrese el dni : ");
    scanf("%f",&lista[indice].dni);
    **/

    float dniAux;
    printf("Ingrese el dni : ");
    scanf("%f",&dniAux);
    if(validarDNI(lista,dniAux,cantidad)==1)
    {
        printf("\nEse dni ya esta cargado, ingrese otro: ");
        scanf("%f",&dniAux);
    }


    lista[indice].dni=dniAux;


    printf("Ingrese el nombre : ");
    fflush(stdin);
    gets(lista[indice].nombre);


    printf("Ingrese el apellido : ");
    fflush(stdin);
    gets(lista[indice].apellido);


    lista[indice].estaVacio = 0;

}



int validarDNI(ePersona listaPersonas[], int dniAux, int cant)
{
    int i;
    int salida = 0;
    for(i=0;i<cant;i++)
    {
        if(listaPersonas[i].estaVacio==0 && listaPersonas[i].dni==dniAux)
        {
            salida=1;
        }
    }
    return salida;

}


int mostrarMenu()
{
    int opcion;
    printf("\nElija una opcion\n 1. Cargar persona \n 2. Mostrar personas \n 3. Organizar por dni \n 4. Organizar por Apellido y nombre \n 5. Salir \n");
    scanf("%d",&opcion);
    return opcion;
}


void ordenarPorDni(ePersona lista[], int cantidad)
{
    int i;
    int j;
    ePersona dniAux;

    for(i=0;i<cantidad-1;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if(lista[i].dni>lista[j].dni)
            {
                dniAux=lista[i];
                lista[i]=lista[j];
                lista[j]=dniAux;

            }
        }
    }
}


void ordenarPorApellido(ePersona lista[], int cantidad)
{
    int i;
    int j;
    ePersona dniAux;

    for(i=0;i<cantidad-1;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if( strcmp(lista[i].apellido,lista[j].apellido) > 0  )
            {
                dniAux=lista[i];
                lista[i]=lista[j];
                lista[j]=dniAux;

            }
        }
    }
}
