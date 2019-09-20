
typedef struct{

    float dni;
    char nombre[50];
    char apellido[50];
    int estaVacio; //0 es falso, 1 es verdadero

}ePersona;


void inicializarPersonas ( ePersona lista[], int cantidad );
void cargarPersona (ePersona lista[], int cantidad, int indice);
int validarDNI(ePersona listaPersonas[], int dniAux, int cant);

int mostrarMenu();

void ordenarPorDni(ePersona lista[], int cantidad);
void ordenarPorApellido(ePersona lista[], int cantidad);
