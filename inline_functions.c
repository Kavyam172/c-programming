#include<stdio.h>

static inline void ph(){
    printf("hello world");
}

int main()
{
    //inline function- small function that are frequently used can be converted into inline function
    //isme compiler ko suggest kr rhe hain ki function ko stack mein dalne ki bajaye function definition ko main mein hi insert kr dega.
    //this improves the execution time as the function need not go to stack
    //compiler may not make a function inline and execute it in the stack

    ph();

    return 0;
}