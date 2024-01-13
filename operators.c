#include<stdio.h>

int main()
{
    int a,b;
    a=35;
    b=11;
    // arithmetic operators
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n",a/b);
    // printf("a%b=%d",a%b);

    int c=35;
    float d=11.1628;
    // arithmetic operators
    printf("c+d=%f\n",c+d);
    printf("c-d=%f\n",c-d);
    printf("c*d=%f\n",c*d);//jb int aur float ke beech mein arithmetic operator lgega to float hi return krega
    printf("c/d=%f\n",c/d);
    // printf("a%b=%f",a%b);

    // relational operators
    printf("a==b--%d\n",a==b);
    printf("a!=b--%d\n",a!=b);//1(python mein true) ya 0(python mein false) return krte hain
    printf("a>b--%d\n",a>b);
    printf("a<=b--%d\n",a<=b);

    // logical operators
    printf("1 and 0=%d\n",1&&0);//normal and, or, not operators
    printf("1 and 1=%d\n",1&&1);
    printf("0 and 0=%d\n",0&&0);
    printf("1 or 0=%d\n",1||0);
    printf("1 or 1=%d\n",1||1);
    printf("0 or 0=%d\n",0||0);
    printf("not 1=%d\n",!1);
    printf("not 0=%d\n",!0);

    // bitwise operators
    printf("2 &(bitwise and) 3=%d\n",2&3);
    printf("2 |(bitwise or) 0=%d\n",2|3);
    printf("2 ^(bitwise ex-or) 3=%d\n",2^3);
    /*~->binary ones complement 
    >>--right shift
    <<--left shift*/

    // Assignment operators
    /*= -- assign
    += -- add and assign etc.*/

    // miscellenous operators
    /*sizeof() -- machine pe kitna space le rha hai--sizeof(a)
    &-- address of variable --&a
    * -- pointer--*a
    ?:-- conditional expression
    */
//    2--0010,3--0011==0010--2

    return 0;
}
