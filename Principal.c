#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void menu(int modo);
int pruebaFisica(int modo);
int pruebaMates(int modo);
int pruebaDibujo(int modo);
int pruebaBiologia(int modo);
int pruebaRecreo(int modo);

int main()
{
    int p1, p2, p3, p4, p5, p6, modo, save=0, n1, n, op;
    char partida, random, seguridad, resp;
    FILE *pf;
                p1=0;
                p2=0;
                p3=0;
                p4=0;
                p5=0;
                p6=0;
                do
                {
                    printf("\tElija el modo de juego, tiene tres modos de dificultad:\n");
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
            menu(modo);

    do
    {
        printf("\t¿Quieres randomizar el juego, es decir, que salga aleatoriamente las pruebas?.\n");
        printf("\t1)Si\n\t2)No\n");
        scanf(" %c", &random);
        if(random == 49)
        {
            do
            {
                printf("\t¿Estas seguro que quieres poner aleatorio?.\n");
                printf("\t1)Si\n\t2)No\n");
                scanf(" %c", &seguridad);
            }
            while((seguridad != 49)&&(seguridad != 50));
            if(seguridad == 49)
            {
                n1=((double)rand()/RAND_MAX)*(4-1)+1;
                switch(n1)
                {
                case 1:
                    {
                        if(p2 == 0)
                        {
                            p2=pruebaMates(modo);

                            if(p2==1)
                            {
                                printf("\tHas obtenido la llave de la prueba de mates.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p2=pruebaMates(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p2 == 0));
                              }
                          }
                        if(p4 == 0)
                        {
                            p4=pruebaBiologia(modo);

                            if(p4==1)
                            {
                                printf("\tHas obtenido la llave de la prueba de biologia.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p4=pruebaBiologia(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p4 == 0));
                              }
                          }

                            if(p5 == 0)
                        {
                            p5=pruebaRecreo(modo);

                            if(p5==1)
                            {
                                printf("\tHas obtenido la llave de la prueba de recreo.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p5=pruebaRecreo(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p5 == 0));
                            }
                        }

                        if(p1 == 0)
                        {
                            p1=pruebaFisica(modo);

                            if(p1 == 1)
                            {
                                printf("\tHas obtenido la llave de la prueba de fisica.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p1=pruebaFisica(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p1 == 0));
                            }
                        }

                        if(p3 == 0)
                        {
                            p3=pruebaDibujo(modo);

                            if(p3==1)
                            {
                                printf("\tHas obtenido la llave de la prueba de dibujo.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p3=pruebaDibujo(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p3 == 0));
                            }
                        }
                    }
                break;
                case 2:
                    {
                       if(p3 == 0)
                        {
                            p3=pruebaDibujo(modo);

                            if(p3==1)
                            {
                                printf("\tHas obtenido la llave de la prueba de dibujo.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p3=pruebaDibujo(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p3 == 0));
                            }
                        }

                       if(p5 == 0)
                        {
                            p5=pruebaRecreo(modo);

                            if(p5==1)
                            {
                                printf("\tHas obtenido la llave de la prueba de recreo.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p5=pruebaRecreo(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p5 == 0));
                            }
                        }


                        if(p2 == 0)
                        {
                            p2=pruebaMates(modo);

                            if(p2==1)
                            {
                                printf("\tHas obtenido la llave de la prueba de mates.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p2=pruebaMates(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p2 == 0));
                              }
                          }

                        if(p1 == 0)
                        {
                            p1=pruebaFisica(modo);

                            if(p1 == 1)
                            {
                                printf("\tHas obtenido la llave de la prueba de fisica.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p1=pruebaFisica(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p1 == 0));
                            }
                        }

                        if(p4 == 0)
                        {
                            p4=pruebaBiologia(modo);

                            if(p4==1)
                            {
                                printf("\tHas obtenido la llave de la prueba de biologia.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p4=pruebaBiologia(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p4 == 0));
                              }
                          }
                    }
                break;
                case 3:
                    {
                        if(p4 == 0)
                        {
                            p4=pruebaBiologia(modo);

                            if(p4==1)
                            {
                                printf("\tHas obtenido la llave de la prueba de biologia.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p4=pruebaBiologia(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p4 == 0));
                              }
                          }

                       if(p2 == 0)
                        {
                            p2=pruebaMates(modo);

                            if(p2==1)
                            {
                                printf("\tHas obtenido la llave de la prueba de mates.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p2=pruebaMates(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p2 == 0));
                              }
                          }

                        if(p3 == 0)
                        {
                            p3=pruebaDibujo(modo);

                            if(p3==1)
                            {
                                printf("\tHas obtenido la llave de la prueba de dibujo.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p3=pruebaDibujo(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p3 == 0));
                            }
                        }

                    if(p5 == 0)
                        {
                            p5=pruebaRecreo(modo);

                            if(p5==1)
                            {
                                printf("\tHas obtenido la llave de la prueba de recreo.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p5=pruebaRecreo(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p5 == 0));
                            }
                        }


                        if(p1 == 0)
                        {
                            p1=pruebaFisica(modo);

                            if(p1 == 1)
                            {
                                printf("\tHas obtenido la llave de la prueba de fisica.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p1=pruebaFisica(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p1 == 0));
                            }
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
            if(p1 == 0)
            {
                p1=pruebaFisica(modo);

                if(p1 == 1)
                {
                    printf("\tHas obtenido la llave de la prueba de fisica.\n");
                }
                else
                {
                    do
                    {
                        printf("\tHas fallado.\n");
                        printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                        scanf(" %c", &resp);
                        if((resp == 'S')||(resp == 's'))
                        {
                            p1=pruebaFisica(modo);
                        }
                    }
                    while(((resp == 'S')||(resp == 's'))&&(p1 == 0));
                }
            }

            if(p2 == 0)
            {
                p2=pruebaMates(modo);

                if(p2==1)
                {
                    printf("\tHas obtenido la llave de la prueba de mates.\n");
                }
                else
                {
                    do
                    {
                        printf("\tHas fallado.\n");
                        printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                        scanf(" %c", &resp);
                        if((resp == 'S')||(resp == 's'))
                        {
                            p2=pruebaMates(modo);
                        }
                    }
                    while(((resp == 'S')||(resp == 's'))&&(p2 == 0));
                  }
              }

            if(p3 == 0)
            {
                p3=pruebaDibujo(modo);

                if(p3==1)
                {
                    printf("\tHas obtenido la llave de la prueba de dibujo.\n");
                }
                else
                {
                    do
                    {
                        printf("\tHas fallado.\n");
                        printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                        scanf(" %c", &resp);
                        if((resp == 'S')||(resp == 's'))
                        {
                            p3=pruebaDibujo(modo);
                        }
                    }
                    while(((resp == 'S')||(resp == 's'))&&(p3 == 0));
                }
            }

                        if(p4 == 0)
                        {
                            p4=pruebaBiologia(modo);

                            if(p4==1)
                            {
                                printf("\tHas obtenido la llave de la prueba de biologia.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p4=pruebaBiologia(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p4 == 0));
                              }
                          }
                    if(p5 == 0)
                        {
                            p5=pruebaRecreo(modo);

                            if(p5==1)
                            {
                                printf("\tHas obtenido la llave de la prueba de recreo.\n");
                            }
                            else
                            {
                                do
                                {
                                    printf("\tHas fallado.\n");
                                    printf("\t¿Quieres volver a intentarlo?(S/N)\n");
                                    scanf(" %c", &resp);
                                    if((resp == 'S')||(resp == 's'))
                                    {
                                        p5=pruebaRecreo(modo);
                                    }
                                }
                                while(((resp == 'S')||(resp == 's'))&&(p5 == 0));
                            }
                        }

        }
    }
    while((random != 49)&&(random != 50));

    if((p1 == 1)&&(p2 == 1)&&(p3 == 1)&&(p4 == 1)&&(p5 == 1)&&(p6 == 1))
    {
        printf("\tFelicidades has superado el scape room.\n");
    }

    return 0;
}
