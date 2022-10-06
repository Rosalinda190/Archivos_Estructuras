#include <stdio.h>

void convierte(int *a, int *b, int *c);

int main()
{
    int a,b,c;
    printf("Ingrese el valor a:\n");
    scanf("%d", &a);
    printf("Ingrese el valor b:\n");
    scanf("%d", &b);
    printf("Ingrese el valor c:\n");
    scanf("%d", &c);

    convierte(&a,&b,&c);

    printf("%d %d %d",a,b,c);
    return 0;
}

void convierte(int *a, int *b, int *c){
    if(*a>*b){
        *b=(*b)*2;
    }
    if(*a<*b){
        *c=(*c)-(*a);
    }
    if(*c<0){
        *c=(*c)*(-1);
    }
}