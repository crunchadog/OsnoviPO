#include <stdio.h>

int main (void) {
    int num, max_num, min_num;
   scanf("%d", &num);
   max_num = 1000 / num;
    min_num = num / 1;
    printf("\n%d\n", max_num & min_num);

   int num2;
   scanf("%d", &num2);
   int bit = 1 & (num2 << 3);
   printf("%d", bit);
}
