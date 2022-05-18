#include <stdio.h>
#include <string.h>

char *remove_duplicate(char str[]);

int main()
{
    int n;
    char str[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        printf("%s\n", remove_duplicate(str));
    }

    return 0;
}

char *remove_duplicate(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[j] == str[i])
            {
                for (int k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
            }
        }
    }
    return str;
}
