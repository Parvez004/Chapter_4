#include<stdio.h>
#include<math.h>
int main()
{
    float d, u, a, t;
    printf("Enter the value of Initial Velocity: ");
    scanf("%f", &u);
    printf("\nEnter the value of Acceleration: ");
    scanf("%f", &a);
    t = a / u;
    d = (a * pow(t,2)) / 2;
    d = u * t + d;
    printf("\nDistance= %.2f", d);
    return 0;
}