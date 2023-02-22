#include<stdio.h>
int main()
{
    int num1, num2;
    float div;
    printf("Enter two number: ");
    scanf("%d%d", &num1, &num2);
    if (num2==0)
    {
        printf("\nDivision is not possible.");
    }
    else  
    {
        div = (float)num1 / (float)num2;
        printf("\nDivision= %.2f", div);
    }
    
    return 0;
}