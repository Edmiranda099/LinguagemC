#include <stdio.h>

int main(){

    int num_um, num_dois;

    printf("Digite dois numeros: ");
    scanf("%d", &num_um);
    scanf("%d", &num_dois);
    
    while (num_um != num_dois) {
        if (num_um < num_dois) {
            printf("CRESCENTE\n");
        }
        else {
            printf("DECRESCENTE\n");
        }
        printf("Digite outros dois numeros:\n");
        scanf("%d", &num_um);
        scanf("%d", &num_dois);
    }
    return 0;
}