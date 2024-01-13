#include<stdio.h>
#pragma pack(1)// to remove padding from structure.
struct A
{
    char c;
    int i;
    double d;

};
struct B
{
    char c;
    double d;
    int i;
};
struct C
{
    int i;
    char c;
    double d;
};
struct D
{
    int i;
    double d;
    char c;
};

int main()
{
    struct A s1={'c',2,1.234};
    struct B s2={'b',1.124,3};
    struct C s3={1,'e',2.3};
    struct D s4={8,2.9,'p'};

    printf("s1:%d\ns2:%d\ns3:%d\ns4:%d",sizeof(s1),sizeof(s2),sizeof(s3),sizeof(s4));
    return 0;
}