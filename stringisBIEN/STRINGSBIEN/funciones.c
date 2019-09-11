#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/** \brief Consigue un dato en forma de string y le marca al usuario que debe ingresar
 *
 * \param char dato[] donde se guardará el dato requerido
 * \param char mensaje[] el mensaje a mostrar para que el usuario sepa que ingresar
 * \return void.
 *
 */
void conseguirDato (char dato[], char mensaje[])
    {
        printf("%s",mensaje);
        gets(dato);
    }


/** \brief Organiza y concatena el nombre y el apellido en el orden: "apellido, nombre"
 *
 * \param char nombreapellido[] el string que se forma de la union de nombres y apellidos
 * \param char apellido[] el apellido ingresado
 * \param char nombre[] el nombre ingresado
 * \return void.
 *
 */
void organizarDatos (char nombreapellido[], char apellido[], char nombre[])
    {
        strcat(nombreapellido,apellido);
        strcat(nombreapellido,", ");
        strcat(nombreapellido,nombre);
    }


/** \brief Pone en mayuscula al primer caracter y a todos los que esten luego de un espacio
 *
 * \param char nombreapellido[] el string con todos los datos concatenados
 * \return void
 *
 */
void ponerMayusculas (char nombreapellido[])
    {
        int cantidadLetras;
        int i;

        cantidadLetras=strlen(nombreapellido);
        strlwr(nombreapellido);

        for(i=0;i<cantidadLetras;i++)
        {
            if((i==0) || (nombreapellido[i-1]==' '))
            {
                if(nombreapellido[i]>'a' && nombreapellido[i]<'z')
                {
                    nombreapellido[i]=nombreapellido[i]-'a'+'A';
                }//if(nombreapellido[i]>'a' && nombreapellido[i]<'z')
            }//if((i==0) || (nombreapellido[i-1]==' '))
        }//for(i=0;i<cantidadLetras;i++)
    }



/** \brief muestra por pantalla el string concatenado y organizado
 *
 * \param nombreapellido[] char el string concatenado y organizado
 * \return void
 *
 */
void mostrarDatos(char nombreapellido[])
    {
        printf("%s", nombreapellido);
    }
