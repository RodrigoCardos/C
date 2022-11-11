#include <stdio.h>

int main() {
    int N, maior;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int mat[N][10], maiorlinha[N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

     for (int i = 0; i < N; i++) {
        maior = mat[i][0];
        for (int j = 1; j < N; j++) {
            if (maior < mat[i][j]) {
                maior = mat[i][j];
            }
        }
        maiorlinha[i] = maior;
    }

    printf("MAIOR ELEMENTO DE CADA LINHA:\n");

    for (int i = 0; i < N; i++) {
		printf("%d\n", maiorlinha[i]);
    }

    return 0;
}
