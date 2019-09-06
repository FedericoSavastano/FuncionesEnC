#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcs.h"
#include <ctype.h>

int main()
{
    /**
    TAREA
    3 variables
    nombre15carac,
    apellido 15carac;
    apellidonombre ?caract;
    ver el apellid y el nombre que ingrese el usuario. ej: nombre: german, apellido: scarfoglio. y en apellido nombre15caracver:
        ver: Sarfoglio, German. sin modificar las primeras variables.


          ------
    strlen
    strcpy
    strupr
    strlwr
    strcmp
    stricmp
    strcat
    ----------
    **/

    char nombre[15];
    char apellido[15];
    char nombreapellido[32];

    int cantapellido;
    int culote;

    printf("Introduzca su nombre: ");
    gets(nombre);
    printf("Introduzca su apellido: ");
    gets(apellido);

    //strlwr(nombre);
    //strlwr(apellido);
    //nombre[0]=nombre[0]-'a'+'A';
    //apellido[0]=apellido[0]-'a'+'A';



    cantapellido=strlen(apellido);
    strcat(nombreapellido,apellido);
    strcat(nombreapellido,", ");
    strcat(nombreapellido,nombre);
    //nombreapellido[0]=nombreapellido[0]-'a'+'A';
    //nombreapellido[cantapellido+2]=nombreapellido[cantapellido+2]-'a'+'A';

    culote=strlen(nombreapellido);
    ponerMayusculas(nombreapellido,culote);

    printf("%s", nombreapellido);
/**

    nombre[0]=toupper(nombre[0]);
    apellido[0]=toupper(apellido[0]);


    strcat(nombreapellido,apellido);
    strcat(nombreapellido, " , ");
    strcat(nombreapellido, nombre);
    fflush(stdin);

    printf("Tu nombre es: %s", nombreapellido);

   conseguirString(nombre,"introduzca su nombre : ");
   conseguirString(apellido,"introduzca su apellido : ");
   mayusculaPrimeroYMinDespues(nombre);
   mayusculaPrimeroYMinDespues(apellido);
   concatenarApellidoYNombre(apellido,nombre,nombreapellido);

    st


   printf("%s", nombreapellido);

**/

    return 0;
}
