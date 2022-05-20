#include<stdio.h>
#include<time.h>
#include<stdlib.h>

float posicion (float tiempo1, float tiempo2);
float energia(float masa, float velocidad);
float fuerza(float masa2, float aceleracion);

int pruebaFisica(float modo)
{
    int pruebaFisica;
    //Generador aleatorio.
    int n1, n2, n3;
    srand(time(NULL));
    n1=((double)rand()/RAND_MAX)*(3-1)+1;
    n2=((double)rand()/RAND_MAX)*(3-1)+1;
    n3=((double)rand()/RAND_MAX)*(3-1)+1;

    //Intro
    int p1;
    char intro;
    printf("\tAcabas de entrar en la prueba de fisica, se te haran varias pruebas y deberas superar todas para conseguir una de las llaves para salir de la prision\n");
    printf("\tPulse cualquier letra para continuar\n");
    scanf(" %c", &intro);

    //Pregunta 1
    switch(n1)
    {
        //Primera opcion
    case 1:
    {
        do
        {
            //Opcion 1
            printf("\tLa primera pregunta: ¿Que pesa mas un kilo de paja o un kilo de acero?\n");
            printf("\tLas soluciones son:\n\t1)Pesa mas un kilo de paja\n\t2)Pesa mas un kilo de acero\n\t3)Ninguna de las anteriores son correctas\n");
            printf("\tSolucion 1, 2 o 3\n");
            scanf("%d", &p1);
            //Poner las opciones.
            switch (p1)
            {
                case 1:
                {
                    //Fallo
                    printf("\tTu respuesta ha sido guardada\n");
                }
                break;
                case 2:
                {
                    //Fallo
                    printf("\tTu respuesta ha sido guardada\n");
                }
                break;
                case 3:
                {
                    //Acierto
                    printf("\tTu respuesta ha sido guardada\n");
                }
                break;
                default:
                {
                    p1=p1;
                }
                break;
                }
        }
        //Para que solo pueda meter el numero
        while((p1<1) || (p1>3));
        //Comprobacion
        if (p1 == 3)
        {
            //Correcto
            printf("\tHas conseguido una de llaves\n");
        }
        else
        {
            //Incorrecto
            printf("\tHas fallado\n");
        }

    }
    break;
    //Segunda opción
    case 2:
    {
        do
        {
            //Opciòn 2
            printf("\tPrimera pregunta, ¿Cual tiene más velocidad un coche azul que va a 25 metros por segundo o otro rojo que va a 90 kilometros hora?.\n");
            printf("\tLas soluciones son:\n\t1)El coche azul.\n\t2)El coche rojo.\n\t3)Ninguna de las anteriores.\n");
            printf("\tSolucin 1, 2 o 3.\n");
            scanf("%d", &p1);
                //Poner las opciones.
            switch (p1)
            {
                case 1:
                {
                    //Fallo
                    printf("\tTu respuesta ha sido guardada\n");
                }
                break;
                case 2:
                {
                    //Fallo
                    printf("\tTu respuesta ha sido guardada\n");
                }
                break;
                case 3:
                {
                    //Acierto
                    printf("\tTu respuesta ha sido guardada\n");
                }
                break;
                default:
                {
                    p1=p1;
                }
                break;
            }
        }
        //Solo vale número de 1 a 3
        while((p1<1) || (p1>3));
        //Comprobacion
        if (p1 == 3)
        {
            //Correcto
            printf("\tHas conseguido una de llaves\n");
        }
        else
        {
            //Incorrecto
            printf("\tHas fallado\n");
        }
    }
    break;
    //Tercera opción
    case 3:
        {
            do
            {
                //Opción 3
                printf("\tPrimera pregunta. ¿Cuáles son las unidades del sistema internacional de la energía?\n");
                printf("\tLas soluciones son:\n\t1)Voltios.\n\t2)Amperios.\n\t3)Ninguna de las anteriores.\n");
                printf("\tSolucion 1, 2 o 3.\n");
                scanf("%d", &p1);
            //Poner las opciones.
            switch (p1)
            {
                case 1:
                {
                    //Fallo
                    printf("\tTu respuesta ha sido guardada\n");
                }
                break;
                case 2:
                {
                    //Fallo
                    printf("\tTu respuesta ha sido guardada\n");
                }
                break;
                case 3:
                {
                    //Acierto
                    printf("\tTu respuesta ha sido guardada\n");
                }
                break;
                default:
                {
                    p1=p1;
                }
                break;
                }
        }
        //Para que solo haya números
        while((p1<1) || (p1>3));
        //Comprobación
        if (p1 == 3)
        {
            //Correcto
            printf("\tHas conseguido una de llaves\n");
        }
        else
        {
            //Incorrecto
            printf("\tHas fallado\n");
        }

    }
    break;
    default:
        {
            n1=n1;
        }
    break;
    }
    printf("\n");

    //Pregunta 2
    float p2, sol;
    switch (n2)
    {
    case 1:
        {
            float tiempo1, tiempo2;
            printf("\tSegunda pregunta: ¿Donde estara un tren que sale desde Madrid hasta Santander con una velocidad inicial de 25 metros/segundos, una aceleracion de 0.05 metros por segundo durante media hora, si el tiempo transcurrido son 2 horas?\n");
            printf("\tLa solucion en kilometros.\n");
            scanf("%f", &p2);
            sol = posicion (tiempo1, tiempo2);
            if (sol == p2)
            {
                printf("\tHas conseguido una de llaves\n");
            }
            else
            {
                printf("\tHas fallado\n");
            }
        }
    break;
    case 2:
        {
            float velocidad, masa;
            printf("\tSegunda pregunta: ¿Cual sera la energia cinetica que desprende un cuerpo que tiene una masa de quinientos gramos y un velocidad estable de setetenta y dos kilometros por hora?\n");
            printf("\tLa solucion en Julios.\n");
            scanf("%f", &p2);
            sol = energia (masa, velocidad);
            if (sol == p2)
            {
                printf("\tHas conseguido una de llaves\n");
            }
            else
            {
                printf("\tHas fallado\n");
            }
        }
    break;
    case 3:
        {
            float masa2, aceleracion;
            printf("\tSegunda pregunta: ¿Cual sera la fuerza a aplicar sobre un cuerpo de masa tres mil quinientos gramos y se lo queremos mover a dieciocho (km/h^2)");
            printf("\tLa solucion en Newtons.\n");
            scanf("%f", &p2);
            sol = fuerza (masa2, aceleracion);
            if (sol == p2)
            {
                printf("\tHas conseguido una de llaves\n");
            }
            else
            {
                printf("\tHas fallado\n");
            }
        }
    break;
    default:
        p2=p2;
    break;
    }
    printf("\n");

    //Pregunta 3.
    int p3;
    char letter;
    switch (n3)
    {
    case 1:
        {
            printf("\tTenemos este acertijo: 'Cuanto mas gorda esta mayor es el amor.'\n");
            printf("\tEsto significa:\n\tA)Los protones siempre se acercan a los neutrones.\n\tB)A mayor volumen, mayor capacidad.\n\tC)Cuanto más peso, mayor fuerza de atraccion.\n");
            scanf(" %c", &letter);
            if ((letter == 67) || (letter == 99))
            {
                printf("\tHas conseguido una de las llaves\n");
                p3=1;
            }
            else
            {
                printf("\tHas fallado\n");
            }
        }
    break;
    case 2:
        {
            printf("\tTenemos una duda, ¿Quien dedujo la ley de la gravedad?\n");
            printf("\tLas soluciones son:\n\tA)Newton.\n\tB)Einstein.\n\tC)Pitagoras.\n");
            scanf(" %c", &letter);
            if ((letter == 65) || (letter == 97))
            {
                printf("\tHas conseguido una de las llaves\n");
                p3=1;
            }
            else
            {
                printf("\tHas fallado\n");
            }
        }
    break;
    case 3:
        {
            printf("\t¿En que unidades se define peso (S.I.)?\n");
            printf("\tElija una de las soluciones:\n\tA)Kilogramos\n\tB)Newtons\n\tC)Kilogramos*kilometros/segundos.\n");
            scanf(" %c", &letter);
            if ((letter == 66) || (letter == 98))
            {
                printf("\tHas conseguido una de las llaves\n");
                p3=1;
            }
            else
            {
                printf("\tHas fallado\n");
            }
        }
    break;
    default:
            printf("\tNULL.\n");
    break;
    }
    printf("\n");


    //Recuento
    if((p1 == 3) && (p2 == sol) && (p3 == 1))
    {
        printf("\tFelicidades has pasado la prueba\n");
        pruebaFisica=1;
    }
    else
    {
        printf("\tLo siento, seguiras en este infierno un year mas\n");
        pruebaFisica=0;
    }

    printf("\n");
    system("cls");
    return pruebaFisica;
}

float posicion (float tiempo1, float tiempo2)
{
    float posicion;
    float vo=25, a=0.05;
    float posicion1;
    tiempo1=2*60*60;
    tiempo2=30*60;
    posicion1=vo*tiempo1+0.5*a*tiempo2*tiempo2;
    posicion = posicion1/1000;
    return posicion;
}

float energia (float masa, float velocidad)
{
    float energia;
    masa=0.5;
    velocidad = (72*1000)/3600;
    energia=0.5*masa*velocidad*velocidad;
    return energia;
}

float fuerza (float masa2, float aceleracion)
{
    float fuerza;
    masa2=3.5;
    aceleracion=(18*1000)/3600;
    return fuerza;
}
