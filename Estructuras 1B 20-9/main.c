#include <stdio.h>
#include <stdlib.h>
#include "Alumno.h"
#define A 5

int main()
{
    eAlumno listaAlumnos[A];
    //int i;
    int opcion;
    int index;
    int legajoParaBuscar;

    if(inicializarAlumnos(listaAlumnos,A)==0)
    {
        do
        {
            printf("1.Cargar alumnos\n");
            printf("2.Mostrar alumnos\n");
            printf("3.Ordenar alumnos por nombre\n");
            printf("4.Buscar Alumno por legajo\n");
            //printf("5. Buscar alumno por legajo\n")
            printf("Elija una opcion: ");
            scanf("%d", &opcion);
            switch(opcion)
            {
            case 1:

                /*if(cargarAlumnos(listaAlumnos,A)==1)
                {
                    printf("Alumno ingresado");
                }
                else
                {
                    printf("No hay espacio");
                }*/
                hardcoderAlumnos(listaAlumnos,A);

                break;
            case 2:
                mostrarListadoDeAlumnos(listaAlumnos,A);
                break;
            case 3:
                ordenarAlumnosPorNombre(listaAlumnos,A);
                break;
            case 4:
                printf("Ingrese el legajo: "); //ESTO TIENE QUE IR CON UNA FUNCION DE PEDIR UN INT
                scanf("%d",&legajoParaBuscar);
                index=buscarAlumnoPorLegajo(listaAlumnos,A,legajoParaBuscar);
                if(index>0)
                {
                    printf("\nse dará de baja al siguiente alumno: %s\n", listaAlumnos[index].nombre);
                    listaAlumnos[index].estado=LIBRE;
                }else{
                    printf("\nNo se encontró al alumno\n");
                }
                /** ESTO LO HIZO CON UNA FUNCION DE ELIMINAR ALUMNO, USAR LOS DE GETSTRING, CHAR ETC
                PARA MODIFICACIONES ES EL MISMO CODIGO PERO CAMBIANDO EL DATO QUE USO, EJ EL NOMBRE O NOTA
                HACER LO DE ESO   **/
                mostrarAlumno(listaAlumnos[index]);

                break;

            }
            system("pause");
            system("cls");
        }
        while(opcion!=5);
    }
    else
    {
        printf("Hubo un error al crear la lista");
    }



    return 0;
}

