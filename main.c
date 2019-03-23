#include <stdio.h>
#include <stdlib.h>
//INGRESE LA NOTA DE 5 ALUMNOS(ENTRE 0 Y 10)
//INFORMAR CUANTOS APROBARON
//EL PROMEDIO DE NOTAS DE TODOS
//EL PROMEDIO DE NOTAS DE LOS QUE NO APROBARON
//1er

int PedirNumero(void);//PROTOTIPO
/** \brief
 *pide un numero entre 1 y 10
 * \param suma int
 *\param cantidad int
 * \return float
 *el promedio retornado
 */
float SacarPromedio(int suma,int cantidad);//LA COPIO Y LA PEGO EN LA FUNCION
int sacarAprobacion(int notaMinima, int nota);

int main()
{//ASI QUEDA EL MAIN
   /* int numeroIngresado;
    float promedio;
    int estaAprobado;
    numeroIngresado=PedirNumero();
    promedio=SacarPromedio(94,5);//18.7999 ACA YA ESTOY DECLARANDO CUANTO VALE SUMA Y CUANTO VALE CANTIDAD
    printf("\nEl numero ingresado es: %d",numeroIngresado);
    printf("\nEl promedio es: %f",promedio);
    estaAprobado=sacarAprobacion(6,numeroIngresado);
        if(estaAprobado==1)
        {
            printf("\nAprobado");
        }
        else
        {
            printf("\nNo Aprobado");
        }*/
    int notasPedidas;
    int i;
    int acumulador=0;
    float elPromedio;
    for(i=0;i<5;i++)
    {
        printf("\nIngrese la nota entre 0 y 10: ");
        scanf("%d",notasPedidas);
        acumulador=acumulador+notasPedidas;
    }
    elPromedio=SacarPromedio(notasPedidas,i);
    printf("El promedio es: %.2f",elPromedio);
    return 0;
}

int sacarAprobacion(int notaMinima, int numeroIngresado)
{
    if(numeroIngresado<notaMinima)
     {   return 0;
    }
    else
    {
        return 1;
    }
}
float SacarPromedio(int suma,int cantidad)
{
    float promedio;
    promedio=(float)suma/cantidad;
    return promedio;

}

int PedirNumero()
{
    int elNumero;
    //VALIDAR
    do
    {
         printf("\nIngrese un numero del 0 al 10: ");
        scanf("%d",&elNumero);
    }
   while(elNumero<0 || elNumero>10);

    return elNumero;
}
int PedirNotas ()
{

}


