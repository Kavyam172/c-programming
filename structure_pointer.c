#include<stdio.h>
struct A
{
    int a;
    char b;
};

int main()
{
    struct A *ptr;
    (ptr->a)=100;
    printf("%d",(ptr->a)); 
    return 0;
}
