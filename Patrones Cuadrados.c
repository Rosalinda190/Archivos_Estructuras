#include<stdio.h>
#define SIZE 10
void Imprime(int arr[SIZE][SIZE]);
void Patron_1(int arr[SIZE][SIZE]);
void Patron_2(int arr[SIZE][SIZE]);
void Patron_3(int arr[SIZE][SIZE]);

int main(){
    int arr[SIZE][SIZE];
    Patron_1(arr);
    printf("patron a):\n");
    Imprime(arr);
    printf("patron b):\n");
    Patron_2(arr);
    Imprime(arr);
    printf("patron c):\n");
    Patron_3(arr);
    Imprime(arr);
}
void Imprime(int arr[SIZE][SIZE]){
    int i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            printf("[%d]",arr[i][j]);
        }
        printf("\n");
    }
}
void Patron_1(int arr[SIZE][SIZE]){
    int i;
    for(i=0;i<SIZE;i++){
        arr[0][i]=1;
        arr[SIZE-1][i]=1;
        arr[i][0]=1;
        arr[i][SIZE-1]=1;
    }
}

void Patron_2(int arr[SIZE][SIZE]){
    int i,j;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            if(i==j || (i+j)==SIZE-1 ){
                arr[i][j]=1;
            }
        }
    }
}


void Patron_3(int arr[SIZE][SIZE]){
    int i;
    int dis;
    for(i=0;i<SIZE;i++){
        arr[0][i]=1;
        arr[SIZE-1][i]=1;
        arr[i][0]=1;
        arr[i][SIZE-1]=1;
    }
}
