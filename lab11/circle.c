#include "math.h"
#include "circle.h"

void calcLenght(struct Cirlce * temp) {
    temp->lenght = 2 * temp->r * M_PI;
}

void calcSquare(struct Cirlce * temp) {
    temp->square = M_PI * (temp->r * temp->r);
}