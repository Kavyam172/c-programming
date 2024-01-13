#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int main()
{
    //function pointer - function ke code ki storage ka adress pointer main store kiya
    //syntax - return_type (*pointer_name)(parameter of function)

    int i1 = 10, i2 = 20;
    int (*ptr)(int,int);//integer function pointer that takes 2 integers as parameters
    ptr = &add;
    printf("%d",ptr(i1,i2)); 
    return 0;
}