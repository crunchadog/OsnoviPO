#include <stdio.h>

int main (void) {
    int min_val = 0;
    int max_val = 1000;
    int num;
   scanf("%d", &num);
    printf ("Number %d is inside range %d...%d :  %d  \n", num,
            min_val, max_val, min_val <= num && num <= max_val);

   int num2;
   scanf("%d", &num2);
   int bit = 1 & (num2 << 3);
   printf("%d", bit);
}
