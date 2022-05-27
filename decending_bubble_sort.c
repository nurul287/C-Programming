#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int n)
{
    for (int steps = 0; steps < n; steps++)
    {
        for (int i = n - 1; i > 0; i--)
        {
            if (arr[i] > arr[i - 1])
            {
                swap(&arr[i], &arr[i - 1]);
            }
        }
    }
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
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}
