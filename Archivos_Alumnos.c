#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char lastName[50];
    float average;
} Alumno;

void Read(FILE *file, Alumno arr_alumno[] );
void Organize(Alumno arr_alumno[],long Size);
void Swap(Alumno *A,Alumno *B);
void Print(Alumno arr_alumno[],long Size);

int main(void)
{
  FILE *file;
  long Size;

  file=fopen("aprendizaje2.dat","rb");
  if(file==NULL){
    printf("El archivo no se puede abrir");
    exit(EXIT_FAILURE);
  }

   fseek(file,0,SEEK_END);
   Size=ftell(file)/sizeof(Alumno);
   Alumno arr_alumno[Size];
   Read(file,arr_alumno);
   Organize(arr_alumno,Size);
   Print(arr_alumno,Size);



}

void Read(FILE *file, Alumno arr_alumno[])
{
  int i=0;
  fseek(file,0,SEEK_SET);

  fread(&arr_alumno[i++],sizeof(Alumno),1,file);

  while(!feof(file))
    {
      fread(&arr_alumno[i++],sizeof(Alumno),1,file);
    }
  fclose(file);
}

void Print(Alumno arr_alumno[],long Size)
{
    for(int i=0;i<Size;i++)
   {
      printf("Nombre del alumno: %s\n",arr_alumno[i].name);
      printf("Apellido del alumno: %s\n",arr_alumno[i].lastName);
      printf("Promedio del alumno: %f\n",arr_alumno[i].average);
      printf("\n");
   }
}

void Organize(Alumno arr_alumno[],long Size)
{
    for(int i=0;i<Size-1;i++)
    {
        for(int j=1;j<Size-i-1;j++)
        {
            if(strcmp(arr_alumno[j].lastName,arr_alumno[j+1].lastName)>0)
            {
                Swap(&arr_alumno[j],&arr_alumno[j+1]);
            }

        }
    }
}

void Swap(Alumno *A,Alumno *B)
{
    Alumno aux;
    aux=*A;
    *A=*B;
    *B=aux;
}






