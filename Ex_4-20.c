#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the sides of a triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a==b)
    {
        printf("\nIsoceles");
    }
    else if (a==c)
    {
        printf("\nIsoceles");
    }
    else if (b==c)
    {
        printf("\nIsoceles");
    }
    else
    printf("\nNot Isoceles");
    return 0;
    
}