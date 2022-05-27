#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

int casillero(int fila, int columna, int A);
void numeroscasillero(int[5][5], int x, int y);

int pruebaRecreo(int modo)
{
    int n1, n2;
    srand(time(NULL));
    n1=((double)rand()/RAND_MAX)*(4-1)+1;
    n2=((double)rand()/RAND_MAX)*(4-1)+1;

    int pruebaRecreo;
    int barcos=7;
    int i, valor=0;
    int t[5][5]={{0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0}};;
    char intro;
    int fila, columna, intentos;

    printf("'H U N D I R  L A  F L O T A'\n\n");
    //printf(" Pulse intro para continuar.\n\n");
    //scanf(" %c",&intro);
    printf(" Durante esta prueba,\n debera averiguar en que casillas\n se encuntran los barcos.\n\n");
    printf(" Cada barco ocupa solamente una casilla, y hay un total de 7.\n\n\n ");
    printf("Tienes un numero de intentos por partida,\n cuantos menos intentos, mas grande sera el premio si gana.\n");

    if(modo == 1)
    {
        intentos=20;
    }
    else if(modo == 2)
    {
        intentos=15;
    }
    else if(modo == 3)
    {
        intentos=10;
    }


      switch (intentos)
            {
        case 10 :
              i=10;
              printf("\n Te quedan %d intentos\n",i);
              numeroscasillero(t, 5, 5);
              while(i!=0&&barcos!=0)
              {
                  do
                  {
                      do
                      {
                           printf("\tfila(del 1 al 5): ");
                           scanf("%i", &fila);
                      }
                      while ((fila!=1) && (fila!=2) && (fila!=3) && (fila!=4) && (fila!=5));
                      do
                      {
                          printf("\tcolumna(del 1 al 5): ");
                          scanf("%i", &columna);
                      }
                      while ((columna!=1) && (columna!=2) && (columna!=3) && (columna!=4) && (columna!=5));

                          printf("\n\nHa escogido la casilla %i,%i\n\n", fila, columna);
                          fila=fila-1;
                          columna=columna-1;
                    if(t[fila][columna]!=0)
                     printf("Ya has elegido esta casilla, intentalo de nuevo.\n\n");
                  }
                  while(t[fila][columna]!=0);

                      numeroscasillero(t, fila, columna);
                      valor=casillero(fila, columna, n2);
                      if(valor == 1)
                      {
                          printf("\tHas tumbado un  barco\n");
                          barcos=barcos-1;
                          printf("\tTe quedan %d barcos", barcos);
                      }
                      else
                      {
                          printf("\tAGUA = H2O.\n");
                      }
                      if (barcos==0)
                      {
                          printf("\nPRUEBA SEPARADA");
                          pruebaRecreo=1;
                      }
                i=i-1;
                if(i==0)
                    printf("Has perdido, viejo...  :%c\n",'(');
                else
                printf("\n\tTe quedan %d intentos\n\n",i);
                }
              break;
        case 15 :
              i=15;
              printf("\n Te quedan %d intentos\n",i);
              numeroscasillero(t, 5, 5);
              while(i!=0&&barcos!=0)
              {
                  do
                  {
                      do
                      {
                           printf("\tfila(del 1 al 5): ");
                           scanf("%i", &fila);
                      }
                      while ((fila!=1) && (fila!=2) && (fila!=3) && (fila!=4) && (fila!=5));
                      do
                      {
                          printf("\tcolumna(del 1 al 5): ");
                          scanf("%i", &columna);
                      }
                      while ((columna!=1) && (columna!=2) && (columna!=3) && (columna!=4) && (columna!=5));

                          printf("\n\nHa escogido la casilla %i,%i\n\n", fila, columna);
                          fila=fila-1;
                          columna=columna-1;
                    if(t[fila][columna]!=0)
                     printf("Ya has elegido esta casilla, intentalo de nuevo.\n\n");
                  }
                  while(t[fila][columna]!=0);

                      numeroscasillero(t, fila, columna);
                      valor=casillero(fila, columna,n2);
                      if(valor == 1)
                      {
                          printf("\tHas tumbado un  barco\n");
                          barcos=barcos-1;
                          printf("\tTe quedan %d barcos", barcos);
                      }
                      else
                      {
                          printf("\tAGUA = H2O.\n");
                      }
                      if (barcos==0)
                      {
                          printf("\nPRUEBA SEPARADA");
                          pruebaRecreo=1;
                      }
                i=i-1;
                if(i==0)
                    printf("Has perdido, viejo...  :%c\n",'(');
                else
                printf("\n\tTe quedan %d intentos\n\n",i);
                }
              break;
        case 20 :
              i=20;
              printf("\n Te quedan %d intentos\n",i);
              numeroscasillero(t, 5, 5);
              while(i!=0&&barcos!=0)
              {
                  do
                  {
                      do
                      {
                           printf("\tfila(del 1 al 5): ");
                           scanf("%i", &fila);
                      }
                      while ((fila!=1) && (fila!=2) && (fila!=3) && (fila!=4) && (fila!=5));
                      do
                      {
                          printf("\tcolumna(del 1 al 5): ");
                          scanf("%i", &columna);
                      }
                      while ((columna!=1) && (columna!=2) && (columna!=3) && (columna!=4) && (columna!=5));

                          printf("\n\nHa escogido la casilla %i,%i\n\n", fila, columna);
                          fila=fila-1;
                          columna=columna-1;
                    if(t[fila][columna]!=0)
                     printf("Ya has elegido esta casilla, intentalo de nuevo.\n\n");
                  }
                  while(t[fila][columna]!=0);

                      numeroscasillero(t, fila, columna);
                      valor=casillero(fila, columna,n2);
                      if(valor == 1)
                      {
                          printf("\tHas tumbado un  barco\n");
                          barcos=barcos-1;
                          printf("\tTe quedan %d barcos", barcos);
                      }
                      else
                      {
                          printf("\tAGUA = H2O.\n");
                      }
                      if (barcos==0)
                      {
                          printf("\nPRUEBA SEPARADA");
                          pruebaRecreo=1;
                      }
                i=i-1;
                if(i==0)
                    printf("Has perdido, viejo...  :%c\n",'(');
                else
                printf("\n\tTe quedan %d intentos\n\n",i);
                }
              break;
            }
    return pruebaRecreo;
 }



void numeroscasillero(int t[5][5], int x, int y)
{
    int xx,yy;
    printf("\t1 \t2 \t3 \t4 \t5\n");
    for(xx=0; xx<5; xx++)
    {
        printf("------------------------------------------\n");
        for(yy=0; yy<5; yy++)
        {
           if(t[xx][yy]==0)
           {
               if(xx==x&&yy==y)
               {
                    if(casillero(x,y,n2)==1)
                        {
                            t[xx][yy]= 'X';
                            printf("\t%c|",t[xx][yy]);
                        }
                    else
                        {
                            t[xx][yy]= '_';
                            printf("\t%c|",t[xx][yy]);
                        }
               }
               else
                   printf("\t%d|", t[xx][yy]);
           }
           else
               printf("\t%c|", t[xx][yy]);
        }
        printf("\n");
    }


}

int casillero(int fila, int columna,int A)
{
    int casillero;
    int tsol[5][5];
    switch (A)
    {
       case 1:
             tsol ={{8, 0, 0, 0, 0},
                    {0, 0, 8, 0, 0},
                    {0, 8, 0, 0, 8},
                    {0, 8, 0, 0, 8},
                    {0, 8, 0, 0, 0}};
        break;
       case 2:
            tsol[5][5]={
                        {0, 0, 0, 0, 0},
                        {8, 0, 0, 8, 0},
                        {0, 0, 0, 8, 0},
                        {0, 0, 0, 8, 0},
                        {8, 8, 0, 8, 0}};
        break;
       case 3:
           tsol[5][5]={
                        {0, 8, 0, 8, 8},
                        {0, 0, 8, 0, 0},
                        {0, 8, 8, 0, 0},
                        {0, 0, 0, 0, 0},
                        {0, 0, 8, 0, 0}};
        break;
    }

    if(tsol[fila][columna] == 8)
    {
        casillero=1;
    }
    else
    {
        casillero = 0;
    }

    return casillero;
}
