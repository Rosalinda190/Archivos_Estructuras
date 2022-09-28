#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void Rellena_arr(int numeros[MAX]);
int Suma_posicionespares(int numero2[MAX]);
int Suma_valorespares(int numeros[MAX]);
int Suma_no_mayor_de_100(int numeros[MAX],int *cont);



int main(void) {
    int numero[MAX],sumaT=0,sumaP=0,sumaV=0,cont=0, numero2[MAX];
    Rellena_arr(numero);
    for(int i=0;i<MAX;i++){
        numero2[i]=numero[i];
    }
    for(int i=0;i<MAX;i++){
        printf("%d ", numero2[i]);
    }
    sumaP=Suma_posicionespares(numero2);
    sumaV=Suma_valorespares(numero2);
    sumaT=Suma_no_mayor_de_100(numero2, &cont);

    printf("\nLa suma de los valores en posiciones par es: %d",sumaP);
    printf("\nLa suma de los valores par es: %d",sumaV);
    printf("\nLa suma total menos de 100 es: %d", sumaT);
    printf("\ny la cantidad de numeros es: %d", cont);
    return 0;
}

void Rellena_arr(int numeros[MAX])
{
    for (int i=0;i<MAX;i++){
        numeros[i]=1+rand()%99;
    }
}

int Suma_posicionespares(int numero2[MAX])
{
    int i,sumaP=0;
    for (i=0;i<MAX;i++){
        if (i%2==0){
            sumaP=sumaP+numero2[i];
        }
    }
    return sumaP;
}


int Suma_valorespares(int numero2[MAX])
{
    int i,sumaV=0;
    for (i=0;i<MAX;i++){
        if(numero2[i]%2==0){
            sumaV=sumaV+numero2[i];
        }
    }
    return (sumaV);
}


int Suma_no_mayor_de_100(int numero2[MAX],int *cont) {
    int i = 0, sumaT = 0;
    while (sumaT <= 100) {
        sumaT = sumaT + numero2[i];
        *cont = *cont + 1;
        i++;
    };
    if (sumaT > 100) {
        sumaT = sumaT - numero2[(*cont) - 1];
        *cont = *cont - 1;
    }
    return sumaT;

}