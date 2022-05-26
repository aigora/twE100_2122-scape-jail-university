#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int pruebabiologia;

void ahorcado(int a);
void ahorcadodif(int a);

int pruebaBiologia(int modo)
{
    int n1,n2;
    srand(time(NULL));
    n1=((double)rand()/RAND_MAX)*(4-1)+1;
    n2=((double)rand()/RAND_MAX)*(4-1)+1;

    printf("Bienvenido a la prueba de biologia, en esta prueba deberas ganar en el clasico juego del ahorcado para conseguir la llave de biologia.\n\n");
    printf("Debes introducir por teclado una letra MAYUSCULA para ver si coincide con las de la palabra que te ha tocado.\n");

switch (modo)
{
    case 1:
    printf("Si aciertas tu letra aparecera colocada en su sitio. Si fallas se ira dibujando tu horca con un maximo de 8 fallos.\n\n");

    char palabra1[7]="CELULA",palabra2[10]="VIRUS",palabra3[10]="HORMONA";
    char palabra1void[10]="--L-L-",palabra2void[10]="--R--",palabra3void[10]="H----N-";
    char letras[27]=" ";
    char letra;
    int i,j,a=0,b=0,c=0,d=0,aux=0;

     switch (n2)
        {
            case 1:
                while (b!=8)
                {
                    printf("%s\n",palabra1void);
                    printf("Letras usadas: %s\n",letras);
                    printf("Escribe una letra en MAYUSCULA, si la escribes en minuscula contara como un fallo.\n");
                    scanf(" %c",&letra);
                    for(i=0;i<27;i++)
                    {
                        if(letra==letras[i])
                            aux=aux+1;
                    }
                    if(aux==1)
                    {
                        printf("\nYa has probado con esta letra.\n\n");
                        aux=0;
                    }
                    else
                    {
                    for(j=0;j<6;j++)
                    {
                        if (palabra1[j]!=letra)
                            {
                                a=a+1;
                            }
                        else
                            {
                               if(palabra1void[j]==letra)
                                {
                                    printf("\nEsta letra ya es conocida.\n\n");
                                }
                                else
                                {
                                palabra1void[j]=letra;
                                d=d+1;
                                }
                            }
                    }
                    if (a==6)
                    {
                        b=b+1;
                        ahorcado(b);
                        letras[c]=letra;
                        c=c+1;
                    }
                    a=0;
                    }
                    if(d==4)
                    {
                        b=8;
                        printf("HAS GANADO!");
                        pruebabiologia=1;
                    }
                }
                break;
           case 2:
                while (b!=8)
                {
                    printf("%s\n",palabra2void);
                    printf("Letras usadas: %s\n",letras);
                    printf("Escribe una letra en MAYUSCULA, si la escribes en minuscula contara como un fallo.\n");
                    scanf(" %c",&letra);
                    for(i=0;i<27;i++)
                    {
                        if(letra==letras[i])
                            aux=aux+1;
                    }
                    if(aux==1)
                    {
                        printf("\nYa has probado con esta letra.\n\n");
                        aux=0;
                    }
                    else
                    {
                    for(j=0;j<5;j++)
                    {
                        if (palabra2[j]!=letra)
                            {
                                a=a+1;
                            }
                        else
                            {
                                if(palabra2void[j]==letra)
                                {
                                    printf("\nEsta letra ya es conocida.\n\n");
                                }
                                else
                                {
                                palabra2void[j]=letra;
                                d=d+1;
                                }
                            }
                    }
                    if (a==5)
                    {
                        b=b+1;
                        ahorcado(b);
                        letras[c]=letra;
                        c=c+1;
                    }
                    a=0;
                    }
                    if(d==4)
                    {
                        b=8;
                        printf("HAS GANADO!");
                        pruebabiologia=1;
                    }
                }
                break;
            case 3:
                while (b!=8)
                {
                    printf("%s\n",palabra3void);
                    printf("Letras usadas: %s\n",letras);
                    printf("Escribe una letra en MAYUSCULA, si la escribes en minuscula contara como un fallo.\n");
                    scanf(" %c",&letra);
                    for(i=0;i<27;i++)
                    {
                        if(letra==letras[i])
                            aux=aux+1;
                    }
                    if(aux==1)
                    {
                        printf("\nYa has probado con esta letra.\n\n");
                        aux=0;
                    }
                    else
                    {
                    for(j=0;j<7;j++)
                    {
                        if (palabra3[j]!=letra)
                            {
                                a=a+1;
                            }
                        else
                            {
                                if(palabra3void[j]==letra)
                                {
                                    printf("\nEsta letra ya es conocida.\n\n");
                                }
                                else
                                {
                                palabra3void[j]=letra;
                                d=d+1;
                                }
                            }
                    }
                    if (a==7)
                    {
                        b=b+1;
                        ahorcado(b);
                        letras[c]=letra;
                        c=c+1;
                    }
                    a=0;
                    }
                    if(d==5)
                    {
                        b=8;
                        printf("HAS GANADO!");
                        pruebabiologia=1;
                    }
                }
                break;
        }
        break;
    case 2:
    printf("Si aciertas tu letra aparecera colocada en su sitio. Si fallas se ira dibujando tu horca con un maximo de 8 fallos.\n\n");

    char palabra1m[7]="CELULA",palabra2m[10]="VIRUS",palabra3m[10]="HORMONA";
    char palabra1voidm[10]="------",palabra2voidm[10]="-----",palabra3voidm[10]="-------";
    char letrasm[27]=" ";
    char letram;
    int im,jm,am=0,bm=0,cm=0,dm=0,auxm=0;

     switch (n2)
        {
            case 1:
                while (bm!=8)
                {
                    printf("%s\n",palabra1voidm);
                    printf("Letras usadas: %s\n",letrasm);
                    printf("Escribe una letra en MAYUSCULA, si la escribes en minuscula contara como un fallo.\n");
                    scanf(" %c",&letram);
                    for(im=0;im<27;im++)
                    {
                        if(letram==letrasm[im])
                            auxm=auxm+1;
                    }
                    if(auxm==1)
                    {
                        printf("\nYa has probado con esta letra.\n\n");
                        auxm=0;
                    }
                    else
                    {
                    for(jm=0;jm<6;jm++)
                    {
                        if (palabra1m[jm]!=letram)
                            {
                                am=am+1;
                            }
                        else
                            {
                               if(palabra1voidm[jm]==letram)
                                {
                                    printf("\nEsta letra ya es conocida.\n\n");
                                }
                                else
                                {
                                palabra1voidm[jm]=letram;
                                dm=dm+1;
                                }
                            }
                    }
                    if (am==6)
                    {
                        bm=bm+1;
                        ahorcado(bm);
                        letrasm[cm]=letram;
                        cm=cm+1;
                    }
                    am=0;
                    }
                    if(dm==6)
                    {
                        bm=8;
                        printf("HAS GANADO!");
                        pruebabiologia=1;
                    }
                }
                break;
           case 2:
                while (bm!=8)
                {
                    printf("%s\n",palabra2voidm);
                    printf("Letras usadas: %s\n",letrasm);
                    printf("Escribe una letra en MAYUSCULA, si la escribes en minuscula contara como un fallo.\n");
                    scanf(" %c",&letram);
                    for(im=0;im<27;im++)
                    {
                        if(letram==letrasm[im])
                            auxm=auxm+1;
                    }
                    if(auxm==1)
                    {
                        printf("\nYa has probado con esta letra.\n\n");
                        auxm=0;
                    }
                    else
                    {
                    for(jm=0;jm<5;jm++)
                    {
                        if (palabra2m[jm]!=letram)
                            {
                                am=am+1;
                            }
                        else
                            {
                                if(palabra2voidm[jm]==letram)
                                {
                                    printf("\nEsta letra ya es conocida.\n\n");
                                }
                                else
                                {
                                palabra2voidm[jm]=letram;
                                dm=dm+1;
                                }
                            }
                    }
                    if (am==5)
                    {
                        bm=bm+1;
                        ahorcado(bm);
                        letrasm[cm]=letram;
                        cm=cm+1;
                    }
                    am=0;
                    }
                    if(dm==5)
                    {
                        bm=8;
                        printf("HAS GANADO!");
                        pruebabiologia=1;
                    }
                }
                break;
            case 3:
                while (bm!=8)
                {
                    printf("%s\n",palabra3voidm);
                    printf("Letras usadas: %s\n",letrasm);
                    printf("Escribe una letra en MAYUSCULA, si la escribes en minuscula contara como un fallo.\n");
                    scanf(" %c",&letram);
                    for(im=0;im<27;im++)
                    {
                        if(letram==letrasm[im])
                            auxm=auxm+1;
                    }
                    if(auxm==1)
                    {
                        printf("\nYa has probado con esta letra.\n\n");
                        auxm=0;
                    }
                    else
                    {
                    for(jm=0;jm<7;jm++)
                    {
                        if (palabra3m[jm]!=letram)
                            {
                                am=am+1;
                            }
                        else
                            {
                                if(palabra3voidm[jm]==letram)
                                {
                                    printf("\nEsta letra ya es conocida.\n\n");
                                }
                                else
                                {
                                palabra3voidm[jm]=letram;
                                dm=dm+1;
                                }
                            }
                    }
                    if (am==7)
                    {
                        bm=bm+1;
                        ahorcado(bm);
                        letrasm[cm]=letram;
                        cm=cm+1;
                    }
                    am=0;
                    }
                    if(dm==7)
                    {
                        bm=8;
                        printf("HAS GANADO!");
                        pruebabiologia=1;
                    }
                }
                break;
        }
        break;
    case 3:
    printf("Si aciertas tu letra aparecera colocada en su sitio. Si fallas se ira dibujando tu horca con un maximo de 4 fallos.\n\n");

    char palabra1d[7]="CELULA",palabra2d[10]="VIRUS",palabra3d[10]="HORMONA";
    char palabra1voidd[10]="------",palabra2voidd[10]="-----",palabra3voidd[10]="-------";
    char letrasd[27]=" ";
    char letrad;
    int id,jd,ad=0,bd=0,cd=0,dd=0,auxd=0;

     switch (n2)
        {
            case 1:
                while (bd!=4)
                {
                    printf("%s\n",palabra1voidd);
                    printf("Letras usadas: %s\n",letrasd);
                    printf("Escribe una letra en MAYUSCULA, si la escribes en minuscula contara como un fallo.\n");
                    scanf(" %c",&letrad);
                    for(id=0;id<27;id++)
                    {
                        if(letrad==letrasd[id])
                            auxd=auxd+1;
                    }
                    if(auxd==1)
                    {
                        printf("\nYa has probado con esta letra.\n\n");
                        auxd=0;
                    }
                    else
                    {
                    for(jd=0;jd<6;jd++)
                    {
                        if (palabra1d[jd]!=letrad)
                            {
                                ad=ad+1;
                            }
                        else
                            {
                               if(palabra1voidd[j]==letrad)
                                {
                                    printf("\nEsta letra ya es conocida.\n\n");
                                }
                                else
                                {
                                palabra1voidd[jd]=letrad;
                                dd=dd+1;
                                }
                            }
                    }
                    if (ad==6)
                    {
                        bd=bd+1;
                        ahorcadodif(bd);
                        letrasd[cd]=letrad;
                        cd=cd+1;
                    }
                    ad=0;
                    }
                    if(dd==6)
                    {
                        bd=4;
                        printf("HAS GANADO!");
                        pruebabiologia=1;
                    }
                }
                break;
           case 2:
                while (bd!=4)
                {
                    printf("%s\n",palabra2voidd);
                    printf("Letras usadas: %s\n",letrasd);
                    printf("Escribe una letra en MAYUSCULA, si la escribes en minuscula contara como un fallo.\n");
                    scanf(" %c",&letrad);
                    for(id=0;id<27;id++)
                    {
                        if(letrad==letrasd[id])
                            auxd=auxd+1;
                    }
                    if(auxd==1)
                    {
                        printf("\nYa has probado con esta letra.\n\n");
                        auxd=0;
                    }
                    else
                    {
                    for(jd=0;jd<5;jd++)
                    {
                        if (palabra2d[jd]!=letrad)
                            {
                                ad=ad+1;
                            }
                        else
                            {
                                if(palabra2voidd[jd]==letrad)
                                {
                                    printf("\nEsta letra ya es conocida.\n\n");
                                }
                                else
                                {
                                palabra2voidd[jd]=letrad;
                                dd=dd+1;
                                }
                            }
                    }
                    if (ad==5)
                    {
                        bd=bd+1;
                        ahorcadodif(bd);
                        letrasd[cd]=letrad;
                        cd=cd+1;
                    }
                    ad=0;
                    }
                    if(dd==5)
                    {
                        bd=4;
                        printf("HAS GANADO!");
                        pruebabiologia=1;
                    }
                }
                break;
            case 3:
                while (bd!=4)
                {
                    printf("%s\n",palabra3voidd);
                    printf("Letras usadas: %s\n",letrasd);
                    printf("Escribe una letra en MAYUSCULA, si la escribes en minuscula contara como un fallo.\n");
                    scanf(" %c",&letrad);
                    for(id=0;id<27;id++)
                    {
                        if(letrad==letrasd[id])
                            auxd=auxd+1;
                    }
                    if(auxd==1)
                    {
                        printf("\nYa has probado con esta letra.\n\n");
                        auxd=0;
                    }
                    else
                    {
                    for(jd=0;jd<7;jd++)
                    {
                        if (palabra3d[jd]!=letrad)
                            {
                                ad=ad+1;
                            }
                        else
                            {
                                if(palabra3voidd[jd]==letrad)
                                {
                                    printf("\nEsta letra ya es conocida.\n\n");
                                }
                                else
                                {
                                palabra3voidd[jd]=letrad;
                                dd=dd+1;
                                }
                            }
                    }
                    if (ad==7)
                    {
                        bd=bd+1;
                        ahorcadodif(bd);
                        letrasd[cd]=letrad;
                        cd=cd+1;
                    }
                    ad=0;
                    }
                    if(dd==7)
                    {
                        bd=4;
                        printf("HAS GANADO!");
                        pruebabiologia=1;
                    }
                }
                break;
        }
        break;
}
    return pruebabiologia;
}

void ahorcado(int a)
{
    switch (a)
    {
    case 1:
    printf("____\n");
    printf("   \n");
    printf("   \n");
    printf("  \n");
    printf("  \n");
    break;
    case 2:
    printf("____\n");
    printf("   I\n");
    printf("   \n");
    printf("  \n");
    printf("  \n");
    break;
    case 3:
    printf("____\n");
    printf("   I\n");
    printf("   0\n");
    printf("  \n");
    printf("  \n");
    break;
    case 4:
    printf("____\n");
    printf("   I\n");
    printf("   0\n");
    printf("   |\n");
    printf("  \n");
    break;
    case 5:
    printf("____\n");
    printf("   I\n");
    printf("   0\n");
    printf("  -|\n");
    printf("  \n");
    break;
    case 6:
    printf("____\n");
    printf("   I\n");
    printf("   0\n");
    printf("  -|-\n");
    printf("  \n");
    break;
    case 7:
    printf("____\n");
    printf("   I\n");
    printf("   0\n");
    printf("  -|-\n");
    printf("  | \n");
    break;
    case 8:
    printf("____\n");
    printf("   I\n");
    printf("   0\n");
    printf("  -|-\n");
    printf("  | |\n");
    printf("YOU DIED!");
    pruebabiologia=0;
    break;
    }

}

void ahorcadodif(int a)
{
    switch (a)
    {
    case 1:
    printf("____\n");
    printf("   I\n");
    printf("   \n");
    printf("  \n");
    printf("  \n");
    break;
    case 2:
    printf("____\n");
    printf("   I\n");
    printf("   0\n");
    printf("   |\n");
    printf("  \n");
    break;
    case 3:
    printf("____\n");
    printf("   I\n");
    printf("   0\n");
    printf("  -|-\n");
    printf("  \n");
    break;
    case 4:
    printf("____\n");
    printf("   I\n");
    printf("   0\n");
    printf("  -|-\n");
    printf("  | |\n");
    printf("YOU DIED!");
    pruebabiologia=0;
    break;
    }

}

