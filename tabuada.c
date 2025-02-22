#include <stdio.h>

int main(){
    int i, soma, n;
    printf("Deseja a tabuada para qual valor?");
    scanf("%d", &n);
    for(i = 1 ; i <= 10 ; i++ )
    {
        soma = soma + n;
       printf("%d x %d = %d \n", n, i, soma);
    }
    return 0;
}