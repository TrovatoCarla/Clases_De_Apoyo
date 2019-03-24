#include <stdio.h>
#include <stdlib.h>

int PedirNumeros();
float SacarPromedio(int suma, int cantidad);


int main()
{

    promedio=SacarPromedio(94,5);
    SacarPromedio();
    return 0;

}

int PedirNumeros()
{
    int numeroIngresado;
    int acumulador=0;

    for(int i=0;i<5;i++)
    {
        do
        {
        printf("\Ingrese un numero del 0 al 10: ");
        scanf("%d",&numeroIngresado);
        }
        while(numeroIngresado>10 || numeroIngresado<0);
        acumulador=acumulador+numeroIngresado;
    }
}
float SacarPromedio(int suma, int cantidad)
{
    float promedio;
    promedio=(float)suma/cantidad;
    printf("El promedio es:%f",promedio);
    return promedio;

}

