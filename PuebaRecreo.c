#include <stdio.h>

int casillero(int fila, int columna);
void numeroscasillero(int x, int y);

int pruebaRecreo(int modo)
{
    int pruebaRecreo;
    int i=0, valor=0;
    int tablero[5][5];
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

    numeroscasillero(0, 1);
    casillero(1, 1);

      switch (intentos)
            {
        case 10 :
              printf(" Tiene 10 intentos\n");

              for(i=0; i<10; i++)
              {
                  do
                  {
                       printf("\tEscriba un numero de fila(del 1 al 5): ");
                       scanf("%i", &fila);
                  }
                  while ((fila!=1) && (fila!=2) && (fila!=3) && (fila!=4) && (fila!=5));
                  do
                  {
                      printf(" Escriba un numero de columna(del 1 al 5): ");
                      scanf("%i",&columna);
                  }
                  while ((columna!=1) && (columna!=2) && (columna!=3) && (columna!=4) && (columna!=5));
                  //printf("\n\nHa escogido la casilla %i,%i\n\n", fila, columna);
                  fila=fila-1;
                  columna=columna-1;
                  printf("fila = %d\n columna = %d\n", fila, columna);
                  casillero(fila, columna);
                  if(valor == 1)
                  {
                      printf("\tHas tumbado un  barco.\n");
                  }
                  else if(valor == 0)
                  {
                      printf("\tAGUA = H2O.\n");
                  }
                }
              break;
        case 15 :
               printf(" Tiene 15 intentos\n");


              for(i=0; i<15; i++)
              {
               do
               {
                printf(" Escriba un numero de fila(del 1 al 5): ");
                scanf("%i",&fila);
               }
               while (fila!=1 && fila!=2 && fila!=3 && fila!=4 && fila!=5);
               do
               {
               printf(" Escriba un numero de columna(del 1 al 5): ");
               scanf("%i",&columna);
               }
               while (columna!=1 && columna!=2 && columna!=3 && columna!=4 && columna!=5);
               printf("\n Ha escogido la casilla %i,%i\n\n", fila, columna);
              }
              break;
        case 20 :
           printf(" Tiene 20 intentos\n");

            for(i=0; i<20; i++)
            {
             do
              {
               printf(" Escriba un numero de fila(del 1 al 5): ");
               scanf("%i",&fila);
              }
              while (fila!=1 && fila!=2 && fila!=3 && fila!=4 && fila!=5);
             do
             {
             printf(" Escriba un numero de columna(del 1 al 5): ");
             scanf("%i",&columna);
             }
             while (columna!=1 && columna!=2 && columna!=3 && columna!=4 && columna!=5);
             printf("\n Ha escogido la casilla %i,%i\n", fila, columna);
            }
           break;
            }
            pruebaRecreo=1;
    return pruebaRecreo;
 }



void numeroscasillero(int x, int y)
{
    int a=0, b=0;
    int t[5][5];
    for(a=0; a<5; a++)
    {
        for(b=0; b<5; b++)
        {
          t[a][b]=0;
        }
    }
}

int casillero(int fila, int columna)
{
    int x, y;
    int t[5][5];
    int tsol[5][5];
    t[fila][columna]=8;
    tsol[0][0]=8;
    tsol[0][1]=0;
    tsol[0][2]=0;
    tsol[0][3]=0;
    tsol[0][4]=0;
    tsol[1][0]=0;
    tsol[1][1]=0;
    tsol[1][2]=8;
    tsol[1][3]=0;
    tsol[1][4]=0;
    tsol[2][0]=0;
    tsol[2][1]=8;
    tsol[2][2]=0;
    tsol[2][3]=0;
    tsol[2][4]=8;
    tsol[3][0]=0;
    tsol[3][1]=8;
    tsol[3][2]=0;
    tsol[3][3]=0;
    tsol[3][4]=8;
    tsol[4][0]=0;
    tsol[4][1]=8;
    tsol[4][2]=0;
    tsol[4][3]=0;
    tsol[4][4]=0;

    if(tsol[fila][columna] != 8)
    {
        t[fila][columna]=0;
    }


        printf(" 1   2   3   4   5\n");
        printf("--------------------\n");
        printf(" %d | %d | %d | %d | %d\n", t[0][0], t[0][1], t[0][2], t[0][3], t[0][4]);
        printf("--------------------\n");
        printf(" %d | %d | %d | %d | %d\n", t[1][0], t[1][1], t[1][2], t[1][3], t[1][4]);
        printf("--------------------\n");
        printf(" %d | %d | %d | %d | %d\n", t[2][0], t[2][1], t[2][2], t[2][3], t[2][4]);
        printf("--------------------\n");
        printf(" %d | %d | %d | %d | %d\n", t[3][0], t[3][1], t[3][2], t[3][3], t[3][4]);
        printf("--------------------\n");
        printf(" %d | %d | %d | %d | %d\n", t[4][0], t[4][1], t[4][2], t[4][3], t[4][4]);
        printf("--------------------\n");
        return casillero;
}
