#include <stdio.h>

void seleccion(int n,int a[]);
void Intercambia( int *b,int *c);
void Imprime_Arreglo(int n, int a[]);


int main() {
    int n;

    printf("ingrese el tamaño de N:\n");
    scanf("%d",&n);

    int a[n];
    printf("ingrese números:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    seleccion(n,a);
    Imprime_Arreglo(n,a);
}

void seleccion(int n,int a[])
{
    for(int i=0;i<n-1;i++)
    {
        int i_menor=i;
        for (int j=i+1;j<n;j++)
        {
            if (a[j]<a[i_menor])
            {
                i_menor=j;
            }
        }
        Intercambia(&a[i],&a[i_menor]);
    }

}

void Intercambia( int *b, int *c)
{
    int aux;

    aux = *b;
    *b = *c;
    *c = aux;
}

void Imprime_Arreglo(int n, int a[]) {


    printf("el arreglo ordenado es: ");

    for (int i = 0; i < n; i++) {
        printf("%d "" ", a[i]);
    }

}