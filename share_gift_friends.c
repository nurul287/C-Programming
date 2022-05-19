/**
 * @file share_gift_friends.c
 * @author Nurul Alam (nurulalamarif2@gmail.com)
 * @brief  Problem set:- A - Presents CodeForces - 136A (https://codeforces.com/problemset/problem/136/A)
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
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &k);
        arr[k] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
}