#include <stdio.h>

void burbuja(int n,int a[]);
void burbuja_optimizado(int n,int a[]);
void Imprime_Arreglo(int n, int a[]);
void Intercambia( int *b, int *c);

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

    burbuja_optimizado(n,a);
    Imprime_Arreglo(n,a);
}


void burbuja(int n,int a[])
{
    int i,j;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                Intercambia(&a[j],&a[j+1]);
            }
        }
    }


}



void burbuja_optimizado(int n,int a[])
{
    int i,j,aux;
    for(i=1;i<n;i++){
        aux=0;
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1])
            {
                Intercambia(&a[j],&a[j+1]);
            }else
            {
                aux++;
            }
            if (aux==n-i)
            {
                return;
            }
        }

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
        printf("%d ", a[i]);
    }

}

