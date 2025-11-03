 // QUESTAO 6 V1
#include <stdio.h> 
#include <math.h>

int main() {
    int n;
    printf("Quantos numeros deseja inserir? ");
    scanf("%d", &n);

    double A[n], B[n];

    for (int i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%lf", &A[i]);
    }

    for (int i = 0; i < n; i++) {
        B[n - 1 - i] = A[i] * A[i];
    }

    printf("\nVetor A:\n");
    for (int i = 0; i < n; i++) printf("%.2lf ", A[i]);

    printf("\nVetor B (quadrados invertidos):\n");
    for (int i = 0; i < n; i++) printf("%.2lf ", B[i]);

    return 0;
}



