#include <stdio.h>
#include <stdlib.h>

int pedirNumeros();
float sacarPromedio(int suma,int cantidad);

int main()
{
    int numero;
    float promedio;
    int i=0;
    int acumulador=0;
    for(i==0;i<5;i++)
    {
        numero=pedirNumeros();
        acumulador=acumulador+numero;
    }
    promedio=sacarPromedio(acumulador,i);
    printf("El promedio es: %.2f",promedio);
    return 0;
}

int pedirNumeros()
{
    int numeroIngresado;
    do
    {
        printf("\nIngrese un numero: ");
        scanf("%d",&numeroIngresado);
    }
    while(numeroIngresado>10 || numeroIngresado<0);
    return numeroIngresado;
}

float sacarPromedio(int suma,int cantidad)
{
    float elPromedio;
    elPromedio=(float)suma/cantidad;
    return elPromedio;
}
