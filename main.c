#include <stdio.h>
#include <stdlib.h>
#include "funcionespunteros.h"


int main()
{
    printf("Hello world!\n");
    versianda();
    int sueldo;//creamos una variable que apunta a una posicion de memoria RAM
    printf("\n Lugar valor %d", &sueldo);
    sueldo=10000;
    cambiarvalor(sueldo);
    printf("\npor valor : %d", sueldo);
    cambiarreferencia(&sueldo);
    printf("\npor referencia: %d",sueldo);
    return 0;
}

