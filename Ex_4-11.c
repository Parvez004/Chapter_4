#include<stdio.h>
int main()
{
    int m, n, multi;
    printf("Enter the value of m and n: ");
    scanf("%d%d", &m, &n);
    if(m % n == 0)
    {
        printf("\nm is a multiple of n");

    }
    else
    printf("\nm is not a multiple of n");
}