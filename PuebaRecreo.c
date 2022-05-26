#include <stdio.h>

int casillero(int fila, int columna);
void numeroscasillero(int[5][5], int x, int y);

int pruebaRecreo(int modo)
{
    int pruebaRecreo;
    int barcos=7;
    int i=0, valor=0;
    int t[5][5];
    char intro;
    int fila, columna, intentos, a, b, s, l;

    printf("'H U N D I R  L A  F L O T A'\n\n");
//    printf(" Pulse intro para continuar.\n\n");
//    scanf(" %c",&intro);
    printf(" Durante esta prueba,\n debera averiguar en que casillas\n se encuntran los barcos.\n\n");
    printf(" Cada barco ocupa solamente una casilla, y hay un total de 7.\n\n\n ");
    printf("Tienes un numero de intentos por partida,\n cuantos menos intentos, mas grande sera el premio si gana.\n");

    if(modo == 1)
    {
        intentos=20;
//        printf()
    }
    else if(modo == 2)
    {
        intentos=15;
    }
    else if(modo == 3)
    {
        intentos=10;
    }

//    numeroscasillero(t, 5, 5);

      switch (intentos)
            {
        case 10 :
              printf(" Tiene 10 intentos\n");
              numeroscasillero(t, 5, 5);
              while(i!=10&&barcos!=0)
              {
                  int i=1;
                  do
                  {
                       printf("\tfila(del 1 al 5): ");
                       scanf("%i", &fila);
                  }
                  while ((fila!=1) && (fila!=2) && (fila!=3) && (fila!=4) && (fila!=5)&&(fila!=0));
                  do
                  {
                      printf("\tcolumna(del 1 al 5): ");
                      scanf("%i", &columna);
                  }
                  while ((columna!=1) && (columna!=2) && (columna!=3) && (columna!=4) && (columna!=5)&&(columna!=0));
                  //printf("\n\nHa escogido la casilla %i,%i\n\n", fila, columna);
//                  if((fila != 0)&&(columna != 0))
//                  {
                      fila=fila-1;
                      columna=columna-1;

                      numeroscasillero(t, fila, columna);
                      valor=casillero(fila, columna);
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
                      }
                  //}
//                  else
//                  {
//                      printf("Prueba terminada");
                      if (barcos==0)
                      {
                          pruebaRecreo=1;
                      }
                 // }

                i=i+1;
                }
              break;
        case 15 :
               printf(" Tiene 15 intentos\n");
               numeroscasillero(t, 5, 5);
             while(i!=15&&barcos!=0)
            {


               for(i=0; i<15; i++)
              {
               do
               {
                printf("\tfila(del 1 al 5): ");
                scanf("%i",&fila);
               }
               while (fila!=1 && fila!=2 && fila!=3 && fila!=4 && fila!=5);
               do
               {
               printf("\tcolumna(del 1 al 5): ");
               scanf("%i",&columna);
               }
               while (columna!=1 && columna!=2 && columna!=3 && columna!=4 && columna!=5);
               printf("\ncasilla %i,%i\n\n", fila, columna);
               fila=fila-1;
                  columna=columna-1;

                  numeroscasillero(t, fila, columna);
                  valor=casillero(fila, columna);
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
                  }
              }
            }
              break;
        case 20 :
           printf(" Tiene 20 intentos\n");
             numeroscasillero(t, 5, 5);
            while(i!=20&&barcos!=0)
            {for(i=0; i<20; i++)
            {
             do
              {
               printf("\tfila(del 1 al 5): ");
               scanf("%i",&fila);
              }
              while (fila!=1 && fila!=2 && fila!=3 && fila!=4 && fila!=5);
             do
             {
             printf("\tcolumna(del 1 al 5): ");
             scanf("%i",&columna);
             }
             while (columna!=1 && columna!=2 && columna!=3 && columna!=4 && columna!=5);
             printf("\ncasilla %i,%i\n", fila, columna);
             fila=fila-1;
                  columna=columna-1;

                  numeroscasillero(t, fila, columna);
                  valor=casillero(fila, columna);
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
                  }
            }
            }
           break;
            }
//            pruebaRecreo=1;
    return pruebaRecreo;
 }



void numeroscasillero(int t[5][5], int x, int y)
{
    printf("\t1 \t2 \t3 \t4 \t5\n");
    for(x=0; x<5; x++)
    {
        printf("------------------------------------------\n");
        for(y=0; y<5; y++)
        {
           t[x][y]=0;
           printf("\t%d|", t[x][y]);
        }
        printf("\n");
    }
}

int casillero(int fila, int columna)
{
    int casillero;
    int t [5][5];
    int tsol[5][5]={{8, 0, 0, 0, 0},
                    {0, 0, 8, 0, 0},
                    {0, 8, 0, 0, 8},
                    {0, 8, 0, 0, 8},
                    {0, 8, 0, 0, 0}};

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
