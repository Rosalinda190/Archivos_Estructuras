#include <stdio.h>
void ordenar(int n, int a[]);
void imprime(int n,int a[]);
void Intercambio( int *b, int *c);

int main() {
    int n;
    printf("Ingrese el tamaño: \n");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    ordenar(n,a);

    imprime(n,a);
}

void ordenar(int n,int a[])
{
    int i,j;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]<a[j+1]){
                Intercambio(&a[j],&a[j+1]);
            }
        }
    }


}

void Intercambio( int *b, int *c)
{
    int aux;

    aux = *b;
    *b = *c;
    *c = aux;
}


void imprime(int n,int a[]) {

    printf("el arreglo final es: ");

    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }

}