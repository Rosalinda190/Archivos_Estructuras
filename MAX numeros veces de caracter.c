#include <stdio.h>
#include <string.h>

#define SIZE 100
void Pide_cadena(char cadena[]);
void Pide_caracter(char caract[1]);
int Cuenta_veces(char cadena2[SIZE],char caract[]);

int main() {
    char cadena[SIZE],cadena2[SIZE],caract[1];
    int veces;
    Pide_cadena(cadena);
    strcpy(cadena2,cadena);
    Pide_caracter(caract);
    veces= Cuenta_veces(cadena2, caract);

    printf ("La veces que se repite el caracter son: %d", veces);
}

void Pide_cadena (char cadena[]){
    printf ("Ingrese su cadena de caracteres:\n");
    scanf("%[^\n]",cadena);
}

void Pide_caracter(char caract[1]){
    printf("Ingresa tu caracter:\n");
    scanf("%s",caract);

}

int Cuenta_veces(char cadena2[SIZE],char caract[]){
    int i,veces=0;
    for (i=0; i<=100;i++){
        if(caract[0]==cadena2[i]){
            veces++;
        }
    }

    return (veces);
}