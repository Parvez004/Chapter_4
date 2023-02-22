#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter a four digits integer number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("\nResult= %d", sum);
    return 0;
}