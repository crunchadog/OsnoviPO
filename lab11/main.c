#include <stdio.h>
#include "circle.h"


int main() {
    printf("Enter radius: ");
    double r;
    scanf("%lf", &r);
    struct Cirlce h = {r};
    calcLenght(&h);
    calcSquare(&h);


    printf("Perimeter = %.4lf\n", h.lenght);
    printf("Square = %.4lf", h.square);
    return 0;

}