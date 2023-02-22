#include<stdio.h>
#include<math.h>
int main()
{
    float root;
    double square;
    printf("Number\tRoot\tSquare");
    for (int i = 0; i < 101; i++)
    {
        root = sqrt(i);
        square = pow(i,2);
        printf("\n%d\t%.2f\t%.0lf", i, root, square);
    }
    return 0;
}