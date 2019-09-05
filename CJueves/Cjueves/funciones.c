#include <stdio.h>
#include <stdlib.h>

void mostrarArray(int miArray[], int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("%d\n",miArray[i]);
    }
}

int dameElMaximo(int miArray[], int cantidad)
{
    int i;
    int maximo;
    for(i=0;i<cantidad;i++)
    {
        if(maximo<miArray[i]||i==0)
            maximo=miArray[i];
    }

    return maximo;
}

int dameElMinimo(int miArray[], int cantidad)
{
    int i;
    int minimo;
    for(i=0;i<cantidad;i++)
    {
        if(minimo>miArray[i]||i==0)
            minimo=miArray[i];
    }

    return minimo;
}

void InicializarArray (int miArray[], int cantidad) //cuando se le pasa el array[] le estoy pasando una direccion de memoria, no una variable, es el espacio donde hay info, no la info ensi. la info la cambio en la funcion
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        miArray[i]=0;
    }
}

void cargaSecuencialDeArray(int miArray[],int cantidad, char mensaje[])
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf(mensaje);
        scanf("%d",&miArray[i]);
    }
}

float dameElPromedio(int miArray[], int cantidad)
{
    int i;
    float acumulador=0;
    float promedio;

    for(i=0;i<cantidad;i++)
    {
        acumulador=acumulador+miArray[i];
    }

    promedio=acumulador/cantidad;
    return promedio;
}


void ordenarArrayMenorAMAyor(int miArray[],int cantidad)
{
    int i, j, aux;
    for(i=0;i<cantidad;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if(miArray[i]>miArray[j])
            {
                aux= miArray[i];
                miArray[i] = miArray[j];
                miArray[j] = aux;
            }
        }
    }
}



void ordenarArrayMayorAMenor(int miArray[],int cantidad)
{
    int i, j, aux;
    for(i=0;i<cantidad;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if(miArray[i]<miArray[j])
            {
                aux= miArray[i];
                miArray[i] = miArray[j];
                miArray[j] = aux;
            }
        }
    }
}
