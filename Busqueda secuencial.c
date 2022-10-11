#include <stdio.h>

int Busqueda(int N, int Arreglo[N],int num);
int BusquedaR(int num, int N, int Arreglo[]);

int main() {
    int num, N, res;

    printf("Ingrese el numero a buscar: \n");
    scanf("%d",&num);

    printf("Ingrese el tamaño del arreglo: \n");
    scanf("%d",&N);

    int Arreglo[N];

    printf("Ingrese los números del arreglo: \n");

    for (int i=0;i<N;i++){
        scanf("%d",&Arreglo[i]);
    }
    for (int i=0;i<N;i++){
        printf ("%d " " ",Arreglo[i]);
    }

    res = Busqueda(N,Arreglo,num);
    printf("\nIterativa = %d\n",res);
    res = BusquedaR(num,N,Arreglo);
    printf("Recursiva = %d\n",res);

    return 0;
}

//Función con ciclo.
int Busqueda(int N, int Arreglo[N], int num)
{
    int res = 0;
    for (int i=0; i<N; i++)
    {
        if (num==Arreglo[i])
        {
            res = 1;
            return (res);
        }
    }
    return (res);
}

//Función recursiva.
int BusquedaR(int num, int N, int Arreglo[])
{
    int res;
    if (num==Arreglo[N-1])
    {
        res = 1;
        return (res);
    }

    if (N-1<=0){
        res = 0;
        return (res);
    }

    BusquedaR(num, N-1, Arreglo);
    return (res);
}