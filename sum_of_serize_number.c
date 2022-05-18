#include <stdio.h>
int main()
{
    int num, sum;
    scanf("%d", &num);
    sum = num * (num + 1) / 2;
    printf("sum of %d = %d \n", num, sum);
    return 0;
}