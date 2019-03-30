#include <stdio.h>
#include <stdlib.h>
#include "funcionespunteros.h"
//

int main()
{
    int sepudo;
    float respuesta;
    int primerEdad;
    int segundaEdad;
    pedirEdad(&primerEdad);
    pedirEdad(&segundaEdad);
    sepudo=dividir(primerEdad,segundaEdad,&respuesta);
    if(sepudo==1)
    {
        printf("la respuesta es: %.2f",respuesta);
    }
    else
    {
        printf("no se pudo");
    }
    /*
    int miEdad;
    while(pedirEdad(&miEdad)==0)//si pedir edad es igual a 0 (error) que vuelva a pedir Edad ITERACION,para eso sirve
    {
        //nada
    }
//int retorno;
// int retorno=pedirEdad(&miEdad);
   if(pedirEdad(&miEdad)==1)
   {
       printf("\nsu edad es %d",miEdad);
   }
   else
   {
       printf("\nno se pudo");
   }
    */
   return 0;


      /*
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
    */
}

