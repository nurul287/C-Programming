#include <stdio.h>
int main()
{
    int height, width, area, perimeter;
    printf("Enter height of rectangle:");
    scanf("%d", &height);
    printf("Enter width of rectangle:");
    scanf("%d", &width);
    area = height * width;
    perimeter = 2 * (height + width);
    printf("Area of rectangle is: %d\n", area);
    printf("Perimeter of rectangle is: %d", perimeter);
    return 0;
}