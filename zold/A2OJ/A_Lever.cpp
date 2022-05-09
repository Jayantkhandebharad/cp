#include <stdio.h>
#include <string.h>
char str[1000002];
int main()
{
    long long left = 0, i, right = 0, center;
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == '^')
            break;
    center = i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            if (i < center)
            {
                left = left + (center - i) * (str[i] - '0');
            }
            if (i > center)
            {
                right = right + (i - center) * (str[i] - '0');
            }
        }
    }
    if (right > left)
        printf("right\n");
    else if (left > right)
        printf("left\n");
    else
        printf("balance\n");
    return 0;
}