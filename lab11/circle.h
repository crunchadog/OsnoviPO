//
// Created by KirillB on 30.11.2022.
//

#ifndef C_CIRCLE_H
#define C_CIRCLE_H

struct Cirlce {
    double r;
    double lenght;
    double square;
};

void calcLenght(struct Cirlce *temp);
void calcSquare(struct Cirlce * temp);
#endif //C_CIRCLE_H
