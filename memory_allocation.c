#include<stdio.h>
#include<stdlib.h>//dynamic memory allocation ke functions iss library mein hote hain
int main(int argc, char const *argv[])
{
    /*MEMORY ALLOCATION FUNCTIONS
        1.malloc()-- memory allocation
        2.calloc()-- contiguous memory allocation 
        3.free()-- free allocated memory
        4.realloc()-- reallocate memory
    */
   

//    int* ptr;
//    ptr = (int*)malloc(3*sizeof(int));
//    for (int i = 0; i < 3; i++)
//    {
//     scanf("%d",ptr+i);
//    }
//    for (int i = 0; i < 3; i++)
//    {
//     printf("%d ",*(ptr+i));
//    }
   
   int* ptr;
   ptr = (int*)calloc(3,sizeof(int));
   for (int i = 0; i < 3; i++)
   {
    scanf("%d",ptr+i);
   }
   for (int i = 0; i < 3; i++)
   {
    printf("%d ",*(ptr+i));
   }
   printf("\n");

   ptr = (int*)realloc(ptr,4*sizeof(int));
   for (int i = 0; i < 4; i++)
   {
    scanf("%d",ptr+i);
   }
   for (int i = 0; i < 4; i++)
   {
    printf("%d ",*(ptr+i));
   }
   
   free(ptr);
    return 0;
}

