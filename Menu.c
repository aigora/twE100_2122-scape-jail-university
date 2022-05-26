#include<stdio.h>
#include<time.h>
#include<stdlib.h>

typedef struct
{
    char nombre[20];
    char apellido1[20];
    char apellido2[20];
    int edad;
    char work;
}integrante;

void menu(int modo)
{
    char equipo[31];
    char a, b;
    int n, i=0;
    printf("\tBienvenidos al Scape Room University, aqui podran disfrutar de una aventura unica en la que deberan pasar todas las pruebas para salir de la universidad.\n");
    printf("\tAntes de empezar la prueba, deberan elegir el nombre del equipo (maximo treinta caracteres).\n");
    do
    {

        printf("\tIntroduzca el nombre del equipo.\n");
        scanf(" %30[^\n]", equipo);
        printf("\t¿Entonces el nombre del equipo sera %s?\n", equipo);
        printf("\tEscriba el numero y dele al intro:\n\t1)Si\n\t2)No\n");
        scanf(" %c", &a);
    }
    while(a != 49);
    system("cls");
//    do
//    {
        printf("\tDecirme cuantos integrantes sois.\n");
        scanf("%d", &n);
//        if()
//    }
//    while();
    integrante jugador[n];
    for (i=0; i<n; i++)
    {
        do
        {
            printf("\tNombre: \t");
            scanf(" %20[^\n]", jugador[i].nombre);
            printf("\n\tPrimer apellido: \t");
            scanf(" %20[^\n]", jugador[i].apellido1);
            printf("\n\tSegundo apellido: \t");
            scanf(" %20[^\n]", jugador[i].apellido2);
            do
            {
                printf("\n\tEdad: \t");
                scanf("%d", &jugador[i].edad);
                if((jugador[i].edad<1)&&(jugador[i].edad>100))
                {
                    printf("\tPor favor, escriba su edad en número.\n");
                }
            }
            while((jugador[i].edad<1)&&(jugador[i].edad>100));
            do
            {
                printf("\n\t¿Usted esta trabajando o esta estudiando? Marca el numero correspondiente:\n\t1)Estudiando\n\t2)Trabajando\n\t3)Ambas\n\t4)Ninguna de las anteriores.\n");
                scanf(" %c", &jugador[i].work);
                if((jugador[i].work != 49)&&(jugador[i].work != 50)&&(jugador[i].work != 51)&&(jugador[i].work != 52))
                {
                    printf("\tPor favor, escriba el valor numerico.\n");
                }
            }
            while((jugador[i].work != 49)&&(jugador[i].work != 50)&&(jugador[i].work != 51)&&(jugador[i].work != 52));

            printf("\t¿Entonces estos son sus datos?\n");
            printf("\tNombre: %s\n", jugador[i].nombre);
            printf("\tPrimer apellido: %s\n", jugador[i].apellido1);
            printf("\tSegundo apellido: %s\n", jugador[i].apellido2);
            printf("\tEdad: %d\n", jugador[i].edad);
            if(jugador[i].work==49)
            {
                printf("\tEstudiante.\n");
            }
            else if(jugador[i].work==50)
            {
                printf("\tTrabajador.\n");
            }
            else if(jugador[i].work==51)
            {
                printf("\tTrabajador y estudiante a la vez.\n");
            }
            else if(jugador[i].work==52)
            {
                printf("\tNi estudiante, ni trabajador.\n");
            }
            printf("\tMarque una de las respuestas:\n\t1)Si\n\t2)No\n");
            scanf(" %c", &b);
            if((b != 49)&&(b != 50))
            {
                    printf("\tIntroduzca el valor numerico.\n");
            }
            if(b != 49)
            {
                printf("\tIntroduzca de nuevo sus datos.\n");
            }
        }
        while(b != 49);
        system("cls");
    }
    i=0;
    FILE *pf;
    pf=fopen("Misdatos.txt", "w");
    fprintf(pf, "Nombre del equipo: %s\n", equipo);
    for(i=0; i<n; i++)
    {
        fprintf(pf, "Jugador %d:\nNombre: %s\nApellido 1: %s\nApellido 2: %s\nEdad: %d\nEst/Tra: %c\n", i+1, jugador[i].nombre, jugador[i].apellido1, jugador[i].apellido2, jugador[i].edad, jugador[i].work);
    }
    fclose(pf);
    
    system("cls");
    printf("\n");
}
