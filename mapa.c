#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int mapa(int op)
{
    printf("\tPara ir hacia arriba pulse 8.\n");
    printf("\tPara ir hacia abajo pulse 2.\n");
    printf("\tPara ir hacia la derecha pulse 6.\n");
    printf("\tPara ir hacia la izquierda pulse 4.\n");
    int i=0;
    int x, y, p;
    int mapas;
    p=0;
    x=5;
    y=5;

    while(((x>1)&&(x<11))&&((y>1)&&(y<11)))
    {
        char z[11][11]={"-----------",
                         "|         |",
                         "|         |",
                         "|         |",
                         "|         |",
                         "|    0    |",
                         "|         |",
                         "|         |",
                         "|         |",
                         "|         |",
                         "-----------",
                        };
        mapas=getch();
        switch(mapas)
        {
        case 4:
            {
                if((z[x-1][y] != '|')&&(z[x-1][y] != '-'))
                {
                    z[x][y]= ' ';
                    x--;
                    z[x][y]= '0';
                }
            }
        break;
        case 6:
            {
                if((z[x+1][y] != '|')&&(z[x+1][y] != '-'))
                {
                    z[x][y]= ' ';
                    x++;
                    z[x][y]= '0';
                }
            }
        break;
        case 2:
            {
                if((z[x][y-1] != '|')&&(z[x-1][y-1] != '-'))
                {
                    z[x][y]= ' ';
                    y--;
                    z[x][y]= '0';
                }
            }
        break;
        case 8:
            {
                if((z[x][y+1] != '|')&&(z[x-1][y+1] != '-'))
                {
                    z[x][y]= ' ';
                    y++;
                    z[x][y]= '0';
                }
            }
        break;
        default:
            {
                printf("\tEse valor no es un numero de los que se da para elegir.\n");
            }
        break;
        }
        if((x==3)&&(y==2))
        {
            printf("\tHas llegado a la prueba de f�sica.\n");
            p=1;
        }
        if((x==8)&&(y==8))
        {
            printf("\tHas llegado a la prueba de mates.\n");
            p=2;
        }
        system("cls");
        for(i=0; i<1000; i++)
        {
            puts(z[i]);
        }
    system("cls");
    }
    return p;
}
