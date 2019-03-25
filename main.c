#include <stdio.h>
#include <stdlib.h>

int pedirNumeros();
float sacarPromedio(int suma,int cantidad);
int sacarAprobados(int notaMinima,int nota);
int pruebagit();

int main()
{
    int nota;
    int i;
    int totalNotas=0;
    float promedio;
    float promedioNoAprobados;
    int sumaNoAprobados=0;
    int contadorAprobados=0;
    int contadorNoAprobados=0;

    for(i=0;i<5;i++)
    {
        nota=pedirNumeros();
        totalNotas=totalNotas+nota;
        if(sacarAprobados(6,nota))
        {
            contadorAprobados=contadorAprobados+1;
        }
        else
        {
            contadorNoAprobados=contadorNoAprobados+1;
            sumaNoAprobados=sumaNoAprobados+nota;
        }
    }
    promedio=sacarPromedio(totalNotas,i);
    promedioNoAprobados=sacarPromedio(sumaNoAprobados,contadorNoAprobados);
    printf("\nEl promedio de las notas es:%.2f",promedio);
    printf("\nLa cantidad de alumnos aprobados es:%d",contadorAprobados);
    printf("\nEl promedio de los NO aprobados es:%.2f",promedioNoAprobados);
    /*int numero;
    float promedio;
    int i=0;
    int acumulador=0;
    for(i==0;i<5;i++)
    {
        numero=pedirNumeros();
        acumulador=acumulador+numero;
    }
    promedio=sacarPromedio(acumulador,i);
    printf("El promedio es: %.2f",promedio);*/
    return 0;
}

int pedirNumeros()
{
    int numeroIngresado;
    do
    {
        printf("\nIngrese un numero entre el 0 y 10: ");
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

int sacarAprobados(int notaMinima,int nota)
{
    if(nota>=notaMinima)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
