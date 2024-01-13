#include <stdio.h>
int main()
{
    /*format specifiers
    %d--int
    %f--float--%2.4f(2 characters(before) and 4 decimal),%-2.4f(2 charcters(after) and 4 decimal)
    %c--char
    %l--long
    %lf--double
    %Lf--long double*/
    int a=1;
    float b=1.1;
    printf("a=%d,b=%-20.2f thanks",a,b);
    return 0;
}
