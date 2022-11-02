#include "stdio.h";

int main() {
    int num;
    scanf("%d", &num);
    int A[num][num], B[num][num], C[num][num];

    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < num; ++j) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < num; ++j) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < num; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < num; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}