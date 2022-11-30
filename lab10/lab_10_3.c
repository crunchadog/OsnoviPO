#include "stdio.h"
#include "stdlib.h"
#include "math.h"

//int variable1_arr(int arr[],int num) {
//    for (int i = num; i >= 0; --i) {
//        arr[i] = num;
//        num--;
//    }
//}

//int main() {
//    int num = 0;
//    scanf("%d", &num);
//    int array[num];
//    variable1_arr(array, num);
//    for (int i = 0; i < num; ++i) {
//        printf("%d ", array[i]);
//    }
//}

int* BuildAnArray(int num, int* len) {
    int temp = num;
    while (num > 0) {
        num /=  10;
        (*len)++;
    }

    int *array = (int*) malloc(*len * sizeof(int));
    for (int i = *len - 1; i >= 0; i--) {
        array[i] = temp % 10;
        temp /= 10;
    }
    return array;
}

void output(int arr[],int num) {
    for (int i = 0; i < num; ++i) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int num, len = 0;
    scanf("%d", &num);
    int *arr = BuildAnArray(num, &len);
    output(arr, len);
}

