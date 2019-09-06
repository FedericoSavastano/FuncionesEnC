#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /**
    char palabra[10];
    char palabra2[10];
    char todo[50];

    int length;
    int comp;
    printf("Ingrese una palabra : ");

    //scanf("%s", palabra); //es redundante poner el & en este caso exclusivo. si es de caracteres no va. si es de enteros si, ojo.
    //si sos re loco y trabajas con linux el scanf va asi:
    //scanf("%[^\n]")
    //y sino va el fgets:
       // fgets(palabra,10,stdin);

    gets(palabra);
    length=strlen(palabra);
    printf("La palabra es %s y el largo es %d",palabra,length);


    strcpy(palabra2, "holas"); //un puntero a char es un vector de char, la constante char* es lo que va entre "" . el primero es el destino, y el segundo lo que se va a guardar.
    comp = strcmp(palabra2,palabra)//compara si es igual el contenido de dos strings, si es correcto da 0, si es 1 es que una esta adelante de la otra, y si da -1 es que la segunda esta primero que la otra.
    strlwr(palabra); //esto combierte todo a minusculas,
    stricmp(palabra2,palabra);//esto ignora si son mayusculas si son minusculkas fuma faso.


    if(strcmp(palabra2,palabra)==0)
    {
        printf("son iguales");
    }else{
        printf("no son iguales");
    }

    ------
    strlen
    strcpy
    strupr
    strlwr
    strcmp
    stricmp
    strcat
    ----------


    strcat(todo, palabra);
    strcat(todo, palabra2);

    printf("%s",todo);



    TAREA
    3 variables

    nombre15carac,
    apellido 15carac;
    apellidonombre ?caract;

    ver el apellid y el nombre que ingrese el usuario. ej: nombre: german, apellido: scarfoglio. y en apellido nombre15caracver:
        ver: Sarfoglio, German. sin modificar las primeras variables.
    **/

    char nombre[15];
    char apellido[15];
    char nombreapellido[40];
    char inicialMayus;

    printf("Ingrese el Nombre : ");
    gets(nombre);
    printf("Ingrese el Apellido : ");
    gets(apellido);

    strupr(nombre);
    strupr(apellido);

    strcpy(inicialMayus,nombre[0]);
    printf("Su inicial es %s",inicialMayus);
    int i;
    for(i=0;i<15;i++)
    {
        printf("%s",nombre[i]);
    }



    printf("Su nombre es : %s , %s", apellido, nombre );


    //toupper()pr(nombre[0]);






    return 0;
}
