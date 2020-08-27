#include <stdio.h>
#include <stdlib.h>

int main()
{

 int bob, alice, par, resultado, soma;

 printf("quem quer par? digite 1 pra alice e 2 pra bob\n");
 scanf("%i", &par);

 switch(par){
 case 1:
     resultado = 5;
     break;
 case 2:
    resultado = 0;
    break;

 }

 printf("total de dedos de bob\n");
 scanf("%i", &bob);

 printf("total de dedos de alice\n");
 scanf("%i", &alice);

 soma = bob + alice;

 if(soma % 2 == 0){
    if(resultado == 5){
        printf("alice ganhou!");
    }
   if(resultado == 0){
        printf("bob ganhou!");
 }

 } if(soma % 2 != 0){
         if(resultado == 5){
        printf("bob ganhou!");
    }
   if(resultado == 0){
        printf("alice ganhou!");
 }


 }





    return 0;
}
