#include <stdio.h>
#include <string.h>
//structure ek custom data type hai jo user banata hai,baad mein iss datatype ke variables bana skte hain



// variables ko grp krne ke liye, alg-alg dat types ko use kr skte hn
struct A{      //structure declaration
    int a;     //members
    char b;    //alag alag data types ke members ho skte hain
    float c;
    char d[10];
};

int main()
{
    struct A s1;//structure A ka structure variable bna diya
    s1.a=2;     //values assign kri
    s1.b='b';
    s1.c=2.134;
    strcpy(s1.d,"hello");
    printf("1st member is %d\n",s1.a);
    printf("2nd member is %c\n",s1.b);
    printf("3rd member is %.3f\n",s1.c);    
    printf("%s",s1.d);
    struct A s2;//structure A ka structure variable bna diya
    s2.a=5;     //values assign kri
    s2.b='a';
    s2.c=2.4;
    strcpy(s2.d,"world");
    printf("1st member is %d\n",s2.a);
    printf("2nd member is %c\n",s2.b);
    printf("3rd member is %.3f",s1.c);
    printf("%s",s2.d);//structure mein strong value ke liya strcpy() use krenge
    return 0;
}