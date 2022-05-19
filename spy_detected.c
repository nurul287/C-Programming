/**
 * @file share_gift_friends.c
 * @author Nurul Alam (nurulalamarif2@gmail.com)
 * @brief  Problem set:- B - Spy Detected! CodeForces - 1512A  (https://codeforces.com/problemset/problem/1512/A)
 * @version 0.1
 * @date 2022-05-19
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

void find_isolated_number(int arr[], int n);
int main()
{
    int n, k;
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &n);
        int arr[n + 1];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        find_isolated_number(arr, n);
    }
}

void find_isolated_number(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {

        if (arr[0] != arr[i])
        {
            if (i != n - 1)
            {
                if (arr[0] != arr[i + 1])
                {
                    printf("%d\n", 1);
                }
                else
                {
                    printf("%d\n", i + 1);
                }
            }
            else
            {
                if (arr[0] == arr[i - 1])
                {
                    printf("%d\n", i + 1);
                }
                else
                {
                    printf("%d\n", 1);
                }
            }

            break;
        }
    }
}