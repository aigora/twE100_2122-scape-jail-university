#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void menu(int jugadores);
int pruebaFisica(int modo);
int pruebaMates(int modo);
int pruebaDibujo(int modo);
int mapa(char op);

int main()
{
    int p1, p2, p3, n, op, jugadores, modo, save=0, n1;
    char partida, random, seguridad;
    n=mapa(op);
//    Partida nueva o guardada.
    do
    {
        printf("\tSelecciona una de estas opciones:\n\t1)Partida guardada.\n\t2)Partida nueva.\n");
        printf("\tPulse en el numero.\n");
        scanf(" %c", &partida);
        if(partida==50)
        {
            //Si es una partida nueva para tendrás que meter los datos de los participantes.
            menu(jugadores, save);
            do
            {
                //Elección del modo de juego durante la partida, principalmente, es para que tengas mayor numero de intentos a la hora de hacer las pruebas.
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

   do
    {
        //Por si se prefiere hacer un juego en el que el orden de las pruebas sea aleatorio.
        printf("\t¿Quieres randomizar el juego, es decir, que salga aleatoriamente las pruebas?.\n");
        printf("\t1)Si\n\t2)No\n");
        scanf(" %c", &random);
        if(random == 49)
        {
            do
            {
                //Confirmacion, ya que este apartado es invariable durante la partida.
                printf("\t¿Estas seguro que quieres poner aleatorio?.\n");
                printf("\t1)Si\n\t2)No\n");
                scanf(" %c", &seguridad);
            }
            while((seguridad != 49)&&(seguridad != 50));
            if(seguridad == 49)
            {
                //Los aleatorios
                n1=((double)rand()/RAND_MAX)*(3-1)+1;
                switch(n1)
                {
                case 1:
                    {
                        p2=pruebaMates(modo, save);

                        if(p2==1)
                        {
                            printf("\tHas obtenido la llave de la prueba de mates.\n");
                        }
                        else
                        {
                            printf("\tHas fallado.\n");
                        }

                        p1=pruebaFisica(modo, save);

                        if(p1 == 1)
                        {
                            printf("\tHas obtenido la llave de la prueba de fisica.\n");
                        }
                        else
                        {
                            printf("\tHas fallado.\n");
                        }

                        p3=pruebaDibujo(modo, save);

                        if(p3==1)
                        {
                            printf("\tHas obtenido la llave de la prueba de dibujo.\n");
                        }
                        else
                        {
                            printf("\tHas fallado.\n");
                        }
                    }
                break;
                case 2:
                    {
                        p3=pruebaDibujo(modo, save);

                        if(p3==1)
                        {
                            printf("\tHas obtenido la llave de la prueba de dibujo.\n");
                        }
                        else
                        {
                            printf("\tHas fallado.\n");
                        }

                        p2=pruebaMates(modo, save);

                        if(p2==1)
                        {
                            printf("\tHas obtenido la llave de la prueba de mates.\n");
                        }
                        else
                        {
                            printf("\tHas fallado.\n");
                        }

                        p1=pruebaFisica(modo, save);

                        if(p1 == 1)
                        {
                            printf("\tHas obtenido la llave de la prueba de fisica.\n");
                        }
                        else
                        {
                            printf("\tHas fallado.\n");
                        }
                    }
                break;
                case 3:
                    {
                       p2=pruebaMates(modo, save);

                        if(p2==1)
                        {
                            printf("\tHas obtenido la llave de la prueba de mates.\n");
                        }
                        else
                        {
                            printf("\tHas fallado.\n");
                        }

                        p3=pruebaDibujo(modo, save);

                        if(p3==1)
                        {
                            printf("\tHas obtenido la llave de la prueba de dibujo.\n");
                        }
                        else
                        {
                            printf("\tHas fallado.\n");
                        }

                        p1=pruebaFisica(modo, save);

                        if(p1 == 1)
                        {
                            printf("\tHas obtenido la llave de la prueba de fisica.\n");
                        }
                        else
                        {
                            printf("\tHas fallado.\n");
                        }
                    }
                break;
                default:
                    printf("\tError de sistema.\n");
                break;
                }
            }
        }
        else if((seguridad == 50) || (random == 50))
        {
            //El normal.
            p1=pruebaFisica(modo, save);

            if(p1 == 1)
            {
                printf("\tHas obtenido la llave de la prueba de fisica.\n");
            }
            else
            {
                printf("\tHas fallado.\n");
            }

            p2=pruebaMates(modo, save);

            if(p2==1)
            {
                printf("\tHas obtenido la llave de la prueba de mates.\n");
            }
            else
            {
                printf("\tHas fallado.\n");
            }

            p3=pruebaDibujo(modo, save);

            if(p3==1)
            {
                printf("\tHas obtenido la llave de la prueba de dibujo.\n");
            }
            else
            {
                printf("\tHas fallado.\n");
            }
        }
    }
    while((random != 49)&&(random != 50));
    return 0;
}
