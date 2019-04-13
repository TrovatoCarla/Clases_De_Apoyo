#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANIO 3

/** \brief
 *  vamos a administrar los productos de un comercio
 * codigo de 6 caracteres
 * precio
 * \param
 * \param
 * \return
 *
 */
int getPrecio(char *mensaje,float *resultado);
int getCodigo(char *mensaje, char *codigo);

int main()
{
    float precios[TAMANIO];
    char codigos[TAMANIO][7]; //que va primero, tamaño o codigo.
    //char codigos[7][TAMANIO];
    char ingreso[7];
    int i;
    int respuesta;

    respuesta==strlen(ingreso);
    printf("cantidad de caracteres ingredo:%d \n",respuesta);
    respuesta=strlen("lalala");
    printf("Cantidad de caracteres ingreso: %d \n",respuesta);



    for(i=0;i<TAMANIO;i++)
    {
        while(getPrecio("Ingrese precio\n", &precios[i]))
        {
            printf("Error");
        }
    }
    for(i=0;i<TAMANIO;i++)
    {
        printf("precio %.2f\n", precios[i]);
    }

    printf("De array de estructuras!\n");
    return 0;
}

 int getPrecio(char *mensaje,float *resultado)
 {
    char ingreso[50];
    float auxPrecio;
    int retorno=0;

    printf(mensaje);
    scanf("%s", ingreso);
    auxPrecio=atof(ingreso);//atof, recibe una palabra y te la devuelve como doble, si no te devuelve 0.

    if(auxPrecio>0)
    {
        *resultado=auxPrecio;
        retorno=1;
    }
    return retorno;
 }


    getCodigo(char *mensaje, char *codigo)
    // tiene que tener 6 de largo el codigo.
{
    char ingreso[50];
    float auxPrecio;
    int retorno=0;
    printf(mensaje);
    scanf("%s", ingreso);
    strlen(ingreso);

    auxPrecio=atof(ingreso);//atof, recibe una palabra y te la devuelve como doble, si no te devuelve 0.

    if( strlen(ingreso)==7)
    {

        retorno=1;
    }
    return retorno;
}
