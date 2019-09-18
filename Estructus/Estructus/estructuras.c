#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
#define CANTIDAD 2


sPersonaje ingresarPersonaje()
{
    sPersonaje miPersonaje;



    printf("Ingrese el nombre de su personaje : ");
    fflush(stdin);
    gets(miPersonaje.nombre);

    printf("Ingrese la clase de su personaje : ");
    fflush(stdin);
    gets(miPersonaje.clase);

    printf("Ingrese el nivel de su personaje : ");
    scanf("%d",&miPersonaje.nivel);

    return miPersonaje;
}

void cargarPersonajes(sPersonaje lista[], int cantidad )
{
    int i;
    int id[cantidad];
    for (i=0;i<cantidad;i++)
    {
        //id[i].numero=id[i].numero+1;
        lista[i].numero=id[i]+1;
        lista[i]=ingresarPersonaje();
    }
}

void mostrarPersonaje(sPersonaje elPersonaje)
{
    printf(" %d --- %s --- %s --- %d  \n",elPersonaje.numero,elPersonaje.nombre, elPersonaje.clase, elPersonaje.nivel);
}


void mostrarListadoPersonajes (sPersonaje lista[], int cantidad )
{
    int i;
    printf("Numero --- Nombre --- Clase --- Nivel \n\n");
    for (i=0;i<cantidad;i++)
    {
        mostrarPersonaje(lista[i]);
    }
}


void hardcodeoPersonajes (sPersonaje lista[], int cantidad)
{
    char nombre[4][50]={"Gandalf", "Frodo", "Gimli", "Legolas" };
    char clase[4][50]={"Mago", "Hobbit", "Enano", "Elfo"};
    int nivel[4]={80,30,60,70};
    //int id[4]={1,2,3,4};

    int i;
    for (i=0;i<cantidad;i++)
    {

        strcpy(lista[i].nombre,nombre[i]);
        strcpy(lista[i].clase,clase[i]);
        lista[i].nivel=nivel[i];
        //lista[i].numero=id[i];

    }
}


void ordenarAlfabeticamenteNombres (sPersonaje lista[], int cantidad)
{
    int i;
    int j;
    sPersonaje auxPersonaje;

    for (i=0;i<cantidad-1;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if(strcmp(lista[i].nombre,lista[j].nombre)>0)
            {
                auxPersonaje=lista[i];
                lista[i]=lista[j];
                lista[j]=auxPersonaje;

            }
        }

    }
}



void ordenarAlfabeticamenteClases (sPersonaje lista[], int cantidad)
{
    int i;
    int j;
    sPersonaje auxPersonaje;

    for (i=0;i<cantidad-1;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if(strcmp(lista[i].clase,lista[j].clase)>0)
            {
                auxPersonaje=lista[i];
                lista[i]=lista[j];
                lista[j]=auxPersonaje;

            }
        }

    }
}



