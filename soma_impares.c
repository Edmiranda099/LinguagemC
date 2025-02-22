#include <stdio.h>

int main(){
    int num_um, num_dois, i, troca, soma;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &num_um, &num_dois);

    if (num_um > num_dois)
        {
            troca = num_um;
            num_um = num_dois;
            num_dois = troca;
        }
        soma = 0;
    for (i = num_um; i < num_dois ; i++)
    {   
        if (i % 2 != 0){
            soma = soma + i;
        }
    }
    printf("SOMA DOS IMPARES = %d\n", soma);
}