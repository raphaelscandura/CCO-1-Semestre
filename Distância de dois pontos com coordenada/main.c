#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cont,x1=0,y1=0;
    float x2, y2;
    double distancia;


    for(cont=1;cont<6;cont++){
        printf("informe a coordenada x do dardo numero %i \n", cont);
        scanf("%f", &x2);
        printf("informe a coordenada y do dardo numero %i \n", cont);
        scanf("%f", &y2);
        distancia = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        if (distancia >= 0 && distancia <= 5){
            printf("voce fez 200 pontos!\n\n");
        }if (distancia >= 6 && distancia <= 10){
            printf("voce fez 100 pontos!\n\n");
        }if (distancia >= 11 && distancia <= 20){
            printf("voce fez 50 pontos!");
        }if (distancia > 20){
            printf("voce nem acertou o dardo...\n\n");
        }


    }


    return 0;
}
