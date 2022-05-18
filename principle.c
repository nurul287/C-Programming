#include <stdio.h>

int main()
{
    int principal, time;
    float rate, interest;
    printf("Enter principal:");
    scanf("%i", &principal);
    printf("Enter time:");
    scanf("%i", &time);
    printf("Enter rate:");
    scanf("%f", &rate);
    interest = ((float)principal * (float)time * rate) / 100;
    printf("Simple Interest = %f\n", interest);
    printf("Principal + Interest = %.1f", (float)principal + interest);
    return 0;
}