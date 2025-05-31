#include <stdio.h>
#include <math.h>

 int main (void) {
     float x, y;
     scanf ("%f", &x);
     if (x == (int)x) {
y = 7e-3 * pow(x, 4) + ((22.8 * pow (x,1.0/3.0)- 1e3) * x +3) / (x*x / 2) - x * pow ((10 + x), (2 /x))-1.01;
printf ("%.1f", y);
    }
    else {
        printf ("n/a\n");
    }
    return 0;
}
