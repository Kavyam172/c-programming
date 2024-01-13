#include <stdio.h>
// call by value--actual parameter ki value copy hoti hai formal parameter mein,--isme actual params ki value mein koi farak nahi aata
// call by reference--actual value ka address copy hota hai,actual params ki value change kr sakte hain
int add(int a,int b){//call by value
    return a+b;
}

void swap(int* a,int* b){//call by reference
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("New values=%d,%d",*a,*b);
}

int main(int argc, char const *argv[])
{
    int x=1,y=2;
    int s=add(x,y);//call by value
    printf("%d\n",s);
    swap(&x,&y);//call by reference
    return 0;
}
