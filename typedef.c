#include<stdio.h>

struct student
{
    int roll;
    int marks;
};

typedef struct student student;// user defined data type pe typedef


int main(int argc, char const *argv[])
{
    // datatypes ko nickname dene ke liye use krte hain
    typedef int i;
    i a;// ab mein int ki jagah a use kr skta hu
    a=1;
    printf("%d\n",a);

    student s1;
    s1.roll=5;
    printf("%d",s1.roll);
    
    return 0;
}
