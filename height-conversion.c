#include <stdio.h>

int main()
{
    int height;
    int feet;
    int inches;
    printf("Enter height is inches:");
    scanf("%d", &height);
    feet = height / 12;
    inches = inches % 12;

    printf("Your height is %d feet %d inches", feet, inches);
    return 0;
}