#include <stdio.h>
#define MAX 4
struct cancion{
    int codigo;
    char nombre[50];
    char album[50];
    int interpretes;
    char interpretes_name[3][50];
    int reproducciones;
};
void leer(struct cancion *n);
void leer_arreglo(struct cancion canciones[MAX]);
int mayor_Reproducciones(struct cancion canciones[MAX]);

int main()
{
    int mayor;
    struct cancion canciones[100];
    leer_arreglo(canciones);
    mayor=mayor_Reproducciones(canciones);
    printf("la cancion con mas repoducciones es: %s",canciones[mayor].nombre);
}

void leer_arreglo(struct cancion canciones[MAX]){
    for(int i=0;i<MAX;i++){
        leer(&canciones[i]);
    }
}

void leer(struct cancion *n){
    fflush(stdin);
    printf("ingrese el nombre de la cancion: ");
    scanf("%[^\n]",n->nombre);
    fflush(stdin);
    printf("ingrese el nombre del album de la cancion: ");
    scanf("%[^\n]",n->album);
    fflush(stdin);
    printf("ingrese el codigo de la cancion: ");
    scanf("%d",&n->codigo);
    fflush(stdin);
    printf("ingrese los interpretes de la cancion(maximo 3): ");
    scanf("%d",&n->interpretes);
    for(int i=0;i<n->interpretes;i++){
        fflush(stdin);
        printf("nombre del interprete %d: ",i+1);
        scanf("%[^\n]",n->interpretes_name[i]);
    }
    fflush(stdin);
    printf("ingrese las reproducciones de la cancion: ");
    scanf("%d",&n->reproducciones);
}

int mayor_Reproducciones(struct cancion canciones[MAX]){
    int may=0;
    for(int i=0;i<MAX;i++){
        if(canciones[i].reproducciones > canciones[may].reproducciones){
            may=i;
        }

    }
    return may;
}