#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    float angulo1, angulo2, angulo3;

    setlocale(LC_ALL, "Portuguese");
    printf("Olá, bem vindo ao TRIANGLE IDENTIFIER, simplesmente envie os três ângulos de um triângulo e eu te direi qual tipo de triângulo ele é!\n\n");
    scanf("%f %f %f", &angulo1, &angulo2, &angulo3);

    if(angulo1 + angulo2 + angulo3 == 180){
        if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90){
            printf("\nDe acordo com os ângulos que você escolheu, podemos afimar que o triângulo é retângulo, pois um dos ângulos é igual a 90º\n");
                }
        if (angulo1 > 90 || angulo2 >90 || angulo3 > 90){
            printf("\nDe acordo com os ângulos que você escolheu, podemos afirmar que o triângulo é obtuso, pois um dos ângulos é maior que 90º\n");
                }
        if (angulo1 < 90 && angulo2 < 90 && angulo3 < 90){
            printf("\nDe acordo com os ângulos que você escolheu, podemos afirmar que o triângulo é Acutângulo, pois os três ângulos são menores que 90º\n");
                }
            }
    else{
        printf("Infelizmente os angulos que você digitou não resultam em um triângulo\n");
    }

    return 0;
}
