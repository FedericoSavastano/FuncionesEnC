
#include <stdio.h>
#include <stdlib.h>
#include "alumno.h" //IMPORTANTE INCLUIR ESTO

#include <string.h>
#define A 5

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



int compararAlumnoPorLegajo(eAlumno unAlumno,eAlumno OtroAlumno)
{
    int comp =0;
    if(unAlumno.legajo==OtroAlumno.legajo)
    {
        comp = 1;
    }
    return comp;
}




void cargarAlumnos (eAlumno lista[], int cantidad)
{
    int i;
    for(i=0; i< cantidad ; i++)
    {
        /**
        printf("ingrese legajo: ");
        scanf("%d",&listaAlumnos[i].legajo); //esto busca y pone en la posicion i en cada caso
        **/
        //dentro de una funcion
        lista[i] = pedirAlumno();
    }
}



void mostrarListadoDeAlumnos (eAlumno lista[], int cantidad)
{

    int i;
      for(i=0; i< cantidad ; i++)
    {
        mostrarAlumno(lista[i]);
    }
}


void ordenarAlumnosPorNombre(eAlumno lista [],int cantidad)
{
    int i;
    int j;
    eAlumno auxAlumno;

     for(i=0; i< cantidad-1 ; i++)
     {
         for(j=i+1; j< cantidad ; i++)
         {
             if(strcmp(lista[i].nombre,lista[j].nombre)<0)
             {
                    auxAlumno = lista[i];
                    lista[i]= lista[j];
                    lista[j]=auxAlumno;
             }
         }
     }


}


void hardcodearAlumnos(eAlumno lista[], int cantidad)
{
    int legajo[3]={101,102,105};
    int nota[3]={10,5,9};
    char nombre[3][50]={"Juan","Maria","Jose"};
    int i;
    for(i=0; i<cantidad;i++)
    {
        lista[i].legajo=legajo[i];
        lista[i].nota=nota[i];
        strcpy(lista[i].nombre,nombre[i]);

    }
}



int buscarAlumnoLibre(eAlumno lista[],int cant)
{
    int i;
    int index = -1;
    for(i=0;i<cant;i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index=i;
            break;
        }
    }
    return index;
}



inicializarAlumnos
int i;
int retorno=-1;
if(listaDeAlumnos!=NULL && cant>0)











