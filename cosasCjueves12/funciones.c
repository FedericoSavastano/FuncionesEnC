#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**esto hicimos para hardcodear datos**/

/**hacer todas las funciones de string y tenerlo prolijo , se va a usar en parcial**/

void cargarConDatosEnteros(int array[], int cantidad)
{
    int aux[]={10,20,30,40,50,60};
    int i;
    for(i=0;i<cantidad;i++)
    {
        array[i]=aux[i];
    }
}

void cargarConDatosChar(char array[][50], int cantidad)
{
    char aux[][50]={"alberto","beto","carlos","daniel","ernesto","francisco"};
    int i;
    for(i=0;i<cantidad;i++)
    {
        strcpy(array[i],aux[i]);
    }
}



void tomarEdadyNombre(int edad[], int nombre[], int cantidad)
   {
    int i;
    for (i=0;i<cantidad;i++)
       {
           printf("ingrese nombre : ");
           fflush(stdin);
           gets(nombre[i]);
           printf("Ingrese edad : ");
           scanf("%d",&edad[i]);

       }
   }



void cargarConDatosEnterosTest(int array[], int cantidad)
{
    int aux[]={4,10,8,2};
    int i;
    for(i=0;i<cantidad;i++)
    {
        array[i]=aux[i];
    }
}

void cargarConDatosCharTest(char array[][50], int cantidad)
{
    char aux[][50]={"alfredo","rogelio","julieta","pablo"};
    int i;
    for(i=0;i<cantidad;i++)
    {
        strcpy(array[i],aux[i]);
    }
}



  int dameElMaximo(int miArray[], int cantidad)
{
    int i;
    int maximo;
    int posicionNota;
    for(i=0;i<cantidad;i++)
    {
        if(maximo<miArray[i]||i==0)
            maximo=miArray[i];
            printf("el array i es %d\n",i);
    }
    //printf("el array i es %d",miArray[i]);
    //return maximo;
    return i;
}

void mostrarIndicedelMaximo(int array[], int cantidad)
{
    int i;
    int indice;
    int maximo;
    maximo=dameElMaximo(array,cantidad);

    for(i=0;i<cantidad;i++)
    {
        if(array[i]==maximo)
            indice=i;
    }
    return indice;
}

void mostrarElNombreDelMaximo(char arrayPalabras[][50],int array[],int cantidad)
{
    int i;
    int indice;
    indice=mostrarIndicedelMaximo(array,cantidad);
    arrayPalabras[indice];

    printf("%s",arrayPalabras[indice]);
}




  /**
void mostrarEl nobre del maximo (char arrayPalabras[][50], int array[], int cantidad)
{
    int i;
    int indicie;
    indice=dameel indice del maximo(array cantidad);
    arraypalabras(indice);
}**/
