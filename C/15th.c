#include <stdio.h>
int main()
{
    int x;
    for (int i = -1; i <= 10; i++)
    {
        // printf("%d Hello\n", i);
        if (i < 5)
        {
            continue;
        }
        else
            break;
    }
}