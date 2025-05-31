#include <stdio.h>
#include <stdlib.h>

#include "../data_libs/data_io.h"
#include "data_process.h"

void main() {
    double *data;
    int n;

    scanf("%d", &n);
    // Don`t forget to allocate memory !
    data = (double *)malloc(n * sizeof(double));
    input(data, n);

    if (normalization(data, n)) {
        output(data, n);
    } else {
        printf("ERROR");
    }
    free(data);
}
