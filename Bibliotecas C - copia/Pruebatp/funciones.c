#include <stdio.h>
#include <stdlib.h>


int obtenerNumeroEntero (char mensaje[])
{
    int numero;
    printf("%s",mensaje);
    scanf("%d",&numero);
    return numero;
}

int sumarNumeros(int numeroUno, int numeroDos)
{
    int suma;
    suma=numeroUno+numeroDos;
    return suma;
}

int restarNumeros(int numeroUno, int numeroDos)
{
    int resta;
    resta=numeroUno-numeroDos;
    return resta;
}

int multiplicarNumeros(int numeroUno, int numeroDos)
{
    int multiplicar;
    multiplicar=numeroUno*numeroDos;
    return multiplicar;
}

int dividirNumeros(int numeroUno, int numeroDos)
{
    int division;
    division=numeroUno/numeroDos;
    return division;
}
