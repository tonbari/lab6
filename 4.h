#include <stdio.h>


#define False 0
#define True 1

int task_1(int *array, int size) {
    for (int i = 0; i < size - 1; i++)
        if (array[i] > array[i + 1])
            return False;
    return True;
}

int task_2(int *array, int size, int x) {
    for (int i = 0; i < size; i++)
        if (array[i] == x)
            return i;
    return -1;

}

float task_3(int *array, int size) {
    int k = size - 2, i, j, p = 1;
    float sum;
    for (i = 0; i < size; i++) {
        if (array[i] < 0) {
            k = i;
            break;
        }
    }
    for (i = 0; i < k; i++) {
        for (j = 0; j <= i; j++) p *= array[i];
        sum += p;
    }
    return sum;
}

int task_4(int *array, int size) {
    int max = array[0] + array[size - 1];
    for (int i = 1; i < (size / 2); i++)
        if (array[i] + array[size - i - 1] > max)
            max = array[i] + array[size - i - 1];
    return max;
}

int task_5(int *array, int size) {
    int min = array[0] * array[1];
    for (int i=1; i < size - 1; i++) {
        if (array[i] * array[i+1] < min)
            min = array[i] * array[i+1];
    }
    return min;
}