#include <stdio.h>

int add(int a, float b)
{
    float sum;
    sum = (float)a + b;
    printf("Sum = %.2f", sum);
}

int main()
{
    int n1;
    float n2;
    printf("Number 1 - ");
    scanf("%d", &n1);
    printf("Number 2 - ");
    scanf("%f", &n2);
    add(n1, n2);
    return 0;
}
