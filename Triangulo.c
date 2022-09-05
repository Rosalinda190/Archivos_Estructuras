#include <stdio.h>

 int main()
 {
     float lado1,lado2,lado3;

     printf ("Introduce cuanto mide el lado 1: ");
     scanf ("%f",&lado1);
     printf ("Introduce cuanto mide el lado 2: ");
     scanf ("%f",&lado2);
     printf ("Introduce cuanto mide el lado 3: ");
     scanf ("%f",&lado3);


     if (lado1==lado2 || lado2==lado3 || lado1==lado3)
     {
         printf("El triángulo es Isóceles");
     }
     else if ((lado1+lado2<lado3) || (lado1+lado3<lado2) || (lado2+lado3<lado1))
     {
         printf("El triángulo es Escaleno");
     }

     if (lado1==lado2 && lado1==lado3)
     {
         printf("El triángulo es Equilátero");
     }
 }

