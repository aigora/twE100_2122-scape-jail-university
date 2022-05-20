#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void menu(int jugadores);
int pruebaFisica(int modo);
int pruebaMates(int modo);
int pruebaDibujo(int modo);
int mapa(char op);

int main()
{
    int p1, p2, p3, n, op, jugadores, modo;
    char partida;
    n=mapa(op);
////    Partida nueva o guardada.
    do
    {
        printf("\tSelecciona una de estas opciones:\n\t1)Partida guardada.\n\t2)Partida nueva.\n");
        printf("\tPulse en el numero.\n");
        scanf(" %c", &partida);
        if(partida==50)
        {
            menu(jugadores);
            do
            {
                printf("\tAhora elija el modo de juego, tiene tres modos de dificultad:\n");
                printf("\t1)Facil.\n\t2)Medio.\n\t3)Dificil.\n");
                printf("\tLe recuerdo que con cada modalidad tendra un tipo de pruebas, adapatadas al modo de partida que elija.\n");
                scanf("%d", &modo);
                if((modo<1)||(modo>4))
                {
                    printf("\tEscriba 1, 2 o 3\n");
                }
            }
            while((modo<1)||(modo>4));
            system("cls");
        }
        else if(partida==49)
        {
                printf("\tSeleccione la partida guardada.\n");

        }
    }
    while((partida != 49)&&(partida != 50));

//    modor=atoi(modo)-48;
//    printf("modo=%d", modor);

    p1=pruebaFisica(modo);

    if(p1 == 1)
    {
        printf("\tHas obtenido la llave de la prueba de física.\n");
    }
    else
    {
        printf("\tHas fallado.\n");
    }

    p2=pruebaMates(modo);

    if(p2==1)
    {
        printf("\tHas obtenido la llave de la prueba de mates.\n");
    }
    else
    {
        printf("\tHas fallado.\n");
    }

    p3=pruebaDibujo(modo);
    return 0;
}
