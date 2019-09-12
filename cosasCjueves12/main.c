#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define TAM 4



int main()
{
   int edades [TAM];
   int notas [TAM];
   char nombres [TAM] [50];
   int posicionNotaMaxima;


   int i;
/**
   for (i=0;i<TAM;i++)
   {
       printf("ingrese nombre : ");
       fflush(stdin);
       gets(nombres[i]);
       printf("Ingrese edad : ");
       scanf("%d",&edades[i]);

   }
**/


/**ESTO SE RE CAGO DEBERIA EMPEZARLO DE VUELTA. LA CUESTION ES QUE HABIA HARDCODEADOS NOMBRES Y NOTAS, Y DESPUES
HABIA QUE TIRAR LA NOTA MAXIMA Y EL NOMBRE CORRESPONDIENTE**/

   //fflush(stdin);
    cargarConDatosEnterosTest(notas,TAM);

   cargarConDatosCharTest(nombres,TAM);

    //mostrarNombresYNotas(nombres,notas,TAM);
    //printf("La nota maxima es de %d y pertenece a %s", notas[posicionNotaMaxima],nombres[posicionNotaMaxima]);
    mostrarElNombreDelMaximo(nombres,notas,TAM);

  //tomarEdadyNombre(edades,nombres,TAM);



    return 0;
}
