#include <stdio.h>

int Buscar_Indice(int n, int arr[],int objetivo);

int main() {

    int arr[] = { 1, 3, 5, 6 };
    int objetivo,respuesta;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf ("Ingrese el valor objetivo:\n");
    scanf("%d",&objetivo);
    respuesta=Buscar_Indice(n, arr,objetivo);
    printf("El índice donde debe insertarse el valor es: %d\n", respuesta);

}

int Buscar_Indice(int n, int arr[],int objetivo)
{
    int respuesta;
    for (int i=0;i<n;i++)
    {
        if (arr[i]==objetivo)
        {
            respuesta=i;
            return respuesta;
        }
        else if (arr[i]>objetivo)
        {
            respuesta=i;
            return respuesta;
        }
    }
    return n; //elementos menores que valor objetivo.
}


