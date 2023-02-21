#include<stdio.h>
#include<math.h>
int main()
{
    float EOQ, TBO, demand, setup, holding;
    printf("Enter the value of Demand rate, Setup costs and Holding costs per item per unit time:\n");
    scanf("%f%f%f", &demand, &setup, &holding);
    EOQ = 2 * demand * setup / holding;
    EOQ = sqrt(EOQ);
    TBO = (2 * setup) / (demand * holding);
    TBO = sqrt(TBO);
    printf("\n");
    printf("EOQ = %.2f\nTBO = %.2f", EOQ, TBO);
    return 0;
}