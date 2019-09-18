#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"
#define CANTIDAD 2
void generarNumeroID ( int cantidad );

int main()
{
    //sPersonaje unPersonaje;
    sPersonaje todosPersonajes[CANTIDAD];

    //unPersonaje=ingresarPersonaje(unPersonaje);

    //hardcodeoPersonajes(todosPersonajes,CANTIDAD);
    //cargarPersonajes(todosPersonajes,CANTIDAD);
    //ordenarAlfabeticamenteNombres(todosPersonajes,CANTIDAD);
    //ordenarAlfabeticamenteClases(todosPersonajes,CANTIDAD);

    //mostrarListadoPersonajes(todosPersonajes,CANTIDAD);
    //generarNumeroID(CANTIDAD);


    cargarPersonajes(todosPersonajes,CANTIDAD);
    mostrarListadoPersonajes(todosPersonajes,CANTIDAD);



    //printf("Tu personaje es : %s", unPersonaje.nombre);
    return 0;
}
