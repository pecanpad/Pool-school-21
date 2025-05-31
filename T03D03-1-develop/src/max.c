#include <stdio.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    if (a == (int)a && b == (int)b){
        if (a > b) {
            printf ("%.0f", a);
        } else if (a < b) {
                printf ("%.0f", b);
        }       else if (a == b) {
                    printf ("Chisla ravni");
        }
    }else {
        printf ("n/a\n");
    }
}
