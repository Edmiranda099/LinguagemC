#include <stdio.h>

int main(){
    int n, i, j, qtdNegativos;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int matriz[n][n];

    for (int i=0; i<n; i++ )
        for (int j=0; j<n; j++ )
            {
                printf("Elemento [%d,%d]:", i, j);
                scanf ("%d", &matriz[ i ][ j ]);
            }
    printf("DIAGONAL PRINCIPAL:\n");
    for (int i = 0; i < n; i++ )
            {
                printf("%d ", matriz[i][i]);
            }
    
    qtdNegativos = 0;

    for (int i=0; i<n; i++ ){
        for (int j=0; j<n; j++ )
            {
              if(matriz[i][j] < 0){
                qtdNegativos = qtdNegativos +1;
              }
            }
    }
    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", qtdNegativos);

}