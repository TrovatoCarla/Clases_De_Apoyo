#ifndef FUNCIONESPUNTEROS_C_INCLUDED
#define FUNCIONESPUNTEROS_C_INCLUDED



#endif // FUNCIONESPUNTEROS_C_INCLUDED
int dividir(int datoUno,int datoDos,float *resultado)//ESTA FUNCION NOP RETORNA EL RESULTADO SINO QUE RETORNA SI PUDO O NO HACER LA DIVISION
{
    float aux;
    if(datoDos==0)//me verifica que alguno de los datos no sea 0 sino es error
    {
        return 0;
    }
    else
    {
        aux=(float)datoUno/datoDos;
        *resultado=aux;
        return 1;
    }
   // aux=(float)datoUno/datoDos;
    //*resultado=aux;
}
int pedirEdad(int *edad)
{
    int aux;
    int sePudo;
    int retorno;
    retorno=0;
    printf("ingrese su edad\n");
    //sePudo=scanf("%d",&aux);
    if(scanf("%d",&aux)==1)
    {
        if(aux>0 && aux<150)
        {
            *edad=aux;
            retorno=1;
            //devuelve 1 si esta todo OK
        }
    }
    return retorno;
}
void versianda(void)
{
    printf("funciona");
    return 0;
}

int cambiarvalor(int dato)
{
    dato=0;
    printf("\n lugar valor %d",&dato);
}
int cambiarreferencia (int *dato)
{
    (*dato)=0;
    printf("\n lugar referencia %d", &*dato);
}


