#include <stdio.h>

int main()
{
    int matrix1, num1, matrix2, num2;

    scanf("%d %d", &matrix1, &num1);
    int matrix1_1[matrix1][num1];
    for (int i = 0; i < matrix1; ++i) {
        for (int j = 0; j < num1; ++j) {
            scanf("%d", &matrix1_1[i][j]);
        }
    }

    scanf("%d %d", &matrix2, &num2);
    int matrix2_2[matrix2][num2];
    for (int i = 0; i < matrix2; ++i) {
        for (int j = 0; j < num2; ++j) {
            scanf("%d", &matrix2_2[i][j]);
        }
    }

    if (num1 == matrix2) {
        int matrix3[matrix1][num2];
        for (int i = 0; i < matrix1; ++i) {
            for (int j = 0; j < num2; ++j) {
                matrix3[i][j] = 0;
            }
        }

        for (int i = 0; i < num2; ++i) {
            for (int j = 0; j < matrix1; ++j) {
                for (int k = 0; k < num1; ++k) {
                    matrix3[i][j] += matrix1_1[i][k] * matrix2_2[k][j];
                }
            }
        }

        for (int i = 0; i < matrix1; ++i) {
            for (int j = 0; j < num2; ++j) {
                printf("%d ", matrix3[i][j]);
            }
            printf("\n");
        }
    } else
        printf("Error");

    return 0;
}
