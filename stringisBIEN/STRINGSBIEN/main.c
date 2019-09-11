#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


int main()
{
    char nombre[15];
    char apellido[15];
    char nombreapellido[42]; //CON 32 SALIA LA @, CON 42 NADA, PERO SEGUN QUE NUMERO LE PONGO ACA SALE ALGUNA COSA DENTRO DE ESTA VARIABLE, QUE ES LO PRIMERO QUE SALTA DESPUES.
    //funciona con 42 porque es la respuesta a todo.

    conseguirDato(nombre,"Introduzca su nombre : ");
    conseguirDato(apellido,"Introduzca su apellido : ");

    organizarDatos(nombreapellido,apellido,nombre);

    ponerMayusculas(nombreapellido);

    mostrarDatos(nombreapellido);






    return 0;
}
