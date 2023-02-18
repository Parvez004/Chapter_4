#include<stdio.h>
int main()
{
    float num;
    int intnum;
    printf("Enter a floating number: ");
    scanf("%f", &num);
    intnum = (int)num;
    if(intnum < 0)
    {
        intnum *= -1;
    }
    intnum = intnum % 10;
    printf("\n%d", intnum);
    return 0;
}