int buscarAlumnoLibre(eAlumno lista[],int cant)
{
    int i;
    int index = -1;
    for(i=0;i<cant;i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index=i;
            break;
        }
    }
    return index;
}




LO QUE VIMOS HOY ES VALIDAR LAS FUNCIONES, HACER UN IF AL PRINCIPIO FIJANDOTE SI LO MALO PASA, SINO, ENTRA
A REALIZAR LO DE LA FUNCION. LO OTRO ES QUE LAS FUNCIONES DEVUELVAN UN 1 O UN 0 SI LO HIZO BIEN O MAL, SEGUN EL CASO.
QUE LA FUNCION DEVUELVA ESO, Y QUE EL MAIN SE OCUPE DE DAR, TOMANDO EL RESULTADO DE 1 O 0 DE DECIR SI ESTO SALIO BIEN O MAL
A TRAVES DE UN PRINT F, QUE ESTE EN EL MAIN.
PREGUNTE SI CONVENIA HACER UNA FUNCION DE VALIDACION GENERICA, PERO HABRIA QUE MODIFICARLA TODO EL TIEMPO

SE PODRIA TENER FUNCIONES DE CHEQUEAR ENTRE 2 , OTRA DE CHEQUEAR ENTRE 3, OTRA ENTRE 4 Y ASI.


PONER UN RETORNO EN -1 POR default



LO DEL ID HACERLO CON UN CONTADOR(?) Y SINO UN PUNTERO







-*Pedir Legajo
-*Buscar en el array legajo
      -Lo encuentra
            -cambia el estado
      -No lo encuenra
             -informa


