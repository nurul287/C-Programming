#include <stdio.h>
#include <string.h>

int main()
{
    char Str[101];
    scanf("%s", Str);
    int count[128] = {0};
    int distint_ch = 0;
    for (int i = 0; i < strlen(Str); i++)
    {
        count[Str[i]] = 1;
    }

    for (int i = 0; i < 128; i++)
    {
        distint_ch += count[i];
    }

    if (distint_ch % 2 == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
