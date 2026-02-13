long plus(long x, long y);

long sumStore(long x, long y, long *dest)
{
    long t = plus(x, y);
    *dest = t;
    return *dest;
}

#include <stdio.h>
int main()
{
    printf("success\n");
    return 0;
}

long plus(long x, long y)
{
    return (x + y);
}
