#include <stdio.h>
int main()
{
    double largura, comprimento, valor, Area, preco;

    printf("Digite a largura do terreno:\n");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno:\n ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado:\n ");
    scanf("%lf", &valor);

    Area = comprimento * largura;
    preco = Area * valor;

    printf("Area do terreno = %.2lf\n", Area);
    printf("Preco do terreno = %.2lf\n", preco);
    return 0;
}