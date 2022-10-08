#include <stdio.h>

int Calcula_Fibonacci(int n);

int main() {
    int n;
    printf("Ingrese el número:\n");
    scanf("%d", &n);

    Calcula_Fibonacci(n);

    for (int i=0; i<=n; i++)  //Solo imprime la serie.
    {
        printf("%d " " ", Calcula_Fibonacci(i));
    }
    return 0;
}

int Calcula_Fibonacci(int n)
{

    if (n==0 || n==1){
        return n;
    }
    else
   {
        return Calcula_Fibonacci(n-1) + Calcula_Fibonacci(n-2);
   }


}
