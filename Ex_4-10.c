#include<stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter three integer number: ");
    scanf("%d%d%d", &a, &b, &c);
    max = (a>b) ? ((a>c) ? a : c) : (b>c) ? b : c;
    printf("\nLargest value= %d", max);
    return 0;
}