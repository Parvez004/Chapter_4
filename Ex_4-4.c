#include<stdio.h>
int main()
{
    int purchase, years;
    float salvage, depreciation;
    printf("Enter the value of Purchase Price, Years of service and Annual Depreciation:\n");
    scanf("%d%d%f", &purchase, &years, &depreciation);
    salvage = purchase + (depreciation * years);
    printf("\nSalvage value= %f", salvage);
    return 0;
}