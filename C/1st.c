#include <stdio.h>
int main()
{
    printf("%d %d %d", sizeof(3.14f), sizeof(3.14), sizeof(314));
    // result is 4 8 4
    return 0;
}