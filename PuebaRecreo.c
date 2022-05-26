#include <stdio.h>
void casillero(int t[5][5]);
void numeroscasillero(int t[5][5]);

int main()
{
    int tablero[5][5];
  char barcos[5][5];//solucion del tablero
    barcos[0][0]='x';
    barcos[0][1]='0';
    barcos[0][2]='0';
    barcos[0][3]='0';
    barcos[0][4]='0';
    barcos[1][0]='0';
    barcos[1][1]='0';
    barcos[1][2]='x';
    barcos[1][3]='0';
    barcos[1][4]='0';
    barcos[2][0]='0';
    barcos[2][1]='x';
    barcos[2][2]='0';
    barcos[2][3]='0';
    barcos[2][4]='x';
    barcos[3][0]='0';
    barcos[3][1]='x';
    barcos[3][2]='0';
    barcos[3][3]='0';
    barcos[3][4]='x';
    barcos[4][0]='0';
    barcos[4][1]='x';
    barcos[4][2]='0';
    barcos[4][3]='0';
    barcos[4][4]='0';
    char intro;
    int fila, columna, intentos, a, b, s, l;

    printf("'H U N D I R  L A  F L O T A'\n\n");
    printf(" Pulse intro para continuar.\n\n");
    scanf("%c",&intro);
    printf(" Durante esta prueba,\n debera averiguar en que casillas\n se encuntran los barcos.\n\n");
    printf(" Cada barco ocupa solamente una casilla, y hay un total de 7.\n\n\n ");
    printf("Puede escoger el numero de intentos por partida,\n cuantos menos intentos, mas grande sera el premio si gana.\n");
    printf(" Las posibilidades son :\n 20 intentos = 100 puntos.\n 15 intentos = 200 puntos.\n 10 intentos = 500 puntos.");

    do
    {
    printf(" Escoja el numero de intentos que desea: ");
    scanf("%i", &intentos);
    }
    while((intentos !=10 && intentos != 15 && intentos!= 20 ));

    numeroscasillero(tablero);
    casillero(tablero);

      switch (intentos)
            {
        case 10 :
              printf(" Tiene 10 intentos\n");
              int i;
              for(i=0; i<10; i++)
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
              printf("\n\nHa escogido la casilla %i,%i\n\n", fila, columna);
              }
              break;
        case 15 :
               printf(" Tiene 15 intentos\n");

              int j;
              for(j=0; j<15; j++)
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
            int p;
            for(p=0; p<20; p++)
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
            a=fila-1;
            b=columna-1;
            s=tablero[a][b];
            barcos[a][b]=l;


 }



void numeroscasillero(int t[5][5])
{
    printf(" 1   2   3   4   5\n");
    printf("--------------------\n");

    int x, y;
    char a= '0';
    for(x=0; x<5; x++)
    {
        for(y=0; y<5; y++)
        {
          t[x][y]=0;
        }
    }
}

void casillero(int t[5][5])
{


    int x, y;
    for(x=0; x<5; x++)
    {
        for(y=0; y<5; y++)
        {
                printf(" %i |",t[x][y]);
        }
        printf("\n--------------------\n");
    }
}
