#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include "ArrayEmployees.h"
#define ELEMENTS 1000
#define TRUE 1
#define FALSE -1

char * getEstring(char mensaje[], char *laestring )
{
    printf("%s", mensaje);
    fflush(stdin);
    gets(laestring);
    return *laestring;
}



/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *

int initEmployees(Employee* list, int len)
{
    int i;
    int returns=-1;

    for(i=0;i<len;i++)
    {
        if(list[i].id!=NULL && len>1)
        {
            list[i].isEmpty=TRUE;
            returns=0;

        }else{
            returns= -1;
        }
    }

    return returns;
}
*/


/** \brief add in a existing list of employees the values received as parameters
 * in the first empty position
 * \param list employee*
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok
 *
 */
int addEmployee(Employee* list, int len, int id, char name[],char lastName[],float salary,int sector)
{

    /**en la primer posisicon libre guardar los datos mandados por parametros
    por lo que deberia hacer otras funciones que pidan esos datos, validarlos,
    y ahi mandarselos aca y que me diga que este ok**/



    return -1;
}

/**hacer una funcion para conseguir cada dato, otra que lo valide,
**/



void incrementID (int *numeroID)
{
    //int incrementedID;
    //incrementedID=
    *numeroID=*numeroID+1;
    //return idNumber;
    //return incrementedID;
}
