#include "stdio.h"

struct Triangle {
    int side;
};

int main() {
    struct Triangle side_1, side_2, side_3;
    scanf("%d", &side_1.side);
    scanf("%d", &side_2.side);
    scanf("%d", &side_3.side);
    printf("Storona triangla = %d %d %d\n", side_1.side, side_2.side, side_3.side);
    printf("P = %d", (side_1.side + side_2.side + side_3.side));
}