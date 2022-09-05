#include <stdio.h>

int main()
{
    int Hora,min;
    printf ("Favor de introducir la hora: ");
    scanf ("%d",&Hora);

    printf("Favor de introducir los minutos: ");
    scanf("%d", &min);

    if (Hora>0 && Hora<12 && min<=59)
    {
        printf ("¡Buenos días!");
    }
    else if (Hora>=12 && Hora<18 && min<=59)
    {
        printf ("¡Buenas tardes!");
    }

    else if(Hora>=18 && Hora<24 && min<=59)
    {
        printf ("¡Buenas Noches!");
    }

    if (Hora>23 || min>59)
    {
        printf ("¡La hora no es válida!");
    }
}
