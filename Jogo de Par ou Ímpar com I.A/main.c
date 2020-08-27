#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(void){

    int entradaMenu, escolhaJogador[11], idade, ladoDoOponente,cont, valorCPU[11], confirmacao[11] = {2,2,2,2,2,2,2,2,2,2,2}, soma[11], pares=0, impares=0, impar=0, valor = 100;


  setlocale(LC_ALL, "Portuguese");
  printf("*******************************************\n");
  printf("              PAR OU �MPAR                 \n");
  printf("*******************************************\n\n");
  printf("Ol�! Bem vindo ao nosso jogo de par ou �mpar! O que deseja fazer?\n\n\n\n");
  printf("Digite 1 para Iniciar o jogo\n\n");
  printf("Digite 2 para Sair do jogo\n\n");
  printf("Digite 3 para selecionar valores\n\n");
  scanf("%i", &entradaMenu);
  printf("\n");

    switch(entradaMenu){
case 1:
    system("cls");
    printf("�timo, mas antes, uma pergunta...\n");
    break;
case 2:
    system("cls");
    printf("Sem problemas, volte quando quiser um desafio de verdade!\n");
    return 0;
    break;
case 3:
    system("cls");
    printf("Digite o n�mero m�ximo que voc� quer que eu escolha durante o jogo! O padr�o � 100\n");
    scanf("%i", &valor);
    break;
default:
    printf("Voc� digitou um valor inv�lido, por favor, tente novamente e lembre-se digite 1 para jogar ou 2 para sair...\n");
    return 0;
    break;
    }

    printf("\nEste jogo � somente para maiores de 18 anos, voc� � maior de idade? digite 1 para Sim e 2 para n�o!\n");
    scanf("%i", &idade);

    switch(idade){
case 1:
    printf("\nVamos come�ar ent�o... Primeiramente voc� escolhe Par ou �mpar? Digite 1 para �mpar e 2 para Par\n");
    scanf("%i", &ladoDoOponente);
    break;
case 2:
    system("cls");
    printf("Voc� n�o tem permiss�o para jogar esse jogo, por favor, volte quando tiver no m�nimo 18 anos!\n");
    return 0;
    break;
default:
    printf("\nVoc� digitou um valor inv�lido, por favor, tente novamente e lembre-se digite 1 para mais de 18 anos ou 2 para menos de 18 anos...\n");
    return 0;
    break;
    }

    switch(ladoDoOponente){
case 1:
    printf("\nVoc� escolheu �mpar! Ent�o eu ficarei com Par! Isso significa que se a soma dos n�meros que voc� escolher, e os que eu escolher resultar em um n�mero �mpar, voc� ganha a rodada, e se a soma for Par, eu ganho! O nosso jogo ter� dez rodadas no total! Boa sorte!\n\n");
    impar++;
    break;
case 2:
    printf("\nVoc� escolheu Par! Ent�o eu ficarei com �mpar! Isso significa que se a soma dos n�meros que voc� escolher, e os que eu escolher resultar em um n�mero Par, voc� ganha a rodada, e se a soma for �mpar, eu ganho! O nosso jogo ter� dez rodadas no total! Boa sorte!\n\n");
    break;
default:
    printf("\nVoc� digitou um valor inv�lido, por favor, tente novamente\n");
    return 0;
    break;
    }

    srand(time (NULL));

    for (cont=1;cont <= 10; cont++){
        while (confirmacao[cont] == 2){
        printf("\nDigite sua escolha n�mero %i!\n", cont);
        scanf("%i", &escolhaJogador[cont]);
        printf("\nVoc� escolheu o n�mero %i, confirma sua jogada? digite 1 para sim ou 2 para n�o\n", escolhaJogador[cont]);
        scanf("%i", &confirmacao[cont]);
        valorCPU[cont] = rand() % valor + 1;
        printf("\nOk, e eu escolho o n�mero %i!\n", valorCPU[cont]);
        soma[cont] = valorCPU[cont] + escolhaJogador[cont];
        printf("\nNossa soma nessa rodada deu %i\n", soma[cont]);}
                if (soma[cont]%2==0){
            pares++;
        }
        else {
            impares++;
        }
}
    printf("\nN�s tivemos %i rodadas que resultaram em um n�mero par e %i rodadas que resultaram em um n�mero �mpar!\n", pares, impares);

    if (impar == 1){
            if (impares > 5 && impares < 8){
                printf("\nSeu score foi mais de 50%% e menos de 80%%! Voc� foi bem! Obrigado por jogar!\n");
                }
            if (5 > impares){
                printf("\nInfelizmente, voc� teve um score de menos de 50%%, ent�o eu ganhei! Uhul! Obrigado por jogar!\n");
            }
            if (pares == impares){
                printf("\nQuem diria! Nos empatamos! Cada um de n�s ganhou 50%% das rodadas, voc� foi razo�vel! Obrigado por jogar!\n");
            }
            if (impares >= 8){
                printf("\nUau!!! Voc� teve um score de mais de 80%% nesse jogo! Voc� foi excelente! Obrigado por jogar!\n");
            }
            if (pares > 5 && pares < 8){
                printf("\nMeu score foi mais de 50%% e menos de 80%%! O computador foi bem! Obrigado por jogar!\n");
            }
            if (pares >= 8){
                printf("\nUau!!! O computador teve um score de mais de 80%% nesse jogo! Eu fui excelente! Obrigado por jogar!\n");
            }
            if (5 > pares){
                printf("\nInfelizmente, eu tive um score de menos de 50%%, ent�o voc� ganhou! Obrigado por jogar!\n");}}
    else{
            if (pares > 5 && pares < 8){
                printf("\nSeu score foi mais de 50%% e menos de 80%%! Voc� foi bem! Obrigado por jogar!\n");
                }
            if (5 > pares){
                printf("\nInfelizmente, voc� teve um score de menos de 50%%, ent�o eu ganhei! Uhul! Obrigado por jogar!\n");
            }
            if (pares == impares){
                printf("\nQuem diria! Nos empatamos! Cada um de n�s ganhou 50%% das rodadas, voc� foi razo�vel! Obrigado por jogar!\n");
            }
            if (pares >= 8){
                printf("\nUau!!! Voc� teve um score de mais de 80%% nesse jogo! Voc� foi excelente! Obrigado por jogar!\n");
            }
            if (impares >= 8){
                printf("\nUau!!! O computador teve um score de mais de 80%% nesse jogo! Eu fui excelente! Obrigado por jogar!\n");}

            if (5 > impares){
                printf("\nInfelizmente, eu tive um score de menos de 50%%, ent�o voc� ganhou! Obrigado por jogar!\n");}

            if (impares > 5 && impares < 8){
                printf("\nMeu score foi mais de 50%% e menos de 80%%! O computador foi bem! Obrigado por jogar!\n");
                }
    }
    return 0;
}
