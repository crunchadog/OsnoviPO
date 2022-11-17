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

#include "stdio.h"

#define CARD_READER_ON = 1;
#define CARD_READER_OFF = 0;
#define ACTIVE_SD_ON = 1;
#define ACTIVE_SD_OFF = 0;
#define ACTIVE_COMPACT_ON = 1;
#define ACTIVE_COMPACT_OFF = 0;
#define ACTIVE_MEMORY_FLASH_ON = 1;
#define ACTIVE_MEMORY_FLASH_OFF = 0;

struct card_reader
{
    unsigned short on : 1;
    unsigned short activeSd : 2;
    unsigned short activeCompactFlash : 3;
    unsigned short activeMemoryStick : 4;
};

void compare(int value) {
    struct card_reader cardReader;
    if (value == 1) {
        cardReader.on CARD_READER_ON
        printf("On\n");
    } else {
        cardReader.on CARD_READER_OFF
        printf("Off\n");
    }
    if (value == 2) {
        cardReader.activeSd ACTIVE_SD_ON
        printf("On\n");
    } else {
        cardReader.activeSd ACTIVE_SD_OFF
        printf("Off\n");
    }

    if (value == 3) {
        cardReader.activeCompactFlash ACTIVE_COMPACT_ON
        printf("On\n");
    } else {
        cardReader.activeCompactFlash ACTIVE_COMPACT_OFF
        printf("Off\n");
    }

    if (value == 4) {
        cardReader.activeMemoryStick ACTIVE_MEMORY_FLASH_ON
        printf("On\n");
    } else {
        cardReader.activeMemoryStick ACTIVE_MEMORY_FLASH_OFF
        printf("Off\n");
    }
}

int main() {
    short key;
    scanf("%d", &key);
    compare(key);
}
