#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(void){

    int entradaMenu, escolhaJogador[11], idade, ladoDoOponente,cont, valorCPU[11], confirmacao[11] = {2,2,2,2,2,2,2,2,2,2,2}, soma[11], pares=0, impares=0, impar=0, valor = 100;


  setlocale(LC_ALL, "Portuguese");
  printf("*******************************************\n");
  printf("              PAR OU ÍMPAR                 \n");
  printf("*******************************************\n\n");
  printf("Olá! Bem vindo ao nosso jogo de par ou ímpar! O que deseja fazer?\n\n\n\n");
  printf("Digite 1 para Iniciar o jogo\n\n");
  printf("Digite 2 para Sair do jogo\n\n");
  printf("Digite 3 para selecionar valores\n\n");
  scanf("%i", &entradaMenu);
  printf("\n");

    switch(entradaMenu){
case 1:
    system("cls");
    printf("Ótimo, mas antes, uma pergunta...\n");
    break;
case 2:
    system("cls");
    printf("Sem problemas, volte quando quiser um desafio de verdade!\n");
    return 0;
    break;
case 3:
    system("cls");
    printf("Digite o número máximo que você quer que eu escolha durante o jogo! O padrão é 100\n");
    scanf("%i", &valor);
    break;
default:
    printf("Você digitou um valor inválido, por favor, tente novamente e lembre-se digite 1 para jogar ou 2 para sair...\n");
    return 0;
    break;
    }

    printf("\nEste jogo é somente para maiores de 18 anos, você é maior de idade? digite 1 para Sim e 2 para não!\n");
    scanf("%i", &idade);

    switch(idade){
case 1:
    printf("\nVamos começar então... Primeiramente você escolhe Par ou Ímpar? Digite 1 para ímpar e 2 para Par\n");
    scanf("%i", &ladoDoOponente);
    break;
case 2:
    system("cls");
    printf("Você não tem permissão para jogar esse jogo, por favor, volte quando tiver no mínimo 18 anos!\n");
    return 0;
    break;
default:
    printf("\nVocê digitou um valor inválido, por favor, tente novamente e lembre-se digite 1 para mais de 18 anos ou 2 para menos de 18 anos...\n");
    return 0;
    break;
    }

    switch(ladoDoOponente){
case 1:
    printf("\nVocê escolheu Ímpar! Então eu ficarei com Par! Isso significa que se a soma dos números que você escolher, e os que eu escolher resultar em um número Ímpar, você ganha a rodada, e se a soma for Par, eu ganho! O nosso jogo terá dez rodadas no total! Boa sorte!\n\n");
    impar++;
    break;
case 2:
    printf("\nVocê escolheu Par! Então eu ficarei com Ímpar! Isso significa que se a soma dos números que você escolher, e os que eu escolher resultar em um número Par, você ganha a rodada, e se a soma for Ímpar, eu ganho! O nosso jogo terá dez rodadas no total! Boa sorte!\n\n");
    break;
default:
    printf("\nVocê digitou um valor inválido, por favor, tente novamente\n");
    return 0;
    break;
    }

    srand(time (NULL));

    for (cont=1;cont <= 10; cont++){
        while (confirmacao[cont] == 2){
        printf("\nDigite sua escolha número %i!\n", cont);
        scanf("%i", &escolhaJogador[cont]);
        printf("\nVocê escolheu o número %i, confirma sua jogada? digite 1 para sim ou 2 para não\n", escolhaJogador[cont]);
        scanf("%i", &confirmacao[cont]);
        valorCPU[cont] = rand() % valor + 1;
        printf("\nOk, e eu escolho o número %i!\n", valorCPU[cont]);
        soma[cont] = valorCPU[cont] + escolhaJogador[cont];
        printf("\nNossa soma nessa rodada deu %i\n", soma[cont]);}
                if (soma[cont]%2==0){
            pares++;
        }
        else {
            impares++;
        }
}
    printf("\nNós tivemos %i rodadas que resultaram em um número par e %i rodadas que resultaram em um número ímpar!\n", pares, impares);

    if (impar == 1){
            if (impares > 5 && impares < 8){
                printf("\nSeu score foi mais de 50%% e menos de 80%%! Você foi bem! Obrigado por jogar!\n");
                }
            if (5 > impares){
                printf("\nInfelizmente, você teve um score de menos de 50%%, então eu ganhei! Uhul! Obrigado por jogar!\n");
            }
            if (pares == impares){
                printf("\nQuem diria! Nos empatamos! Cada um de nós ganhou 50%% das rodadas, você foi razoável! Obrigado por jogar!\n");
            }
            if (impares >= 8){
                printf("\nUau!!! Você teve um score de mais de 80%% nesse jogo! Você foi excelente! Obrigado por jogar!\n");
            }
            if (pares > 5 && pares < 8){
                printf("\nMeu score foi mais de 50%% e menos de 80%%! O computador foi bem! Obrigado por jogar!\n");
            }
            if (pares >= 8){
                printf("\nUau!!! O computador teve um score de mais de 80%% nesse jogo! Eu fui excelente! Obrigado por jogar!\n");
            }
            if (5 > pares){
                printf("\nInfelizmente, eu tive um score de menos de 50%%, então você ganhou! Obrigado por jogar!\n");}}
    else{
            if (pares > 5 && pares < 8){
                printf("\nSeu score foi mais de 50%% e menos de 80%%! Você foi bem! Obrigado por jogar!\n");
                }
            if (5 > pares){
                printf("\nInfelizmente, você teve um score de menos de 50%%, então eu ganhei! Uhul! Obrigado por jogar!\n");
            }
            if (pares == impares){
                printf("\nQuem diria! Nos empatamos! Cada um de nós ganhou 50%% das rodadas, você foi razoável! Obrigado por jogar!\n");
            }
            if (pares >= 8){
                printf("\nUau!!! Você teve um score de mais de 80%% nesse jogo! Você foi excelente! Obrigado por jogar!\n");
            }
            if (impares >= 8){
                printf("\nUau!!! O computador teve um score de mais de 80%% nesse jogo! Eu fui excelente! Obrigado por jogar!\n");}

            if (5 > impares){
                printf("\nInfelizmente, eu tive um score de menos de 50%%, então você ganhou! Obrigado por jogar!\n");}

            if (impares > 5 && impares < 8){
                printf("\nMeu score foi mais de 50%% e menos de 80%%! O computador foi bem! Obrigado por jogar!\n");
                }
    }
    return 0;
}
