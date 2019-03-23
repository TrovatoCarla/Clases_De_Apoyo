#include <stdio.h>
#include <stdlib.h>

//1er
int PedirNumero(void);//PROTOTIPO

int main()
{//ASI QUEDA EL MAIN
    int numeroIngresado;
    numeroIngresado=PedirNumero();
    printf("El numero ingresado es: %d",numeroIngresado);
    return 0;
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
