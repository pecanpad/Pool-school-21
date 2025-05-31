#include <stdio.h>

int main (void) {
    float a, b;
    char c;

    scanf("%f %f%c", &a, &b, &c);

    if (a == (float)a && b == (float)b && c == '\n')
{
    if (a*a + b*b <25)
    {
        printf("GOTCHA");
        } else {
        printf ("MISS");

        }
            } else {
              printf ("n/a\n");
        }
        return 0;
}
