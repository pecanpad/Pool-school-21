#include <stdio.h>
#include <stdlib.h>

#include "../data_libs/data_io.h"
#include "decision.h"

int main() {
    double *data;
    int n;
    scanf("%d", &n);
    // Don`t forget to allocate memory !
    data = (double *)malloc(n * sizeof(double));
    input(data, n);

    if (make_decision(data, n)) {
        printf("YES");
    } else {
        printf("NO");
    }
    free(data);
    return 0;
}
