#include "data_sort.h"

#include <stdio.h>

void sort(double *data, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (data[i] < data[j]) {
                swap(data, i, j);
            }
        }
    }
}

void swap(double *data, int i, int j) {
    int x = data[i];
    data[i] = data[j];
    // printf("первая замена%d %d\n", a[i], a[j]);
    data[j] = x;
    // printf("вторая замена%d %d\n", a[i], a[j]);
}
