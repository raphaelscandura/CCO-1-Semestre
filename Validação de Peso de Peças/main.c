#include <stdio.h>
#include <stdlib.h>

int main (){

  char tipoDePeca;
  float pesoDaPecaA, pesoDaPecaB;

  printf("Ola! Bem vindo ao controle de qualidade das pecas! Primeiramente, qual eh o tipo da sua peca? Digite A ou B (em letra maiuscula)\n");
  scanf ("%s", &tipoDePeca);

  switch (tipoDePeca){
    case 'A':
      printf ("A peca que voce escolheu eh do tipo A\n");
      printf ("Agora, qual eh o peso da sua peca?\n");
      scanf ("%f", &pesoDaPecaA);
      if (pesoDaPecaA <= 0){
	  	printf("O valor inserido para o peso da peca nao eh valido, por favor, tente novamente\n");
	} 
	  
	  else if (pesoDaPecaA > 1205){
	  	printf("Infelizmente o peso da peca excede o valor permitido e a peca deve ser descartada\n");
	}
	  
      else if (pesoDaPecaA < 1195){
	  printf("Infelizmente o peso da peca esta abaixo do valor permitido e a peca deve ser descartada\n");
    }
      else{
	  printf("A sua peca possui um valor valido, e passou pelo controle de qualidade!\n");
	}
      break;

    case 'B':
      printf ("A peca que voce escolheu eh do tipo B\n");
      printf ("Agora, qual eh o peso da sua peca?\n");
      scanf ("%f", &pesoDaPecaB);

      if (pesoDaPecaB <= 0){
	  	printf("O valor inserido para o peso da peca nao eh valido, por favor, tente novamente\n");
	}
      else if (pesoDaPecaB > 1810){
	  	printf("Infelizmente o peso da peca excede o valor permitido e a peca deve ser descartada\n");
	}
      else if (pesoDaPecaB < 1790){
	  printf("Infelizmente o peso da peca esta abaixo do valor permitido e a peca deve ser descartada\n");
	}
	  else{
	  printf("A sua peca possui um valor valido, e passou pelo controle de qualidade!\n");
	}
      break;

    default:
      printf("Tipo de peca invalido, por favor descrever se sua peca eh do tipo A ou B\n");
    }

}
