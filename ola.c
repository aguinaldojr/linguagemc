#include <stdio.h>
int main()
{
    double a, b, soma;
    printf("Digite: ");
    scanf("%lf", &a);
    printf("Digite: ");
    scanf("%lf", &b);
    soma = a+b;
    printf("Resultado: %.2lf \n", soma);
    return 0;
}
