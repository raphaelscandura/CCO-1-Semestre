#include <stdio.h>
#include <stdlib.h>

int main(){

float med1,med2,soma1,soma2;
int i,p,y1,y2;
int x;
soma2 = 0;
soma1 = 0;
y1 = 0;
y2 = 0;

for(x=1;x<=15;x++){
        printf("\nDigite a idade da %d pessoa: ",x);
        scanf("%i",&i);
        printf("Digite a altura da %d pessoa(em centimetros): ",x);
        scanf("%i",&p);
        printf("\n_________________\n");

        if(p<=120){
                y1++;
                soma1=soma1+i;
                med1=soma1/y1;
        }
        if(p>=170){
                y2++;
                soma2=soma2+i;
                med2=soma2/y2;
        }
    }

        printf("\nA media das idades das pessoas com altura menor ou igual a 1,20m   = %.2f\n",med1);
        printf("\nA media das idades das pessoas com altura maior ou igual a 1,70m  = %.2f\n",med2);


return 0;
}
