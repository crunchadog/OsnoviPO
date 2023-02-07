#include "iostream"
#include "header.h"

//void changeHighestNumber(int &a, int &b) {
//    int temp;
//    int *first_num = &a;
//    int *second_num = &b;
//    if (&a > &b) {
//        temp = *first_num % *second_num;
//        *first_num = temp;
//    } else {
//        temp = *second_num % *first_num;
//        *second_num = temp;
//    }
//}

void changeHighestNumberLink(int &a, int &b) {
    int result;
    if (&a > &b) {
        result = a % b;
        a = result;
    } else {
        result = b % a;
        b = result;
    }

}

void changeHighestNumberPointer(int *a, int *b) {
    int result;
    if (*a > *b) {
        result = *a % *b;
        *a = result;
    } else {
        result = *b % *a;
        *b = result;
    }
}