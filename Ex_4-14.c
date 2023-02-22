#include<stdio.h>
#include<math.h>
int main()
{
    float rad, si, co;
    int x=0;
    printf("x(degrees)\tsin(x)\tcos(x)");
    do
    {
        rad = x * M_PI /180.0;
        si = sin(rad);
        co = cos(rad);
        printf("\n%d\t%.2f\t%.2f", x, si, co);
        x += 15;
    } while (x<=180);
    return 0;
}