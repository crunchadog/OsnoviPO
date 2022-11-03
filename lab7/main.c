#include "stdio.h"
#include "stdlib.h"

enum Enterprises {
    ЗАО,
    ООО,
    ИП
};

int main() {
    enum Enterprises first, second, third;
    first = ЗАО;
    second = ООО;
    third = ИП;

    printf("%d", second);

}