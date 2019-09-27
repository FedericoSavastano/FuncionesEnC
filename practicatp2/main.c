#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include "ArrayEmployees.h"
#define ELEMENTS 1000
#define TRUE 1
#define FALSE -1

int main()
{
    int idNumber;
    Employee list[5];

    /**
    getString()aca saco el nombre
    lo valido
    lo mando a la funcion de agregar

     **/
     char palabra[20];

    getEstring("Dame una palabra  ",&palabra);
    printf(" \ntu palabra es %s   ",palabra);

    printf("\nahora cambiame la palabra : ");
    fflush(stdin);
    gets(palabra);
    printf(" \nahora tu palabra es %s   ",palabra);




    return 0;
}
