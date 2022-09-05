#include <stdio.h>

int main() {
    float kilo,precio,precioN;

    printf("Ingrese el costo del kilo:");
    scanf("%f",&precio);
    printf("Ingrese cuantos kilos desea comprar:");
    scanf("%f",&kilo);

    if (kilo<=2)
    {
        printf("no aplica ningún descuento");

    }
    else if (kilo>=2.01 && kilo<=5)
    {
        precioN=precio-(precio*0.1);
        printf("El precio final es: %f",precioN);
    }
    else if (kilo>=5.01 && kilo<=10)
    {
        precioN=precio-(precio*0.15);
        printf("El precio final es: %f",precioN);
    }
    else if (kilo>=10.01)
    {
        precioN=precio-(precio*0.2);
        printf("El prec io final es: %f",precioN);
    }


}
