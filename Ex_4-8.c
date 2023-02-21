#include<stdio.h>
#include<math.h>
int main()
{
    float f, L, C, R;
    printf("Inductance = ?\n");
    scanf("%f", L);
    printf("\nResistance = ?\n");
    scanf("%f", &R);
    printf("\nFrequency: ");
    for ( C = 0.01; C < 0.1; C +=0.01)
    {
        f = pow(R,2) / (4 * pow(C,2));
        f = (1 / (L * C)) - f;
        f = sqrt(f);
        printf("\n%.4f", f);
    }
    return 0;
}