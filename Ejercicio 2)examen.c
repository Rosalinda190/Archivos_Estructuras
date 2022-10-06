#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

void Invierte_Cadena(char cadena[MAX],char cadena2[MAX]);
int main() {
    char cadena,cadena2;

    printf("Ingrese la cadena de caracteres:\n");
    scanf("%[^\n]",cadena);
    Invierte_Cadena(cadena,cadena2);
    printf("%s", cadena);

}

void Invierte_Cadena(char cadena[],char cadena2[]){

    for (int i=0;i<MAX;i++){

        if (cadena[i]=='a'|| cadena[i]=='e'|| cadena[i]=='i'||cadena[i]=='o'||cadena[i]=='u'){
            cadena[i]= toupper(cadena[i]);
        }
    }
    strcpy(cadena2,cadena);

    for (int i=0;i<MAX;i++){

        if (cadena2[i]=='A'|| cadena2[i]=='E'|| cadena2[i]=='I'||cadena2[i]=='O'||cadena2[i]=='U'){
            cadena2[i]= tolower(cadena2[i]);
        }
    }

}
