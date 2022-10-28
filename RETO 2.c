#include <stdio.h>
#define MAX 100
void leerA(int a[],int tam);
void imprimeA(int a[],int tam);
void Combinar(int a1[],int a2[], int a3[], int n, int m);
void Intercambia( int *b, int *c);
void Ordenar(int a[],int tam);

int main(void) {
    int n,m,num1[MAX],num2[MAX],num3[MAX];
    printf("ingrese el valor de n: ");
    scanf("%d",&n);
    printf("ingrese el valor de m: ");
    scanf("%d",&m);
    leerA(num1,n);
    leerA(num2,m);
    imprimeA(num1,n);
    imprimeA(num2,m);
    Combinar(num1,num2, num3, n, m);
    imprimeA(num3,n+m);
    Ordenar(num3,n+m);
    imprimeA(num3,n+m);

}

void leerA(int a[],int tam)
{
    printf("ingrese los valores del arreglo:\n");
    for(int i=0;i<tam;i++){
        scanf("%d",&a[i]);

    }

}

void imprimeA(int a[],int tam)
{
    for(int i=0;i<tam;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}

void Combinar(int a1[],int a2[], int a3[], int n, int m)
{
    int cont=0;
    m=m+n;
    for (int i=0;i<n;i++)
    {
        a3[i]=a1[i];
        if(i==n-1)
        {
            for (int j=i+1;j<m;j++)
            {
                a3[j]=a2[cont];
                cont++;
            }
        }
    }
}

void Ordenar(int a[],int n)
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

