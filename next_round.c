/**
 * @file share_gift_friends.c
 * @author Nurul Alam (nurulalamarif2@gmail.com)
 * @brief  Problem set:- C - Next Round CodeForces - 158A   (https://codeforces.com/problemset/problem/158/A)
 * @version 0.1
 * @date 2022-05-19
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int advance = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > 0 && arr[j] >= arr[k - 1])
        {
            advance++;
        }
    }
    printf("%d", advance);
}