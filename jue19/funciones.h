typedef struct{
    float dni;
    char nombre[50];
    char apellido[50];
    int estaVacio; //0 es falso, 1 es verdadero.

}ePersona;


ePersona ingresarPersona();
void cargarPersonas (ePersona listaPersonas[], int cantidad);
void mostrarPersona (ePersona unaPersona);
void mostrarListaDePersonas (ePersona listaPersonas[], int cantidad);
void inicializarPersonas(ePersona listaPersonas[], int cantidad);

int mostrarMenu();
