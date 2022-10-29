#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 50000
#define M 75000
#define O 90000

void Genera(int Bur[N], int Bar[N], int Selec[N], int Quick[N]);
void Genera2(int Burb[M], int Bara[M], int Selecc[M], int QuickS[M]);
void ordenaAsc(int Burb[M], int Bara[M], int Selecc[M], int QuickS[M]);
void ordenaDesc(int Burb[O], int Bara[O], int Selecc[O], int QuickS[O]);
void Intercambia(int *a, int *b);
void Burbuja(int Bur[N]);
void Burbuja2(int Burb[M]);
void Burbuja3(int Burbu[O]);
void Baraja(int Bar[N]);
void Baraja2(int Bara[M]);
void Baraja3(int Baraj[O]);
void Seleccion(int Selec[N]);
void Seleccion2(int Selecc[M]);
void Seleccion3(int Selecci[O]);
int Pivote(int Quick[N], int ini, int fin);
int Pivote2(int QuickS[M], int ini, int fin);
int Pivote3(int QuickSo[O], int ini, int fin);
void QuickSort(int Quick[N], int ini, int fin);
void QuickSort2(int QuickS[M], int ini, int fin);
void QuickSort3(int QuickSo[O], int ini, int fin);
void Imprime(int info1[2][4], int info2[2][4],int info3[2][4]);

int main()
{
    srand(time(0));
    int Bur[N], Bar[N], Selec[N], Quick[N], info1[2][4];
    int Burb[M], Bara[M], Selecc[M], QuickS[M], info2[2][4];
    int Burbu[O], Baraj[O], Selecci[O], QuickSo[O], info3[2][4];
    int ini=0, fin=N-1, i, j,k;
    for(i=0; i<2; i++)
    {
        Genera(Bur, Bar, Selec, Quick);

        time_t ti, tf;
        time(&ti);
        Burbuja(Bur);
        time(&tf);
        time_t tt=tf-ti;
        info1[i][0]=tt;

        time_t ti2, tf2;
        time(&ti2);
        Baraja(Bar);
        time(&tf2);
        time_t tt2=tf2-ti2;
        info1[i][1]=tt2;

        time_t ti3, tf3;
        time(&ti3);
        Seleccion(Selec);
        time(&tf3);
        time_t tt3=tf3-ti3;
        info1[i][2]=tt3;

        time_t ti4, tf4;
        time(&ti4);
        QuickSort(Quick, ini, fin);
        time(&tf4);
        time_t tt4=tf4-ti4;
        info1[i][3]=tt4;
    }

    for(j=0; j<2; j++)
    {
        Genera2(Burb, Bara, Selecc, QuickS);
        ordenaAsc(Burb, Bara, Selecc, QuickS);

        time_t ti, tf;
        time(&ti);
        Burbuja2(Burb);
        time(&tf);
        time_t tt=tf-ti;
        info2[j][0]=tt;

        time_t ti2, tf2;
        time(&ti2);
        Baraja2(Bara);
        time(&tf2);
        time_t tt2=tf2-ti2;
        info2[j][1]=tt2;

        time_t ti3, tf3;
        time(&ti3);
        Seleccion2(Selecc);
        time(&tf3);
        time_t tt3=tf3-ti3;
        info2[j][2]=tt3;

        time_t ti4, tf4;
        time(&ti4);
        QuickSort2(QuickS, ini, fin);
        time(&tf4);
        time_t tt4=tf4-ti4;
        info2[j][3]=tt4;
    }
    for(k=0; k<2; k++)
    {
        Genera(Burbu, Baraj, Selecci, QuickSo);
        ordenaDesc(Burbu, Baraj, Selecci, QuickSo);

        time_t ti, tf;
        time(&ti);
        Burbuja3(Burbu);
        time(&tf);
        time_t tt=tf-ti;
        info3[k][0]=tt;

        time_t ti2, tf2;
        time(&ti2);
        Baraja3(Baraj);
        time(&tf2);
        time_t tt2=tf2-ti2;
        info3[k][1]=tt2;

        time_t ti3, tf3;
        time(&ti3);
        Seleccion3(Selecci);
        time(&tf3);
        time_t tt3=tf3-ti3;
        info3[k][2]=tt3;

        time_t ti4, tf4;
        time(&ti4);
        QuickSort3(QuickSo, ini, fin);
        time(&tf4);
        time_t tt4=tf4-ti4;
        info3[k][3]=tt4;
    }
    Imprime(info1, info2,info3);
}


void Genera(int Bur[N], int Bar[N], int Selec[N], int Quick[N])
{
    int i, j, k, l, m;
    for(i=0; i<N; i++)
    {
        Bur[i]=rand();
        Bar[i]=Bur[i];
        Selec[i]=Bur[i];
        Quick[i]=Bur[i];
    }
}

void Genera2(int Burb[M], int Bara[M], int Selecc[M], int QuickS[M])
{
    int i, j, k, l, m;
    for(i=0; i<M; i++)
    {
        Burb[i]=rand();
        Bara[i]=Burb[i];
        Selecc[i]=Burb[i];
        QuickS[i]=Burb[i];
    }
}



void ordenaAsc(int Burb[M], int Bara[M], int Selecc[M], int QuickS[M])
{
    int a;
    for (int i = 0; i < M; ++i)
    {

        for (int j = i + 1; j < M; ++j)
        {

            if (Burb[i] > Burb[j])
            {

                a =  Burb[i];
                Burb[i] = Burb[j];
                Burb[j] = a;
                Bara[i]=Burb[i];
                Selecc[i]=Burb[i];
                QuickS[i]=Burb[i];
                Bara[j]=Burb[j];
                Selecc[j]=Burb[j];
                QuickS[j]=Burb[j];

            }

        }

    }

}

void ordenaDesc(int Burbu[O], int Baraj[O], int Selecci[O], int QuickSo[O])
{
    int a;
    for (int i = 0; i < M; ++i)
    {

        for (int j = i + 1; j < M; ++j)
        {

            if (Burbu[i] < Burbu[j])
            {

                a =  Burbu[i];
                Burbu[i] = Burbu[j];
                Burbu[j] = a;
                Baraj[i]=Burbu[i];
                Selecci[i]=Burbu[i];
                QuickSo[i]=Burbu[i];
                Baraj[j]=Burbu[j];
                Selecci[j]=Burbu[j];
                QuickSo[j]=Burbu[j];

            }

        }

    }

}



void Intercambia(int *a, int *b)
{
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}

void Burbuja(int Bur[N])
{
    int i, j;
    for(j=1; j<N; j++)
    {
        for(i=0; i<N-j; i++)
        {
            if(Bur[i]>Bur[i+1])
            {
                Intercambia(&Bur[i], &Bur[i+1]);
            }
        }
    }
}

void Burbuja2(int Burb[M])
{
    int i, j;
    for(j=1; j<M; j++)
    {
        for(i=0; i<M-j; i++)
        {
            if(Burb[i]>Burb[i+1])
            {
                Intercambia(&Burb[i], &Burb[i+1]);
            }
        }
    }
}
void Burbuja3(int Burbu[O])
{
    int i, j;
    for(j=1; j<N; j++)
    {
        for(i=0; i<N-j; i++)
        {
            if(Burbu[i]>Burbu[i+1])
            {
                Intercambia(&Burbu[i], &Burbu[i+1]);
            }
        }
    }
}

void Baraja(int Bar[N])
{
    int p, i;
    for(p=1; p<N; p++)
    {
        for(i=p; i>0 && Bar[i]<Bar[i-1]; i--)
        {
            Intercambia(&Bar[i], &Bar[i-1]);
        }
    }
}

void Baraja2(int Bara[M])
{
    int p, i;
    for(p=1; p<M; p++)
    {
        for(i=p; i>0 && Bara[i]<Bara[i-1]; i--)
        {
            Intercambia(&Bara[i], &Bara[i-1]);
        }
    }
}

void Baraja3(int Baraj[O])
{
    int p, i;
    for(p=1; p<M; p++)
    {
        for(i=p; i>0 && Baraj[i]<Baraj[i-1]; i--)
        {
            Intercambia(&Baraj[i], &Baraj[i-1]);
        }
    }
}


void Seleccion(int Selec[N])
{
    int i, j, k=0;
    for(i=0; i<N; i++)
    {
        k=i;
        for(j=i+1; j<N; j++)
        {
            if(Selec[j]<Selec[k])
            {
                k=j;
            }
        }
        Intercambia(&Selec[i], &Selec[k]);
    }
}

void Seleccion2(int Selecc[M])
{
    int i, j, k=0;
    for(i=0; i<M; i++)
    {
        k=i;
        for(j=i+1; j<M; j++)
        {
            if(Selecc[j]<Selecc[k])
            {
                k=j;
            }
        }
        Intercambia(&Selecc[i], &Selecc[k]);
    }
}
void Seleccion3(int Selecci[O])
{
    int i, j, k=0;
    for(i=0; i<M; i++)
    {
        k=i;
        for(j=i+1; j<M; j++)
        {
            if(Selecci[j]<Selecci[k])
            {
                k=j;
            }
        }
        Intercambia(&Selecci[i], &Selecci[k]);
    }
}

int Pivote(int Quick[N], int ini, int fin)
{
    int pivot=Quick[fin], i=ini-1, j;

    for(j=ini; j<fin; j++)
    {
        if(Quick[j]<=pivot)
        {
            i+=1;
            Intercambia(&Quick[i], &Quick[j]);
        }
    }
    Intercambia(&Quick[i+1], &Quick[fin]);
    return(i+1);
}

int Pivote2(int QuickS[M], int ini, int fin)
{
    int pivot=QuickS[fin], i=ini-1, j;

    for(j=ini; j<fin; j++)
    {
        if(QuickS[j]<=pivot)
        {
            i+=1;
            Intercambia(&QuickS[i], &QuickS[j]);
        }
    }
    Intercambia(&QuickS[i+1], &QuickS[fin]);
    return(i+1);
}

int Pivote3(int QuickSo[O], int ini, int fin)
{
    int pivot=QuickSo[fin], i=ini-1, j;

    for(j=ini; j<fin; j++)
    {
        if(QuickSo[j]<=pivot)
        {
            i+=1;
            Intercambia(&QuickSo[i], &QuickSo[j]);
        }
    }
    Intercambia(&QuickSo[i+1], &QuickSo[fin]);
    return(i+1);
}

void QuickSort(int Quick[N], int ini, int fin)
{
    if(ini<fin)
    {
        int pos=Pivote(Quick, ini, fin);
        QuickSort(Quick, ini, pos-1);
        QuickSort(Quick, pos+1, fin);
    }
}

void QuickSort2(int QuickS[M], int ini, int fin)
{
    if(ini<fin)
    {
        int pos=Pivote(QuickS, ini, fin);
        QuickSort2(QuickS, ini, pos-1);
        QuickSort2(QuickS, pos+1, fin);
    }
}
void QuickSort3(int QuickSo[O], int ini, int fin)
{
    if(ini<fin)
    {
        int pos=Pivote(QuickSo, ini, fin);
        QuickSort2(QuickSo, ini, pos-1);
        QuickSort2(QuickSo, pos+1, fin);
    }
}
void Imprime(int info1[2][4], int info2[2][4],int info3[2][4])
{
    int i, j, k, l;
    int m, n, o, p;

    printf("Para N=50000\nBurbuja    Baraja    Seleccion  QuickSort\n");
    for(j=0; j<2; j++)
    {
        for(k=0; k<4; k++)
        {
            printf("%d          ", info1[j][k]);
        }
        printf("\n");
    }


    printf("Para M=75000\nBurbuja    Baraja    Seleccion  QuickSort\n");
    for(n=0; n<2; n++)
    {
        for(o=0; o<4; o++)
        {
            printf("%d          ", info2[n][o]);
        }
        printf("\n");
    }

    printf("Para O=90000\nBurbuja    Baraja    Seleccion  QuickSort\n");
    for(l=0; l<2; l++)
    {
        for(p=0; p<4; p++)
        {
            printf("%d          ", info3[l][p]);
        }
        printf("\n");
    }


}


