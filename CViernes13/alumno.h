typedef struct
{

    //campos o atributos
    int legajo;
    char nombre[50];
    int nota;



}eAlumno;

void mostrarAlumno(eAlumno unAlumno);
eAlumno pedirAlumno();


int compararAlumnoPorLegajo(eAlumno,eAlumno);

void cargarAlumnos (eAlumno[], int );
void mostrarListadoDeAlumnos (eAlumno[], int );

void ordenarAlumnosPorNombre(eAlumno[],int);

void hardcodearAlumnos(eAlumno [], int );
