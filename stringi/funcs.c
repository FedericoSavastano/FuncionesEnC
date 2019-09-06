#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

 void conseguirString (char dato[], char mensaje[])
    {
        printf("%s",mensaje);
        gets(dato);
    }

void mayusculaPrimeroYMinDespues(char dato[])
    {
        strlwr(dato);
        dato[0]=toupper(dato[0]);
    }

void concatenarApellidoYNombre (char dato1[], char dato2[], char stringConcatenado[])
   {
       strcat(stringConcatenado,dato1);
       strcat(stringConcatenado," , ");
       strcat(stringConcatenado,dato2);

   }












   void ponerMayusculas (char stringchar[], int cantidad)
    {
        int i;
        strlwr(stringchar);
        for(i=0;i<cantidad;i++)
        {
            if((i==0) || (stringchar[i-1]==' '))
            {
                if(stringchar[i]>'a' && stringchar[i]<'z')
                {
                    stringchar[i]=stringchar[i]-'a'+'A';
                }

            }
        }

    }
