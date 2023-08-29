#include <stdio.h>

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int sort(int arr[], int n)
{
    // Logic of selection sort algorithm
    for (int steps = 0; steps < n; steps++)
    {
        int minElement = arr[steps], pos = steps;
        for (int i = steps; i < n; i++)
        {
            if (arr[i] < minElement)
            {
                minElement = arr[i];
                pos = i;
            }
        }
        swap(&arr[steps], &arr[pos]);
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}