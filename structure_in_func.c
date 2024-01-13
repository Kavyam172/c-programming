#include<stdio.h>
struct A
{
    int a;
    int b;
}s1;

void func(int a, int b){
    printf("%d",a+b);
}
int main()
{
    s1.a=10;
    s1.b=10;
    func(s1.a,s1.b);
    return 0;
}