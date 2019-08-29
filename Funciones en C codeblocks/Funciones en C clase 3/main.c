#include <stdio.h>
#include <stdlib.h>
//prototipos de funciones
void saludar(); //prototipo .  cuando no retorna nada va void
void sumar(int numero1); //para que una funcion tenga un parametro que usar, se define aca que tipo de dato va a usar. va el int o lo que sea.
int sumar2(int numero1,int numero2); //esta es una funcion que ya si devuelve un parametro, en este caso un int
/*
void multiplicar(); //estos de multiplicar son todos prototipos, estas variaciones se llaman "firmas" de una funcion.
void multiplicar(float uno, int dos);
float multiplicar(int uno);
int multiplicar(int uno, float uno); //este tiene un error, porque o el int o el float deberia llamarse dos, o de otra manera. no pueden llamarse iguales.
float multiplicar();
*/
void calcular(int numuno, int numdos, int operacion);
//ya en esta funcion cambie todo a float para que me de correctamente los decimales
void calcularConFunciones(float numuno, float numdos, int operacion); //aca hacemos la misma que arriba pero llamando funciones
float calcularSumar(float numuno, float numdos);
float calcularRestar(float numuno, float numdos);
float calcularMultiplicar(float numuno, float numdos);
float calcularDividir(float numuno, float numdos);
//una funcion para mostrar los resultados
void mostrar(float resultado);

float pedirDato();

int main()
{
    /**
    int valor;
    int valor2;
    valor = 66;

    saludar(); //se usa la funcion creada
    //sumar(66); //habiendole puesto 66 defini que era el numero 1 . esto es un parametro, poniendole el 66 asi.
    sumar(valor);

    //aca "valor" sigue valiendo 66. esto es el escope de una variable. es lo que val edentro de una funcion.

    valor2=sumar2(33,77);
    printf("\n\n La suma es: %d \n", valor2); //aca le pasamos los dos parametros dados para que trabaje la funcion sumar2,  y eso se lo asigno a la variable valor2

    calcularConFunciones(1,1,2);
    calcularConFunciones(3,7,1);
    calcularConFunciones(10,2,4);
    calcularConFunciones(2,3,3);
    calcularConFunciones(4,5,25);
    **/
    /**
  Esta fue mi version:
    int num1;
    int num2;
    int oper;

    printf("Elija los primeros dos numeros y luego la operacion \n");
    printf("Escriba el primer numero: \n");
    scanf("%d",&num1);
    printf("Escriba el segundo numero: \n");
    scanf("%d",&num2);
    printf("Ahora para la operacion\n 1 para Sumar \n 2 para Restar \n 3 para Multiplicar \n 4 para dividir\n\n");
    scanf("%d",&oper);

    calcularConFunciones(num1,num2,oper);

ahora la que dio el prof
**/


    int num1;
    int num2;
    int oper;
    int respuesta=1;

    while(respuesta==1)
    {
    printf("Elija los primeros dos numeros y luego la operacion \n");
    printf("Escriba el primer numero: \n");
    num1=pedirDato();
    printf("Escriba el segundo numero: \n");
    num2=pedirDato();
    printf("Ahora para la operacion\n 1 para Sumar \n 2 para Restar \n 3 para Multiplicar \n 4 para Dividir\n\n");
    oper=pedirDato();

    calcularConFunciones(num1,num2,oper);

    printf("\n\nDesea continuar?\n\n 1 para Si o 0 para No \n\n");
    scanf("%d",&respuesta);
    }

/**
    calcular(1,1,2);
    calcular(3,7,1);
    calcular(10,2,4);
    calcular(2,3,3);

    operacion
    1 suma
    2 resta
    3 mul
    4 div
    **/
    return 0;
}


//las funciones

void saludar() //implementando la funcion. haciendo la funcion, va va sin ; y llaves abajos
{
    printf("Hello world! todo bien?");
}

void sumar(int numero1) //aca va el tipo de dato y va el nombre si o si, el nombre del dato que va a usar.
{

    //en este caso el int numero1 es una variable local, actua como si existiera como tal. no importa de donde venga.
    //en esta funcion solo se maneja lo que yo le mande y las variables locales que tenga declaradas aca. esto es su scope.
    numero1=numero1+numero1;
    printf("suma %d", numero1);
}

int sumar2(int numero1,int numero2) //funcion que devuelve un valor, por eso el int. trabaja con los parametros que le mande, y guarda en la variable local "suma", eso lo uso como return
{
    int suma=numero1+numero2;
    return(suma);
}

void calcular(int numuno, int numdos, int operacion)
{
    float resultado;

    switch(operacion)
    {
    case 1:
        resultado= numuno + numdos;
        break;
    case 2:
        resultado= numuno - numdos;
        break;
    case 3:
        resultado=numuno *numdos;
        break;
    case 4:
        resultado= numuno/numdos;
        break;
    default:
        break;
    }
    printf("El resultado es :%f \n\n", resultado );
}

void calcularConFunciones(float numuno, float numdos, int operacion)
{
    float resultado=0;

    switch(operacion)
    {
    case 1:
        resultado= calcularSumar(numuno,numdos);
        break;
    case 2:
        resultado= calcularRestar(numuno,numdos);
        break;
    case 3:
        resultado= calcularMultiplicar(numuno, numdos);
        break;
    case 4:
        resultado= calcularDividir(numuno,numdos);
        break;
    default:
        printf("Ese no es una operacion valida, che\n");
        break;
    }

    //printf("El resultado es :%f \n\n", resultado);
    mostrar(resultado);
}

float calcularSumar(float numuno, float numdos)
{
    float resultado;
    return resultado= numuno + numdos;

}
float calcularRestar(float numuno, float numdos)
{
    float resultado;
    return resultado= numuno - numdos;
}
float calcularMultiplicar(float numuno, float numdos)
{
    float resultado;
    return resultado=numuno *numdos;
}
float calcularDividir(float numuno, float numdos)
{
    float resultado;
    return resultado= numuno/numdos;
}

void mostrar(float resultado)
{

    printf("El resultado es %.2f \n",resultado);
}

float pedirDato(){
    float dato;
        scanf("%f",&dato);
        return dato;
}
