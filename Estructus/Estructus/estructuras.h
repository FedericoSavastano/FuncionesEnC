typedef struct
{
    int numero;
    char nombre[50];
    char clase[50];
    int nivel;

}sPersonaje;


sPersonaje ingresarPersonaje();
void cargarPersonajes(sPersonaje lista[], int cantidad );
void mostrarPersonaje(sPersonaje elPersonaje);
void mostrarListadoPersonajes (sPersonaje lista[], int cantidad);
void hardcodeoPersonajes (sPersonaje lista[], int cantidad);
void ordenarAlfabeticamenteNombres (sPersonaje lista[], int cantidad);
void ordenarAlfabeticamenteClases (sPersonaje lista[], int cantidad);
