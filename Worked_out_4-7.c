#include<stdio.h>
int main()

{
    int i;
    float sum=0;
    for(i=1; i<=10; ++i)
    {
        sum = sum + 1/(float)i;
        printf("\n%2d %6.4f", i, sum);
    }
    return 0;
}