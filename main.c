#include <stdio.h>
#include <math.h>

int main() {
   char str[100];
   float num;

   printf("Enter string:");
   gets(str);
   printf("String: ", str);
   puts(str);
   scanf("%f", &num);
   printf("Number: %.2f", num);

   //float a;
   //float z1;
   //printf("Enter a:");
   //scanf("%f", &a);
   //z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos( a + 1) - 2 * pow(2, sin(2 * a)));
   //printf("z1: %.4f",z1);

   //int a;
   //float z2;
   //scanf("%d", &a);
   //z2 = 2*sin(a);
   //printf("2sin(%d = %.4f", a, z2);
}
