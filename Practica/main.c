#include <stdio.h>
#include <stdlib.h>

int PedirNumeros();
float SacarPromedio(int suma,int cantidad);


int main()
{
    PedirNumeros();
    SacarPromedio(float);
    return 0;
}

int PedirNumeros()
{
    int numeroIngresado;
    for(int i=0;i<5;i++)
    {
        do
        {
        printf("\Ingrese un numero del 0 al 10: ");
        scanf("%d",&numeroIngresado);
        }
        while(numeroIngresado>10 || numeroIngresado<0);
    }
}
float SacarPromedio(int suma,int cantidad)
{
    float elPromedio;
    elPromedio=(float)suma/cantidad;
    return elPromedio;

}
