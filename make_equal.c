/**
 * @file make_equal
 * @author Nurul Alam (nurulalamarif2@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-05-18
 *
 * @copyright Copyright (c) 2022

 #Problem statement

 * You are given N items. The i’th item has value Ai. You can increase any item’s value by any amount. You need to make the value of all the items equal by doing this operation any number of times. What is the minimum total amount needed to make all the items equal?
 *
 */

#include <stdio.h>

int largest(int arr[], int size);

int main()
{
    int n;
    scanf("%d", &n);
    int num_of_arr[n];
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num_of_arr[i]);
    }
    if (n == 1)
        printf("0");
    else
    {
        int largest_num = largest(num_of_arr, n);
        for (int i = 0; i < n; i++)
        {

            if (num_of_arr[i] < largest_num)
            {
                total += largest_num - num_of_arr[i];
            }
        }
        printf("%d\n", total);
    }

    return 0;
}

int largest(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}