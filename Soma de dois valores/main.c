#include <stdio.h>

int main() {

    int A, B, X;

    printf("Digite um valor para ser somado\n");
    scanf("%i", &A);

    printf("Digite outro valor para ser somado\n");
    scanf("%i", &B);

    X = A + B;

    printf("A soma dos dois valores que voce inseriu eh igual a = %i\n", X);

    return 0;
}
