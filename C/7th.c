#include <stdio.h>
int main()
{
    int i = 1;
    printf("%d %d %d\n", i, ++i, i++);
    printf("%d %d", i, i++);
    return 0;
}