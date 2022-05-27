#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

void imprimir_matriz(int sudoku [9][9], int fila, int columna, int V);
int zeros(int sudoku[9][9], int fila, int columna, int V);

int pruebaMates(int modo)
{
    int pruebaMates;
    FILE *pf;

   //Declaracion del sudoku.
    int sudoku [9] [9];
    int sudokusol [9] [9];

    //Declaracion de variables.
    int fila, columna, a, b, fallo, i=0, j=0, acierto, V;
    int k=1;

    //Instrucciones para el usuario.
    printf("\tBienvenido a la prueba de matematicas, en esta prueba deberas resolver un sudoku.\n");
    printf("\tPara ello deberas introducir primero el valor de la coordenada, donde quieras poner el valor.\n");
    printf("\tSiendo esto de esta forma, el eje vertical, sera 'y' y es el primer valor que debes introducir, la primera posicion sera 1, mientras que la ultima sera la 9, de arriba a abajo.\n");
    printf("\tMientras que el eje horizontal, ira en el mismo sentido, de izquierda a derecha y de 1 a 9.\n");
    printf("\tLos ceros son los valores que debes cambiar para completar el sudoku.\n");

    //Depende del modo de dificultad.
    if (modo==1)
    {
        printf("\tTienes diez intentos.\n");
    }
    else if(modo==2)
    {
        printf("\tTienes cinco intentos.\n");
    }
    else if(modo==3)
    {
        printf("\tTienes tres intentos.\n");
    }
    //Elección del sudoku.

    V=(int)(((double)rand()/RAND_MAX)*(3-1)+1);
    switch(V)
        {
        case 1:
            {
                //Son los valores que ya tiene el sudoku cuando se lo mostramos al usuario.
                sudoku[0][0]=7;
                sudoku[0][1]=5;
                sudoku[0][5]=4;
                sudoku[0][7]=9;
                sudoku[0][8]=2;
                sudoku[1][0]=6;
                sudoku[1][4]=2;
                sudoku[1][6]=3;
                sudoku[2][1]=2;
                sudoku[2][6]=5;
                sudoku[2][8]=8;
                sudoku[3][0]=1;
                sudoku[3][1]=3;
                sudoku[3][4]=7;
                sudoku[3][6]=8;
                sudoku[4][0]=2;
                sudoku[4][3]=8;
                sudoku[4][4]=1;
                sudoku[4][5]=3;
                sudoku[5][1]=6;
                sudoku[5][4]=4;
                sudoku[5][6]=7;
                sudoku[5][8]=1;
                sudoku[6][2]=7;
                sudoku[6][4]=5;
                sudoku[6][7]=6;
                sudoku[7][0]=5;
                sudoku[7][5]=1;
                sudoku[7][8]=3;
                sudoku[8][1]=1;
                sudoku[8][2]=2;
                sudoku[8][4]=8;
                sudoku[8][5]=6;
                sudoku[8][6]=9;
                sudoku[8][7]=7;

                //Sudoku solución
//                {
//                        {7, 5, 8, 1, 3, 4, 6, 9, 2},
//                        {6, 9, 1, 5, 2, 8, 3, 4, 7},
//                        {4, 2, 3, 9, 6, 7, 5, 1, 3},
//                        {1, 3, 4, 6, 7, 5, 8, 2, 9},
//                        {2, 7, 9, 8, 1, 3, 4, 5, 6},
//                        {8, 6, 5, 2, 4, 9, 7, 3, 1},
//                        {9, 8, 7, 3, 5, 2, 1, 6, 4},
//                        {5, 4, 6, 7, 9, 1, 2, 8, 3},
//                        {3, 1, 2, 4, 8, 6, 9, 7, 5}
//                    };
                FILE *pfmates1 = fopen("Mates1.txt","r");
                if(pfmates1==NULL)
                {
                    printf("\tError al abrir el fichero.\n");
                }
                else
                {
                    while(fscanf(pfmates1, "%d ", &sudokusol[i][j])!= EOF)
                    {
                        j++;
                        if(j==9)
                        {
                            i++;
                            j=0;
                        }

                    }
                }
                fclose(pfmates1);
            }
        break;
        case 2:
            {

                //Son los valores que ya tiene el sudoku cuando se lo mostramos al usuario.
                sudoku[0][1]=1;
                sudoku[0][2]=9;
                sudoku[0][4]=3;
                sudoku[0][7]=6;
                sudoku[1][2]=7;
                sudoku[1][3]=2;
                sudoku[1][5]=9;
                sudoku[1][6]=1;
                sudoku[2][2]=3;
                sudoku[2][3]=7;
                sudoku[2][5]=4;
                sudoku[2][6]=2;
                sudoku[2][8]=9;
                sudoku[3][2]=4;
                sudoku[3][8]=6;
                sudoku[4][2]=6;
                sudoku[4][4]=7;
                sudoku[7][5]=8;
                sudoku[0][5]=8;
                sudoku[6][1]=9;
                sudoku[6][2]=8;
                sudoku[6][3]=1;
                sudoku[6][7]=4;
                sudoku[6][8]=2;
                sudoku[7][6]=9;
                sudoku[7][7]=8;
                sudoku[7][8]=1;
                sudoku[8][2]=2;
                sudoku[8][5]=3;
                sudoku[8][6]=6;
                sudoku[8][8]=5;
                //Sudoku solución

//                {
//                    {2, 1, 9, 8, 3, 5, 7, 6, 4},
//                    {4, 5, 7, 2, 6, 9, 1, 3, 8},
//                    {6, 8, 3, 7, 1, 4, 2, 5, 9},
//                    {5, 7, 4, 3, 9, 1, 8, 2, 6},
//                    {9, 2, 6, 5, 7, 8, 4, 1, 3},
//                    {8, 3, 1, 6, 4, 2, 5, 9, 7},
//                    {7, 9, 8, 1, 5, 6, 3, 4, 2},
//                    {3, 6, 5, 4, 2, 7, 9, 8, 1},
//                    {1, 4, 2, 9, 8, 3, 6, 7, 8},
//                };

                FILE *pfmates2 = fopen("Mates2.txt","r");
                if(pfmates2==NULL)
                {
                    printf("\tError al abrir el fichero.\n");
                }
                else
                {
                    while(fscanf(pfmates2, "%d ", &sudokusol[i][j])!= EOF)
                    {
                        j++;
                        if(j==9)
                        {
                            i++;
                            j=0;
                        }
                    }
                }
                fclose(pfmates2);
            }
        break;
        case 3:
            {
                sudoku[0][5]=8;
                sudoku[0][7]=2;
                sudoku[1][1]=9;
                sudoku[1][2]=4;
                sudoku[1][3]=7;
                sudoku[1][6]=6;
                sudoku[1][7]=3;
                sudoku[2][1]=2;
                sudoku[2][3]=9;
                sudoku[2][5]=5;
                sudoku[2][6]=7;
                sudoku[2][7]=8;
                sudoku[3][2]=5;
                sudoku[3][5]=6;
                sudoku[3][7]=1;
                sudoku[4][0]=7;
                sudoku[4][3]=3;
                sudoku[4][7]=9;
                sudoku[5][2]=2;
                sudoku[5][3]=5;
                sudoku[5][8]=6;
                sudoku[6][0]=2;
                sudoku[6][2]=6;
                sudoku[6][4]=5;
                sudoku[6][6]=9;
                sudoku[7][0]=4;
                sudoku[7][1]=8;
                sudoku[7][4]=9;
                sudoku[7][8]=7;
                sudoku[8][4]=2;
                sudoku[8][8]=8;

                //Sudoku solución
//                {
//                    {6, 5, 7, 4, 3, 8, 1, 2, 9},
//                    {8, 9, 4, 7, 1, 2, 6, 3, 5},
//                    {1, 2, 3, 9, 6, 5, 7, 8, 4},
//                    {9, 4, 5, 2, 7, 6, 8, 1, 3},
//                    {7, 6, 8, 3, 4, 1, 5, 9, 2},
//                    {3, 1, 2, 5, 8, 9, 4, 7, 6},
//                    {2, 3, 6, 8, 5, 7, 9, 4, 1},
//                    {4, 8, 1, 6, 9, 3, 2, 5, 7},
//                    {5, 7, 9, 1, 2, 4, 3, 6, 8},
//                };
                FILE *pfmates3 = fopen("Mates3.txt","r");
                if(pfmates3==NULL)
                {
                    printf("\tError al abrir el fichero.\n");
                }
                else
                {
                    while(fscanf(pfmates3, "%d ", &sudokusol[i][j])!= EOF)
                    {
                        j++;
                        if(j==9)
                        {
                            i++;
                            j=0;
                        }
                    }
                }
                fclose(pfmates3);

            }
        break;
        default:
            {
                printf("\tError del sistema.\n");
            }
        break;
        }

        V=zeros(sudoku, 9, 9, V);


        //Inicializamos las variables y le enseñamos el sudoku.
        acierto=0;
        fila=0;
        columna=0;

        //Hacemos que el usuario nos de todos los datos necesarios para completar el sudoku
        //Comprobamos los valores que nos da con los valores que tenemos guardados en la matriz solución.
        //Pararemos el bucle cuando falle 3 veces o cuando nos introduzca un cero.
        if(modo==1)
        {
            fallo=0;
            do
            {
                imprimir_matriz(sudoku, 9, 9, V);
                printf("\tDame el valor de la fila primero y despues de la columna, donde quieras introducir el valor.\n");
                printf("\tPara finalizar programa pulse 0.\n");
                printf("\tValor de fila:\n");
                scanf("%d", &a);
                printf("\tValor de columna:\n");
                scanf("%d", &b);
                fila=a-1;
                columna=b-1;
                printf("\tAhora deme el valor que desee introducir.\n");
                scanf("%d", &i);
                system("cls");
                if(i != 0)
                {
                    sudoku[fila][columna]=i;
                    j=sudokusol[fila][columna];
                    if(i!=j)
                    {
                        fallo=fallo+1;
                        printf("\tHas fallado, te queda un intento menos.\n");
                        if(fallo==10)
                        {
                            printf("\tHas perdido.\n");
                            sudoku[fila][columna]=0;
                        }
                    }
                    else
                    {
                        printf("\tNumero Correcto.\n");
                    }
                }
                else if(i == 0)
                {
                    printf("Has salido de la prueba.\n");
                    k=0;
                }
            }
            while(k != 0);
        }
        else if(modo==2)
        {
            fallo=0;
            do
            {

                imprimir_matriz(sudoku, 9, 9, V);
                printf("\tDame el valor de la fila primero y despues de la columna, donde quieras introducir el valor.\n");
                printf("\tPara finalizar programa pulse 0.\n");
                printf("\tValor de fila:\n");
                scanf("%d", &a);
                printf("\tValor de columna:\n");
                scanf("%d", &b);
                fila=a-1;
                columna=b-1;
                printf("\tAhora deme el valor que desee introducir.\n");
                scanf("%d", &i);
                system("cls");
                if(i != 0)
                {
                    sudoku[fila][columna]=i;
                    j=sudokusol[fila][columna];
                    if(i!=j)
                    {
                        fallo=fallo+1;
                        printf("\tHas fallado, te queda un intento menos.\n");
                        if(fallo==5)
                        {
                            printf("\tHas perdido.\n");
                            sudoku[fila][columna]=0;
                        }
                    }
                    else
                    {
                        printf("\tNumero Correcto.\n");
                    }
                }
                else if(i == 0)
                {
                    printf("Has salido de la prueba.\n");
                    k=0;
                }
            }
            while((k!=0));
        }
        else if (modo==3)
        {
            fallo=0;
            do
            {
                imprimir_matriz(sudoku, 9, 9, V);
                printf("\tDame el valor de la fila primero y despues de la columna, donde quieras introducir el valor.\n");
                printf("\tPara finalizar programa pulse 0.\n");
                printf("\tValor de fila:\n");
                scanf("%d", &a);
                printf("\tValor de columna:\n");
                scanf("%d", &b);
                fila=a-1;
                columna=b-1;
                printf("\tAhora deme el valor que desee introducir.\n");
                scanf("%d", &i);
                system("cls");
                if(i != 0)
                {
                    sudoku[fila][columna]=i;
                    j=sudokusol[fila][columna];
                    if(i!=j)
                    {
                        fallo=fallo+1;
                        printf("\tHas fallado, te queda un intento menos.\n");
                        if(fallo==3)
                        {
                            printf("\tHas perdido.\n");
                            sudoku[fila][columna]=0;
                        }
                    }
                    else
                    {
                        printf("\tNumero Correcto.\n");
                    }
                }
                else if(i == 0)
                {
                    printf("Has salido de la prueba.\n");
                    k=0;
                }
            }
            while((k!=0));
        }
        //Comprobamos el sudoku
        i=0;
        j=0;
        for(i=0; i<9; i++)
        {
            for(j=0; j<9; j++)
            {
                if(sudoku[i][j]==sudokusol[i][j])
                {
                    acierto++;
                }
            }
        }
       switch(V)
        {
        case 1:
            {
                if(acierto == 46)
                {
                    printf("\tFelicidades has pasado la prueba.\n");
                    pruebaMates=1;
                }
                else
                {
                    pruebaMates=0;
                }
            }
        break;
        case 2:
            {
                if(acierto == 50)
                {
                    printf("\tFelicidades has pasado la prueba.\n");
                    pruebaMates=1;
                }
                else
                {
                    pruebaMates=0;
                }
            }
        break;
        case 3:
            {
                if(acierto == 44)
                {
                    printf("\tFelicidades has pasado la prueba.\n");
                    pruebaMates=1;
                }
                else
                {
                    pruebaMates=0;
                }
            }
        break;
        default:
            {
                printf("\tError al hacer el recuento.\n");
            }
        }
    pf=fopen("Misdatos.txt", "a");
    fprintf(pf, "p2 = %d\n", pruebaMates);
    return pruebaMates;
}
//Convertir todos los huecos en ceros.
int zeros(int sudoku[9][9], int fila, int columna, int V)
{
    int i=0, j=0;
    for (i=0; i<= fila; i++)
    {
        for (j=0; j<= columna; j++)
        {
            sudoku[i][j]=0;
        }
    }
    return V;
}
//Funcion para ver los cambios de la matriz.
void imprimir_matriz(int sudoku[9][9], int fila, int columna, int V)
{
    switch(V)
        {
        case 1:

                printf("\t   1   2   3    4   5   6     7   8   9\n");
                printf("\t  ______________________________________\n");
                printf("\t |           |             |            |\n");
                printf("\t1| 7   5   %d |  %d   %d   4  |  %d   9   2 |\n", sudoku[0][2], sudoku[0][3], sudoku[0][4], sudoku[0][6]);
                printf("\t |           |             |            |\n");
                printf("\t2| 6   %d   %d |  %d   2   %d  |  3   %d   %d |\n", sudoku[1][1], sudoku[1][2], sudoku[1][3], sudoku[1][5], sudoku[1][7], sudoku[1][8]);
                printf("\t |           |             |            |\n");
                printf("\t3| %d   2   %d |  %d   %d   %d  |  5   %d   8 |\n", sudoku[2][0], sudoku[2][2], sudoku[2][3], sudoku[2][4], sudoku[2][5], sudoku[2][7]);
                printf("\t |-----------|-------------|------------|\n");
                printf("\t4| 1   3   %d |  %d   7   %d  |  8   %d   %d |\n", sudoku[3][2], sudoku[3][3], sudoku[3][5], sudoku[3][7], sudoku[3][8]);
                printf("\t |           |             |            |\n");
                printf("\t5| 2   %d   %d |  8   1   3  |  %d   %d   %d |\n", sudoku[4][1], sudoku[4][2], sudoku[4][6], sudoku[4][7], sudoku[4][8]);
                printf("\t |           |             |            |\n");
                printf("\t6| %d   6   %d |  %d   4   %d  |  7   %d   1 |\n", sudoku[5][0], sudoku[5][2], sudoku[5][3], sudoku[5][5], sudoku[5][7]);
                printf("\t |-----------|-------------|------------|\n");
                printf("\t7| %d   %d   7 |  %d   5   %d  |  %d   6   %d |\n", sudoku[6][0], sudoku[6][1], sudoku[6][3], sudoku[6][5], sudoku[6][6], sudoku[6][8]);
                printf("\t |           |             |            |\n");
                printf("\t8| 5   %d   %d |  %d   %d   1  |  %d   %d   3 |\n", sudoku[7][1], sudoku[7][2], sudoku[7][3], sudoku[7][4], sudoku[7][6], sudoku[7][7]);
                printf("\t |           |             |            |\n");
                printf("\t9| %d   1   2 |  %d   8   6  |  9   7   %d |\n", sudoku[8][0], sudoku[8][3], sudoku[8][8]);
                printf("\t |___________|_____________|____________|\n");

        break;
        case 2:

                printf("\t   1   2   3    4   5   6     7   8   9\n");
                printf("\t  ______________________________________\n");
                printf("\t |           |             |            |\n");
                printf("\t1| %d   1   9 |  %d   3   %d  |  %d   6   %d |\n", sudoku[0][0], sudoku[0][3], sudoku[0][5], sudoku[0][6], sudoku[0][8]);
                printf("\t |           |             |            |\n");
                printf("\t2| %d   %d   7 |  2   %d   9  |  1   %d   %d |\n", sudoku[1][0], sudoku[1][1], sudoku[1][4], sudoku[1][7], sudoku[1][8]);
                printf("\t |           |             |            |\n");
                printf("\t3| %d   %d   3 |  7   %d   4  |  2   %d   9 |\n", sudoku[2][0], sudoku[2][1], sudoku[2][4], sudoku[2][7]);
                printf("\t |-----------|-------------|------------|\n");
                printf("\t4| %d   %d   4 |  %d   %d   %d  |  %d   %d   6 |\n", sudoku[3][0], sudoku[3][1], sudoku[3][3], sudoku[3][4], sudoku[3][5], sudoku[3][6], sudoku[3][7]);
                printf("\t |           |             |            |\n");
                printf("\t5| %d   %d   6 |  %d   7   8  |  %d   %d   %d |\n", sudoku[4][0], sudoku[4][1], sudoku[4][3], sudoku[4][6], sudoku[4][7], sudoku[4][8]);
                printf("\t |           |             |            |\n");
                printf("\t6| 8   %d   %d |  %d   %d   %d  |  %d   %d   %d |\n", sudoku[5][1], sudoku[5][2], sudoku[5][3], sudoku[5][4], sudoku[5][5], sudoku[5][6], sudoku[5][7], sudoku[5][8]);
                printf("\t |-----------|-------------|------------|\n");
                printf("\t7| %d   9   8 |  1   %d   %d  |  %d   4   2 |\n", sudoku[6][0], sudoku[6][4], sudoku[6][5], sudoku[6][6]);
                printf("\t |           |             |            |\n");
                printf("\t8| %d   %d   %d |  %d   %d   %d  |  9   8   1 |\n", sudoku[7][0], sudoku[7][1], sudoku[7][2], sudoku[7][3], sudoku[7][4], sudoku[7][5]);
                printf("\t |           |             |            |\n");
                printf("\t9| %d   %d   2 |  %d   %d   3  |  6   %d   5 |\n", sudoku[8][0], sudoku[8][1], sudoku[8][3], sudoku[8][4], sudoku[8][7]);
                printf("\t |___________|_____________|____________|\n");

        break;
        case 3:

                printf("\t   1   2   3    4   5   6     7   8   9\n");
                printf("\t  ______________________________________\n");
                printf("\t |           |             |            |\n");
                printf("\t1| %d   %d   %d |  %d   %d   8  |  %d   2   %d |\n", sudoku[0][0], sudoku[0][1], sudoku[0][2], sudoku[0][3], sudoku[0][4], sudoku[0][6], sudoku[0][8]);
                printf("\t |           |             |            |\n");
                printf("\t2| %d   9   4 |  7   %d   %d  |  6   3   %d |\n", sudoku[1][0], sudoku[1][4], sudoku[1][5], sudoku[1][8]);
                printf("\t |           |             |            |\n");
                printf("\t3| %d   2   %d |  9   %d   5  |  7   8   %d |\n", sudoku[2][0], sudoku[2][2], sudoku[2][4], sudoku[2][8]);
                printf("\t |-----------|-------------|------------|\n");
                printf("\t4| %d   %d   5 |  %d   %d   6  |  %d   1   %d |\n", sudoku[3][0], sudoku[3][1], sudoku[3][3], sudoku[3][4], sudoku[3][6], sudoku[3][8]);
                printf("\t |           |             |            |\n");
                printf("\t5| 7   %d   %d |  3   %d   %d  |  %d   9   %d |\n", sudoku[4][1], sudoku[4][2], sudoku[4][4], sudoku[4][5], sudoku[4][6], sudoku[4][8]);
                printf("\t |           |             |            |\n");
                printf("\t6| %d   %d   2 |  5   %d   %d  |  %d   %d   6 |\n", sudoku[5][0], sudoku[5][1], sudoku[5][4], sudoku[5][5], sudoku[5][6], sudoku[5][7]);
                printf("\t |-----------|-------------|------------|\n");
                printf("\t7| 2   %d   6 |  %d   5   %d  |  9   %d   %d |\n", sudoku[6][1], sudoku[6][3], sudoku[6][5], sudoku[6][7], sudoku[6][8]);
                printf("\t |           |             |            |\n");
                printf("\t8| 4   8   %d |  %d   9   %d  |  %d   %d   7 |\n", sudoku[7][2], sudoku[7][3], sudoku[7][5], sudoku[7][6], sudoku[7][7]);
                printf("\t |           |             |            |\n");
                printf("\t9| %d   %d   %d |  %d   2   %d  |  %d   %d   8 |\n", sudoku[8][0], sudoku[8][1], sudoku[8][2], sudoku[8][3], sudoku[8][5], sudoku[8][6], sudoku[8][7]);
                printf("\t |___________|_____________|____________|\n");

        break;
        default:

                //Se cambiará por un bucle infonito.
                printf("Error.\n");

        break;
    }
}
