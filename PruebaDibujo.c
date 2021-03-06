#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

void crucigrama(int n);
void dibujo(int n);
int comprueba(int n, int numerodib, char const *word);

int pruebaDibujo(int modo)
{
    int pruebaDibujo;
    int n1=0, fallodib=0, i=0;
    int numerodib;
    char palabra[31];
    int c, aciertodib, longitud=0;
    FILE *pf;

    srand(time(NULL));
    n1=((double)rand()/RAND_MAX)*(3-1)+1;
    aciertodib=0;
    
    printf("\tBienvenido a la prueba de Dibujo, aqui tendras que resolver la sopa de letras para conseguir la llave.\n");
    printf("\tPara resolver la sopa de letras, tendras que introducir que la palabra que corresponde con la definicion\n");
    printf("\tPrimero me tendras que indicar que numero vas a introducir y  luego introducir la palabra.\n");

    if(modo == 3)
    {
        printf("\tEn esta prueba tienes tres permitidos tres fallos.\n");
        for(i=0; i<13; i++)
        {
            printf("\tAqui tienes las definiciones de las palabras.\n");
            crucigrama(n1);
            printf("\tAqui tienes la sopa de letras para resolver.\n");
            dibujo(n1);
            printf("\tIndicame el numero para introducir la palabra que se desea.\n");
            scanf("%d", &numerodib);
            printf("Ahora introduce la palabra que has encontrado.\n");
            scanf("%30s", palabra);
            system("cls");
            longitud = strlen(palabra);
            for(i=0; i<longitud; i++)
            {
                if((palabra[i]>64)&&(palabra[i]<91))
                {
                    palabra[i]=palabra[i]+32;
                }
            }
            c=comprueba(n1, numerodib, palabra);
            printf("c=%d", c);
            if(c==1)
            {
                printf("\tPalabra correcta.\n");
                aciertodib++;
            }
            else
            {
                fallodib++;
                if(fallodib == 10)
                {
                    printf("\tHas perdido.\n");
                    break;
                }
            }
            if(aciertodib == 10)
            {
                printf("\tHas pasado la prueba.\n");
                pruebaDibujo=1;
            }
        }
    }
    else if(modo == 2)
    {
        printf("\tEn esta prueba tienes cinco intentos.\n");
        for(i=0; i<15; i++)
        {
            printf("\tAqui tienes las definiciones de las palabras.\n");
            crucigrama(n1);
            printf("\tAqui tienes la sopa de letras para resolver.\n");
            dibujo(n1);
            printf("\tIndicame el numero para introducir la palabra que se desea.\n");
            scanf("%d", &numerodib);
            printf("Ahora introduce la palabra que has encontrado.\n");
            scanf("%30s", palabra);
            system("cls");
            longitud = strlen(palabra);
            for(i=0; i<longitud; i++)
            {
                if((palabra[i]>64)&&(palabra[i]<91))
                {
                    palabra[i]=palabra[i]+32;
                }
            }
            c=comprueba(n1, numerodib, palabra);
            printf("c=%d", c);
            if(c==1)
            {
                printf("\tPalabra correcta.\n");
                aciertodib++;
            }
            else
            {
                fallodib++;
                if(fallodib == 10)
                {
                    printf("\tHas perdido.\n");
                    break;
                }
            }
            if(aciertodib == 10)
            {
                printf("\tHas pasado la prueba.\n");
                pruebaDibujo=1;
            }
        }
    }
    else if(modo == 1)
    {
        printf("\tEn esta prueba tienes diez intentos.\n");
        for(i=0; i<20; i++)
        {
            printf("\tAqui tienes las definiciones de las palabras.\n");
            crucigrama(n1);
            printf("\tAqui tienes la sopa de letras para resolver.\n");
            dibujo(n1);
            printf("\tIndicame el numero para introducir la palabra que se desea.\n");
            scanf("%d", &numerodib);
            printf("Ahora introduce la palabra que has encontrado.\n");
            scanf("%30s", palabra);
            system("cls");
            longitud = strlen(palabra);
            for(i=0; i<longitud; i++)
            {
                if((palabra[i]>64)&&(palabra[i]<91))
                {
                    palabra[i]=palabra[i]+32;
                }
            }
            c=comprueba(n1, numerodib, palabra);
            printf("c=%d", c);
            if(c==1)
            {
                printf("\tPalabra correcta.\n");
                aciertodib++;
            }
            else
            {
                fallodib++;
                if(fallodib == 10)
                {
                    printf("\tHas perdido.\n");
                    break;
                }
            }
            if(aciertodib == 10)
            {
                printf("\tHas pasado la prueba.\n");
                pruebaDibujo=1;
            }
        }
    }
    pf=fopen("Misdatos.txt", "a");
    fprintf(pf, "p3 = %d", pruebaDibujo);
    return pruebaDibujo;
}

void crucigrama(int n)
{
    int i=0;
    int j=0;
    char asd;
    char *texto;

    FILE *pf;

    if(n == 1)
    {
        pf=fopen("Dibujo1.txt","r");
        while(fscanf(pf, "%c", &asd) != EOF)
        {
            i++;
        }
        fclose(pf);
        texto=malloc(sizeof(char) * i);
        pf=fopen("Dibujo1.txt","r");
        while(fscanf(pf, "%c", &texto[j]) !=EOF)
        {
            printf("%c", texto[j]);
            j++;
        }
        fclose(pf);
        printf("\n");
    }
    else if(n == 2)
    {
        pf=fopen("Dibujo2.txt","r");
        while(fscanf(pf, "%c", &asd) != EOF)
        {
            i++;
        }
        fclose(pf);
        texto=malloc(sizeof(char) * i);
        pf=fopen("Dibujo1.txt","r");
        while(fscanf(pf, "%c", &texto[j]) !=EOF)
        {
            printf("%c", texto[j]);
            j++;
        }
        fclose(pf);
        printf("\n");
    }
    else if(n == 3)
    {
        pf=fopen("Dibujo3.txt","r");
        while(fscanf(pf, "%c", &asd) != EOF)
        {
            i++;
        }
        fclose(pf);
        texto=malloc(sizeof(char) * i);
        pf=fopen("Dibujo3.txt","r");
        while(fscanf(pf, "%c", &texto[j]) !=EOF)
        {
            printf("%c", texto[j]);
            j++;
        }
        fclose(pf);
        printf("\n");
    }
}

void dibujo(int n)
{
    if(n == 1)
    {
        printf("   1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17\n");
        printf("   --------------------------------------------------\n");
        printf("1  A  N  P  E  T  O  I  R  E  T  X  E  A  L  N  O  S\n");
        printf("   --------------------------------------------------\n");
        printf("2  T  A  C  E  R  O  S  W  C  R  P  Y  S  E  O  L  U\n");
        printf("   --------------------------------------------------\n");
        printf("3  D  R  O  R  T  E  R  C  N  M  P  E  I  N  R  T  F\n");
        printf("   --------------------------------------------------\n");
        printf("4  E  J  O  T  A  N  G  E  N  T  E  R  O  R  M  I  N\n");
        printf("   --------------------------------------------------\n");
        printf("5  A  H  U  Y  P  E  R  A  S  E  R  V  N  U  A  L  T\n");
        printf("   --------------------------------------------------\n");
        printf("6  X  T  A  R  T  A  R  D  A  E  P  A  T  I  L  U  N\n");
        printf("   --------------------------------------------------\n");
        printf("7  M  S  O  L  O  S  T  B  I  S  E  C  T  R  I  Z  O\n");
        printf("   --------------------------------------------------\n");
        printf("8  C  E  E  R  T  U  A  N  E  T  N  D  I  O  Z  O  E\n");
        printf("   --------------------------------------------------\n");
        printf("9  A  R  T  U  W  R  T  A  S  P  D  E  R  C  A  P  A\n");
        printf("   --------------------------------------------------\n");
        printf("10 L  A  Y  R  D  S  G  H  O  A  I  C  I  P  C  E  R\n");
        printf("   --------------------------------------------------\n");
        printf("11 S  F  O  E  C  O  T  A  S  E  C  O  S  N  I  E  R\n");
        printf("   --------------------------------------------------\n");
        printf("12 G  I  N  E  R  C  I  L  A  E  U  T  E  N  O  P  O\n");
        printf("   --------------------------------------------------\n");
        printf("13 U  N  A  F  I  L  O  Z  E  B  L  I  N  S  N  K  I\n");
        printf("   --------------------------------------------------\n");
        printf("14 Z  P  T  E  N  P  L  A  N  T  A  P  A  R  E  S  U\n");
        printf("   --------------------------------------------------\n");
        printf("15 T  E  R  E  J  E  S  D  U  I  R  T  E  R  C  O  T\n");
        printf("   --------------------------------------------------\n");
        printf("16 P  A  R  A  L  E  L  O  E  R  I  V  D  R  A  N  O\n");
        printf("   --------------------------------------------------\n");
        printf("17 E  S  T  E  R  N  O  C  E  N  T  A  U  R  O  L  E\n");
        printf("   --------------------------------------------------\n");
        printf("18 R  I  P  E  R  I  O  R  S  U  P  E  R  I  O  R  O\n");
        printf("   --------------------------------------------------\n");
        printf("19 F  I  J  A  C  I  O  N  I  O  M  E  C  F  T  E  T\n");
        printf("   --------------------------------------------------\n");
        printf("20 I  A  P  R  U  E  G  A  M  E  P  O  R  F  I  U  N\n");
        printf("   --------------------------------------------------\n");
        printf("21 L  E  G  O  Y  I  R  W  E  O  N  P  E  R  R  Y  S\n");
        printf("   --------------------------------------------------\n");
    }
    else if(n == 2)
    {
       printf("   1  2  3  4  5  6  7  8  9  10 11 12 13\n");
        printf("   --------------------------------------------------\n");
        printf("1  A  H  U  Y  P  E  C  A  S  E  R  V  N\n");
        printf("   --------------------------------------------------\n");
        printf("2  X  E  S  C  A  L  A  D  A  E  P  A  T\n");
        printf("   --------------------------------------------------\n");
        printf("3  M  S  O  L  O  S  B  B  I  S  E  C  T\n");
        printf("   --------------------------------------------------\n");
        printf("4  C  E  E  R  T  U  A  N  E  T  N  D  I\n");
        printf("   --------------------------------------------------\n");
        printf("5  A  R  T  U  W  R  L  A  S  P  D  E  R\n");
        printf("   --------------------------------------------------\n");
        printf("6  L  A  Y  V  D  S  L  H  O  A  C  C  A\n");
        printf("   --------------------------------------------------\n");
        printf("7  I  N  T  E  R  S  E  C  C  I  O  N  S\n");
        printf("   --------------------------------------------------\n");
        printf("8  S  I  N  R  R  C  R  L  A  E  R  T  E\n");
        printf("   --------------------------------------------------\n");
        printf("9  O  N  A  T  I  L  A  Z  E  B  T  I  S\n");
        printf("   --------------------------------------------------\n");
        printf("10 M  P  T  I  N  P  L  A  N  T  E  J  E\n");
        printf("   --------------------------------------------------\n");
        printf("11 E  E  R  C  J  E  S  D  U  I  R  T  G\n");
        printf("   --------------------------------------------------\n");
        printf("12 T  A  M  E  D  I  A  T  R  I  Z  V  M\n");
        printf("   --------------------------------------------------\n");
        printf("13 R  S  T  E  R  N  N  C  E  N  T  A  E\n");
        printf("   --------------------------------------------------\n");
        printf("14 I  I  P  E  R  I  G  R  S  U  P  E  N\n");
        printf("   --------------------------------------------------\n");
        printf("15 C  I  J  A  C  I  U  N  I  O  M  E  T\n");
        printf("   --------------------------------------------------\n");
        printf("16 A  A  P  R  U  E  L  A  M  E  P  O  O\n");
        printf("   --------------------------------------------------\n");
        printf("17 L  E  G  O  Y  I  O  W  E  O  N  P  E\n");
        printf("   --------------------------------------------------\n");
    }
    else if(n == 3)
    {
        printf("   1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18\n");
        printf("   ----------------------------------------------------\n");
        printf("1  A  N  P  E  T  O  I  R  E  T  X  E  A  P  N  O  S  S\n");
        printf("   ----------------------------------------------------\n");
        printf("2  T  A  C  E  R  O  S  W  C  P  E  N  D  I  E  N  T  E\n");
        printf("   ----------------------------------------------------\n");
        printf("3  D  R  O  R  T  E  R  C  N  L  P  E  I  R  R  T  F  C\n");
        printf("   ----------------------------------------------------\n");
        printf("4  E  J  O  T  A  N  G  E  N  A  E  R  O  A  M  I  N  A\n");
        printf("   ----------------------------------------------------\n");
        printf("5  A  H  U  Y  P  E  C  A  S  N  R  V  N  M  A  L  T  A\n");
        printf("   ----------------------------------------------------\n");
        printf("6  X  T  D  I  A  M  E  T  R  O  P  A  T  I  L  U  N  T\n");
        printf("   ----------------------------------------------------\n");
        printf("7  M  S  O  L  O  S  N  B  I  S  E  C  T  D  I  Z  O  E\n");
        printf("   ----------------------------------------------------\n");
        printf("8  G  E  N  E  R  A  T  R  I  Z  N  D  I  E  Z  O  E  S\n");
        printf("   ----------------------------------------------------\n");
        printf("9  A  R  T  U  W  R  R  A  S  P  D  E  R  C  A  P  A  Y\n");
        printf("   ----------------------------------------------------\n");
        printf("10 L  A  Y  R  D  C  O  M  P  A  S  C  I  P  C  E  R  S\n");
        printf("   ----------------------------------------------------\n");
        printf("11 S  F  O  E  C  O  T  A  S  U  C  O  S  N  I  E  R  A\n");
        printf("   ----------------------------------------------------\n");
        printf("12 G  I  N  E  R  C  I  L  A  T  U  T  E  N  O  P  O  R\n");
        printf("   ----------------------------------------------------\n");
        printf("13 U  N  A  F  I  R  E  C  T  O  L  I  N  S  N  K  I  A\n");
        printf("   ----------------------------------------------------\n");
        printf("14 Z  P  T  E  N  P  L  A  N  C  A  P  A  R  E  S  U  J\n");
        printf("   ----------------------------------------------------\n");
        printf("15 T  E  R  E  J  E  S  D  U  A  R  T  E  R  C  O  T  E\n");
        printf("   ----------------------------------------------------\n");
        printf("16 L  E  G  O  Y  I  R  W  E  D  N  P  E  R  R  Y  S  J\n");
        printf("   --------------------------------------------------\n");
    }
}

int comprueba(int n, int numerodib, char const *word)
{
    int comprueba, i=0;
    char palabrasol[30], k[30];
    int N;
    if(n == 1)
    {
        switch(numerodib)
        {
        case 1:
            strcpy(k, "normalizacion");
            strcpy(palabrasol, k);
            N=13;
        break;
        case 2:
            strcpy(k, "perpendicular");
            strcpy(palabrasol, k);
            N=13;
        break;
        case 3:
            strcpy(k, "alzado");
            strcpy(palabrasol, k);
            N=6;
        break;
        case 4:
            strcpy(k, "perfil");
            strcpy(palabrasol, k);
            N=6;
        break;
        case 5:
            strcpy(k, "tangente");
            strcpy(palabrasol, k);
            N=8;
        break;
        case 6:
            strcpy(k, "bisectriz");
            strcpy(palabrasol, k);
            N=9;
        break;
        case 7:
            strcpy(k, "capaz");
            strcpy(palabrasol, k);
            N=5;
        break;
        case 8:
            strcpy(k, "cotas");
            strcpy(palabrasol, k);
            N=5;
        break;
        case 9:
            strcpy(k, "planta");
            strcpy(palabrasol, k);
            N=6;
        break;
        case 10:
            strcpy(k, "paralelo");
            strcpy(palabrasol, k);
            N=8;
        break;
        default:
            printf("\tError del sistema.\n");
        break;
        }
    }
    else if(n == 2)
    {
        switch(numerodib)
        {
        case 1:
            strcpy(k, "isometrico");
            strcpy(palabrasol, k);
            N=10;
        break;
        case 2:
            strcpy(k, "vertice");
            strcpy(palabrasol, k);
            N=7;
        break;
        case 3:
            strcpy(k, "caballera");
            strcpy(palabrasol, k);
            N=9;
        break;
        case 4:
            strcpy(k, "angulo");
            strcpy(palabrasol, k);
            N=6;
        break;
        case 5:
            strcpy(k, "corte");
            strcpy(palabrasol, k);
            N=5;
        break;
        case 6:
            strcpy(k, "segmento");
            strcpy(palabrasol, k);
            N=8;
        break;
        case 7:
            strcpy(k, "escala");
            strcpy(palabrasol, k);
            N=6;
        break;
        case 8:
            strcpy(k, "interseccion");
            strcpy(palabrasol, k);
            N=12;
        break;
        case 9:
            strcpy(k, "eje");
            strcpy(palabrasol, k);
            N=3;
        break;
        case 10:
            strcpy(k, "mediatriz");
            strcpy(palabrasol, k);
            N=9;
        break;
        default:
            printf("\tError del sistema.\n");
        break;
        }
    }
    else if(n == 3)
    {
        switch(numerodib)
        {
        case 1:
            strcpy(k, "centro");
            strcpy(palabrasol, k);
            N=6;
        break;
        case 2:
            strcpy(k, "plano");
            strcpy(palabrasol, k);
            N=5;
        break;
        case 3:
            strcpy(k, "autocad");
            strcpy(palabrasol, k);
            N=7;
        break;
        case 4:
            strcpy(k, "piramide");
            strcpy(palabrasol, k);
            N=8;
        break;
        case 5:
            strcpy(k, "secante");
            strcpy(palabrasol, k);
            N=7;
        break;
        case 6:
            strcpy(k, "pendiente");
            strcpy(palabrasol, k);
            N=9;
        break;
        case 7:
            strcpy(k, "diametro");
            strcpy(palabrasol, k);
            N=8;
        break;
        case 8:
            strcpy(k, "generatriz");
            strcpy(palabrasol, k);
            N=10;
        break;
        case 9:
            strcpy(k, "compas");
            strcpy(palabrasol, k);
            N=6;
        break;
        case 10:
            strcpy(k, "recto");
            strcpy(palabrasol, k);
            N=5;
        break;
        default:
            printf("\tError del sistema.\n");
        break;
        }
    }
    for(i=0; i<N; i++)
    {
        if(word[i] == palabrasol[i])
        {
            comprueba=1;
        }
        else
        {
            comprueba=0;
        }
    }
    return comprueba;
}
