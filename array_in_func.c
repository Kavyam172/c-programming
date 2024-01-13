#include <stdio.h>
// declare array as parameter--if you change the array in function it gets reflected in main()
// pass base address to function--base address se dusre elements ke address ko access kr skte hain using pointer arithmetic
int avg(int arr[],int n){//declare array as parameter
    int s=0;
    for (int i = 0; i < n; i++)
    {
        s+=arr[i];
    }
    return s/n;
}
void pr(int* a,int n){//pass base address
    for (int i=0;i<n;i++){ 
        printf("%d",*(a+i));
    }
}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3};
    int a=avg(arr,3);
    printf("%d\n",a);
    pr(arr,3);
    return 0;
}
