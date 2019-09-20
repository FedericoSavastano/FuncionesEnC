#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
#define A 3

int main()
{
    eAlumno miAlumno;//={1000,"Pepe",7}; con esto hardcodeo datos

    eAlumno otroAlumno;
     hardcodearAlumnos(listaAlumnos,A);
   // ordenarAlumnosPorNombre(listaAlumnos,A);
    mostrarListadoDeAlumnos(listaAlumnos,A);

    system("pause");
    system("cls");//lo de que limpia y aplica una tecla

    return 0;
}
