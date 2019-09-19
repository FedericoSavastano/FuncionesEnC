#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


ePersona ingresarPersona()

//void cargarpersona(arraypersonas[]) TENDRIA QUE HABER SIDO ASI LA FUNCION PORQUE SINO NO SE PUEDE PASARLE
//EL ARRAY PARA VALIDAR
{
    ePersona unaPersona;
    /**
    printf("Ingrese el Dni : ");
    scanf("%f", &unaPersona.dni );
    **/

    int auxDni;
    printf("Ingrese el Dni : ");
    scanf("&f",&auxDni);
    while(validarDNI(listaPersonas,auxDni,CANTIDAD)==1)
        {
            printf("ya existe ese dni, ingrese otro: ");
            scanf("%d",&auxDni);
        }

    unaPersona.dni=auxDni;






    printf("Ingrese el nombre : ");
    fflush(stdin);
    gets(unaPersona.nombre);

    printf("Ingrese el apellido : ");
    fflush(stdin);
    gets(unaPersona.apellido);

    unaPersona.estaVacio = 0;

    return unaPersona;
}


void cargarPersonas (ePersona listaPersonas[], int cantidad)
{
    int i;
    //int opcionCarga;

    for (i=0;i<cantidad;i++)
    {
        listaPersonas[i]=ingresarPersona();
       // printf("\nCargar otro? 1 para Si 2 para No\n");
       // scanf("%d",&opcionCarga);
       // if(opcionCarga==2)
       // {
        //    break;
        //}
    }
}

void mostrarPersona (ePersona unaPersona)
{
    printf("\n %d   %d --- %s --- %s \n", unaPersona.estaVacio,(int)unaPersona.dni, unaPersona.nombre, unaPersona.apellido);
}

void mostrarListaDePersonas (ePersona listaPersonas[], int cantidad)
{
    int i;
    printf("Esta vacio --- Dni --- Nombre --- Apellido\n");
    for (i=0;i<cantidad;i++)
    {
        mostrarPersona(listaPersonas[i]);
    }
}


void inicializarPersonas(ePersona listaPersonas[], int cantidad)
{
    int i;
    int vacio=1;
    for (i=0;i<cantidad;i++)
    {
        listaPersonas[i].estaVacio=vacio;
    }
}


int mostrarMenu()
{
    int opcion;
    printf("\n Ingrese una opcion : \n 1. Cargar persona \n 2. Mostrar lista \n 3. Ordenar por Dni \n 8. Salir \n");
    scanf("%d",&opcion);

    return opcion;

}

/**
funcion prof
void ingresarUnaPersona (ePersona lista[], int indice)

    {
    printf("Ingrese el Dni : ");
    scanf("%f", &unaPersona.dni );

    printf("Ingrese el nombre : ");
    fflush(stdin);
    gets(unaPersona.nombre);

    printf("Ingrese el apellido : ");
    fflush(stdin);
    gets(unaPersona.apellido);

    unaPersona.estaVacio = 0;
    }

**/
/**funcion prof

void PedirPersona(ePersona p[],int cant)
int flagEncontro = 0
for (i=0;i<cantidad;i++)
{
    if(p[i].estaVacio==1)
    {
        PedirDatos(p,i);
        flagEncontro=1;
        break;
    }
}
if(flagEncontro==0)
{
    printf("no hay mas espacio");
}
**/


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

/**
void ordenarporDni(ePersona p[],int cant)
{
    int i;
    int j;
    ePersona auxPer;
    for(i=0;i<cant -1; i++)
    {
        for(j=i+1;j<cant;i++)
        {
            if(p[i].DNI<p[j].DNI)
            {
                auxPer= p[i];
                p[i]=p[j];
                p[j]=auxPer;
            }
        }
    }
}
*/
