#include <stdio.h>

int add(int a, int b)
{
    int res = a + b;
    return (res);
}

int sub(int a, int b)
{
    int res = a - b;
    return (res);
}

int mul(int a, int b)
{
    int res = a * b;
    return (res);
}

int div(int a, int b)
{
    int res;

    if (b == 0)
        return(1);

    res = a / b;
    return (res);
}

int mod(int a, int b)
{
    int res;

    if (b == 0)
        return (1);

    res = a % b;
    return (res);
}
