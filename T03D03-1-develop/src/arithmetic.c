#include <stdio.h>


int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%d %d %d ", sum(a, b), sub(a, b), mul(a, b));
    if (b == 0)
 printf ("n/a");
        else
        printf ("%.0f", a/b);

}

int sum(int a, int b){
    return (a + b);
}

int sub(int a, int b){
    return (a - b);
}

int mul(int a, int b){
    return (int) a * b;
}

