#include <stdio.h>

int main (void) {
    int num, num2;
    scanf("%d", &num);
    scanf("%d", &num2);
    switch (num)
    {
        case 16:
            printf("%X\n", num2);
            printf("%X\n", num2 << 3);
            printf("%X\n", ~(num2 << 3));
            printf("%X\n", (num2 ^ 3));
            break;
        case 10:
            printf("%d", num2);
            break;
        case 8:
            printf("%o", num2);
            break;
        case 0:
            return 0;
            break;
        default:
            printf("Again");
            break;
    }
}