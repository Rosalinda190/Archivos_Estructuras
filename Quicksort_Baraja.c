#include <stdio.h>
#include <stdlib.h>

int tamArreglo();
void llenaArreglo(int a[], int n);
void quicksort(int a[], int ini,int fin);
void Intercambia( int *b,int *c);
void Imprime_Arreglo(int n, int a[]);


int main()
{
    int ini=0,fin=0;


    fin=tamArreglo();
    int a[fin];
    llenaArreglo(a,fin);
    quicksort(a, ini, fin);
    Imprime_Arreglo(fin,a);
}

int tamArreglo()
{
    int tam=0;

    printf("ingrese el tamaño del arreglo:\n");
    scanf("%d",&tam);
    return tam;
}

void llenaArreglo(int a[], int n)
{
    printf("ingrese números:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int particion(int a[],int ini,int fin)
{
    int pivote = a[fin];
    int i = (ini - 1);

    for (int j = ini; j <= fin - 1; j++)
    {
        if (a[j] < pivote)
        {
            i++;
            Intercambia(&a[i], &a[j]);
        }
    }
    Intercambia(&a[i + 1], &a[fin]);
    return (i + 1);

}


void quicksort(int a[], int ini,int fin)
{
    if (ini<fin)
    {
        int p = particion(a, ini, fin);
        quicksort(a, ini, p - 1);
        quicksort(a, p + 1, fin);
    }
}


void Intercambia( int *b, int *c)
{
    int aux;

    aux = *b;
    *b = *c;
    *c = aux;
}

void Imprime_Arreglo(int n, int a[])
{
    printf("el arreglo ordenado es: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}