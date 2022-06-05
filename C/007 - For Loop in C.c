#include <stdio.h>

int main()
{
    int start, end;
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++)
    {
        if (1 <= i <= 9 && i == 1)
            printf("one\n");
        else if (1 <= i <= 9 && i == 2)
            printf("two\n");
        else if (1 <= i <= 9 && i == 3)
            printf("three\n");
        else if (1 <= i <= 9 && i == 4)
            printf("four\n");
        else if (1 <= i <= 9 && i == 5)
            printf("five\n");
        else if (1 <= i <= 9 && i == 6)
            printf("six\n");
        else if (1 <= i <= 9 && i == 7)
            printf("seven\n");
        else if (1 <= i <= 9 && i == 8)
            printf("eight\n");
        else if (1 <= i <= 9 && i == 9)
            printf("nine\n");
        else if (i > 9 && i % 2 == 0)
            printf("even\n");
        else if (i > 9 && i % 2 != 0)
            printf("odd\n");
    }

    return 0;
}
