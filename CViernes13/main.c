#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
#define A 3
//como definir una estructura
/*
typedef struct
{

    //campos o atributos
    int legajo;
    char nombre[50];
    int nota;



}eAlumno; //se pone una E o una S de estructura delante del nombre
*/
//esto es el molde para crear una variable, es "la caja" donde guardar los datos de la variable que cree con el nombre
//de este tipo. en este caso crear una variable eAlumno en el main o donde sea.


//cuando paso por valor a una funcion, lo que le paso es una copia por valor . no afecta al original, en el lugar original.
//cuando paso por referencia paso un lugar de memoria, por lo que afecta ambos.

//void mostrarAlumno(eAlumno unAlumno);
//eAlumno pedirAlumno();
//TODO ESTO ME LO LLEVO AL ALUMNO.H
int main()
{
    eAlumno miAlumno;//={1000,"Pepe",7}; con esto hardcodeo datos

    eAlumno otroAlumno;


    //ahora si quiero pedirle los datos al usuario:
    //printf("Ingrese legajo: ");
    //scanf("%d", &miAlumno.legajo);
    //printf("Ingrese nombre: ");
    //fflush(stdin);
    //gets(miAlumno.nombre);
    //printf("Ingrese nota: ");
    //scanf("%d", &miAlumno.nota);
    //pero todo esto lo puedo hacer llamando una funcion que devuelva una estructura.

    //miAlumno= pedirAlumno(miAlumno);






   // para copiar una estructura en otra: con esto te ahorras el swap. pasas toda la estructura de una a otra.
   // otroAlumno=miAlumno;
    // despues probar si otroAlumno.algo=miAlumno.algo lo hace tambien ,pero solo con ese dato

  // esto como printf normal, ahora si quiero hacerlo funcion:
    //printf("%d -- %s -- %d\n", miAlumno.legajo, miAlumno.nombre, miAlumno.nota);


    //mostrarAlumno(miAlumno);





    //**lo que vamos a hacer ahora es crear un array de alumnos

    eAlumno listaAlumnos[A];

    //cargarAlumnos(listaAlumnos,A);

    hardcodearAlumnos(listaAlumnos,A);
   // ordenarAlumnosPorNombre(listaAlumnos,A);
    mostrarListadoDeAlumnos(listaAlumnos,A);

    /**
    EN LOS TP LO QUE ES * VA []
    TRABAJO PRACTICO 2 ENTREGA 4 DE OCTUBRE
    PARCIAL DE PROGRAMACION 4 OCTUBRE
    PARCIAL DE LABORATORIO 1RA PARTE 3 DE OCT /ALTAS, BAJAS Y MODIF
    2DA PARTE 10 DE OCT /CRITERIOS DE BUSQUEDA Y PROCESAMIENTO

    **/
    return 0;
}
/**
TODO ESTO ME LO LLEVE A ALUMNO.C
void mostrarAlumno(eAlumno miAlumno)
{
     printf("%d -- %s -- %d\n", miAlumno.legajo, miAlumno.nombre, miAlumno.nota);
}


eAlumno pedirAlumno()
{
    eAlumno miAlumno;

     printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);
    printf("Ingrese nota: ");
    scanf("%d", &miAlumno.nota);

    return miAlumno;
}
**/
