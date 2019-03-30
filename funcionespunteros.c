#ifndef FUNCIONESPUNTEROS_C_INCLUDED
#define FUNCIONESPUNTEROS_C_INCLUDED



#endif // FUNCIONESPUNTEROS_C_INCLUDED
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
