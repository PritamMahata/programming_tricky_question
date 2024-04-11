#include <stdio.h>
int main()
{
    int a = +2, b, c, d, e, f;
    e = !a;      // test
    // a = -a - a + !a;
    // b = -a;      // test
    // c = -a - -a;  // test
    // d = -a + -a; // test
    // f = -a + !0; // test
    printf("a is  %d\n", a);
    printf("b is  %d\n", b);
    printf("c is  %d\n", c);
    printf("d is  %d\n", d);
    printf("e is  %d\n", e);
    printf("f is  %d\n", f);
    return 0;
}