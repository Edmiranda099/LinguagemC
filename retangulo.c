#include <stdio.h>
#include <math.h>
int main()
{
    double base, altura, Area, Perimetro, diagonal;

    printf("Digite a base\n");
    scanf("%lf", &base);
    printf("Digite a altura\n ");
    scanf("%lf", &altura);

    Area = base * altura;
    Perimetro = 2 * (base + altura);

    diagonal = sqrt(altura * altura + base * base);

    printf("Area = %.4lf\n", Area);
    printf("Perimetro = %.4lf\n", Perimetro);
    printf("Diagonal = %.4lf\n", diagonal);

    return 0;
}