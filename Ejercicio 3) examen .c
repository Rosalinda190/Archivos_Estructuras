#include <stdio.h>
void Lea_Matriz(int N,int M,int matriz1[N][M]);
void Suma_Matriz(int N,int M,int matriz1[N][M],int matriz2[N][M]);
void Imprime_Matriz(int matriz2[N][M]);

int main() {
    int N,M,matriz1,matriz2;

    printf("Ingrese el tamaño de N y de M");
    scanf("%d",&N);
    scanf("%d",&M);

    Lea_Matriz(matriz1,N,M);
    Suma_Matriz(N, M, matriz1,matriz2);
    Imprime_Matriz(matriz2);
    return 0;

}

void Lea_Matriz(int N,int M,int matriz1[N][M]) {
   int i,j;
    for (i=0; i<N;i++){
        for(j=0;j<N;j++){
          scanf("%d",matriz1[N][M]);
        }
    }
}
void Suma_Matriz(int N, int M, int matriz1[N][M],int matriz2[N][M]){
    int suma;
    suma=0;
    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            if(i-1>=0){
                suma=matriz1[i-1][j];
            }
            if(j-1){
                suma=matriz1[i][j];
            }
            if((i+1)<N){
                suma=matriz1[i][j];
            }
            if(j+1<M){
               suma=matriz1[i][j+1];
            }
            suma=matriz1[i][j];
            matriz2[N][M]=suma;

        }
    }
}

void Imprime_Matriz(int matriz2[N][M] ){
    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            printf ("%d ",matriz2[i][j]);
        }
        printf("\n");
    }
}