#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    float angulo1, angulo2, angulo3;

    setlocale(LC_ALL, "Portuguese");
    printf("Ol�, bem vindo ao TRIANGLE IDENTIFIER, simplesmente envie os tr�s �ngulos de um tri�ngulo e eu te direi qual tipo de tri�ngulo ele �!\n\n");
    scanf("%f %f %f", &angulo1, &angulo2, &angulo3);

    if(angulo1 + angulo2 + angulo3 == 180){
        if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90){
            printf("\nDe acordo com os �ngulos que voc� escolheu, podemos afimar que o tri�ngulo � ret�ngulo, pois um dos �ngulos � igual a 90�\n");
                }
        if (angulo1 > 90 || angulo2 >90 || angulo3 > 90){
            printf("\nDe acordo com os �ngulos que voc� escolheu, podemos afirmar que o tri�ngulo � obtuso, pois um dos �ngulos � maior que 90�\n");
                }
        if (angulo1 < 90 && angulo2 < 90 && angulo3 < 90){
            printf("\nDe acordo com os �ngulos que voc� escolheu, podemos afirmar que o tri�ngulo � Acut�ngulo, pois os tr�s �ngulos s�o menores que 90�\n");
                }
            }
    else{
        printf("Infelizmente os angulos que voc� digitou n�o resultam em um tri�ngulo\n");
    }

    return 0;
}
