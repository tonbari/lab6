#include <stdio.h>

void task_3(){
    int size;
    printf("Введите количество элементов: ");
    scanf("%d", &size);
    int x[size], y[size];
    for (int i=0;i<size;i++){
        printf("x[%d] = ",i);
        scanf("%d", &x[i]);
        printf("y[%d] = ",i);
        scanf("%d", &y[i]);
    }
}