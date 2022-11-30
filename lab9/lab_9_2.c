#include <stdio.h>
#define free_minute 499

int condition(int value , int value2, int duration, int total ) {
    if (duration > free_minute) {
        total = (free_minute * value + (duration - free_minute) * value2);
    } else {
        total = duration * value;
    }

    return total;
}

void inputOutput(int value, int value2, int duration, int total) {
    printf("Subscription fee:");
    scanf("%d", &value);
    printf("Over limit:");
    scanf("%d", &value2);
    printf("Duration razgovora:");
    scanf("%d", &duration);
    printf("%d", condition(value, value2, duration, total));
}

int main() {
    int val1 = 0, val2 = 0, duration = 0, total = 0;
    inputOutput(val1, val2, duration, total);

}
