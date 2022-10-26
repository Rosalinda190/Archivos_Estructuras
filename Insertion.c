#include <stdio.h>

void Imprime_Arreglo(int a[], int tam);
void Insercion_(int a[],int tam);

int main(void) {
    int a[] = {10,9,8,7,6,5,4,3,1,0};
    int tam = sizeof(a) / sizeof(int);
    

    Insercion_( a, tam);
    Imprime_Arreglo(a,tam);

}

void Insercion_(int a[],int tam)
{

    if(tam <= 1){
        return;
    }

    int i, j, aux;

    for(i = 1; i < tam; i++)
    {
        j = i;
        aux = a[i];
        while(j > 0 && a[j - 1] > aux)
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = aux;
    }
}


void Imprime_Arreglo(int a[],int tam)
{
    printf("el arreglo ordenado es: ");
    for (int i = 0; i < tam; i++)
        printf("%d ", a[i]);
}
