#include <stdio.h>
void CapturaStock(int*,int);
void CapturaPrecio(float*,int);
void CapturaClave(int*,int);
void Mayor_Precio(int*,float*,int);
void Menos_Stock(int*,int*,int);
void Total_de_Venta(float*,int*,int);

int main() {
    int tam;

    printf("Ingresa el tamaño de tus arreglos: \n");
    scanf("%d",&tam);

    int Stock[tam];
    float Precio[tam];
    int Clave[tam];

    CapturaStock(Stock,tam);
    CapturaPrecio(Precio,tam);
    CapturaClave(Clave,tam);
    Mayor_Precio(Clave,Precio,tam);
    Menos_Stock(Clave,Stock,tam);
    Total_de_Venta(Precio,Stock,tam);
}

void CapturaStock(int Stock[],int tam){
    printf("Ingresa los datos de stock de productos: \n");
    for (int i=0; i<tam; i++){
        scanf("%d", &Stock[i]);
    }
}

void CapturaPrecio(float Precio[],int tam){
    printf("Ingresa los precios de productos: \n");
    for (int x=0; x<tam; x++){
        scanf("%f", &Precio[x]);
    }

}

void CapturaClave(int Clave[],int tam){
    printf("Ingresa las claves de los productos: \n");
    for (int i=0; i<tam; i++){
        scanf("%d", &Clave[i]);
    }
}

void Mayor_Precio(int Clave[],float Precio[],int tam){
    int mayor;
    mayor = Precio[0];
    for (int x=1 ;x<tam; x++){
        if (Precio[x]>mayor){
            mayor=Precio[x];
        }
        mayor = Clave[x];
    }
    printf("La clave con el precio mayor es: %d\n", mayor);
}

void Menos_Stock(int Clave[],int Stock[], int tam){
    int menos;
    menos = Stock[0];
    for (int j=1 ;j<tam; j++){
        if (Stock[j]<menos){
            menos = Stock[j];
        }
        menos = Clave[menos];
    }
    printf("La clave con el menor stock es: %d\n", Clave[menos]);
}

void Total_de_Venta(float Precio[],int Stock[], int tam){
    float multi=0;
    float suma=0;
    for (int x=0; x<tam; x++){
        multi = Precio[x] * Stock[x];
        suma = suma + multi;
    }
    printf("La suma total de venta es: %0.2f\n" ,suma);

}
