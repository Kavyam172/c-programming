#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a=2;
    int* ptr=&a;//pointer stores the memory address of a variable
    int* ptrnull=NULL;//NULL POINTER,kisi cheez pr point nhi kr rha
    int* p=89;
    // agr NULL nhi lagaya to garbage value print ho jayegi
    printf("%p\n",ptr);//%p used for pointers
    // DEREFERENCE
    printf("%d",*ptr);//printing value of variable stored in pointer

    return 0;
}
