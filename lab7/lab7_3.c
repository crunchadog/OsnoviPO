#include "stdio.h"

union {
    struct Card_reader
    {
        unsigned int on : 1;
        unsigned int activeSd : 2;
        unsigned int activeCompactFlash : 3;
        unsigned int activeMemoryStick : 4;
    };
};

int main() {
    struct Card_reader card;
    printf("1 - On, 2 - activeSd, 3 - activeCompactFlash, 4 - activeMemoryStick\n");
    short key;
    scanf("%d", &key);
    if (key == 1) {
        card.on = 1;
        printf("On\n");
    } else {
        card.on = 0;
        printf("Off\n");
    }

    if (key == 2) {
        card.activeSd = 2;
        printf("On\n");
    } else {
        card.activeSd = 0;
        printf("Off\n");
    }

    if (key == 3) {
        card.activeCompactFlash = 3;
        printf("On\n");
    } else {
        card.activeCompactFlash = 0;
        printf("Off\n");
    }

    if (key == 4) {
        card.activeMemoryStick = 4;
        printf("On\n");
    } else {
        card.activeMemoryStick = 0;
        printf("Off\n");
    }
}