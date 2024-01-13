#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[3]={1,2,3};
    // array ke naam mein uska base address store hota hai
    int* ptr=arr;//pointer to an integer array
    printf("%d\n",arr);//arr ek integer array ke 0th element ka pointer hota hai
    printf("%d\n",arr[0]);
    printf("%d\n",&arr[0]);//arr likho ya &arr[0] ya ptr likho ek hi baat hai,same address aayega
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",*(ptr+1));
    ptr++;
    /*arr++ nhi kr skta kyunki ye array ke address ko point krta hai jo ki constant hai
    However ptr++ kr skte hain*/
    return 0;
}
