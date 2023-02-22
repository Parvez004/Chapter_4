#include<stdio.h>
#define base 250
#define per_call 1.25
#define free_call 100
int main()
{
    int customer, call_num; 
    float bill;
    printf("Enter Customer code: ");
    scanf("%d", &customer);
    printf("\nEnter the number of call made by the customer: ");
    scanf("%d", &call_num);
    if(call_num < free_call)
    {
        bill = base;
    }
    else
    {
        bill = base + per_call * (call_num - free_call);
    }
    printf("\nBill of customer %d is %.2f", customer, bill);
    return 0;
}