#include <stdio.h>
#include <stdbool.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
bool is_reverse_sorted(int arr[], int n)
{

    if (n == 1 || n == 0)
    {
        return true;
    }

    return arr[n - 1] <= arr[n - 2] &&
           is_reverse_sorted(arr, n - 1);
}
void selectionSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
        if (is_reverse_sorted(arr, n))
            break;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
        printf(" %d", arr[i]);
    return 0;
}