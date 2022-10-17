#include <stdio.h>

int Busqueda(int N, int arr[],int num);
int BusquedaR(int N,int arr[],int num,int mitad, int res);

int main() {
    int N,i,num,mitad,res;

    printf("Ingrese el tamaño del arreglo:\n");
    scanf("%d",&N);

    int arr[N];

    printf("Ingrese los números del arreglo:\n");
    for (i=0;i<N;i++)
    {
        scanf("%d," " ",&arr[i]);
    }

    printf ("Ingrese el numero que desea buscar:\n");
    scanf("%d",&num);


    res=Busqueda(N,arr,num);
    printf("Iterativo: %d \n", res);

    res=BusquedaR(N,arr,num,mitad,res);
    printf("Recursivo: %d ",res);


}

int Busqueda(int N, int arr[],int num) {
    int mitad, inicio = 0, fin = N-1, res=0;

    while (inicio <= fin) {
        mitad = (inicio + fin) / 2;
        if (arr[mitad] == num) {
            res=1;
            return res;
        } else if (arr[mitad] < num) {
            inicio = mitad + 1;
        } else{
            fin = mitad - 1;
        }
    }

    return (res);
}

int BusquedaR(int N, int arr[],int num,int mitad,int res) //Función recursiva.
{
    int inicio=0 , fin=N-1;

    mitad=(inicio+fin)/2;

    if (arr[mitad] == num) {
        res=1;
        return (res);
    } else if (arr[mitad] < num) {
        return (BusquedaR(N,arr,num,mitad+1,res));
    } else {
        return (BusquedaR(N, arr, num, mitad - 1,res));
    }

}



