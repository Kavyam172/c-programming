#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*1d arrays-- vectors
    2d arrays-- matrices*/
    int arr[3];//declare an array
    arr[0]=49;
    arr[1]=36;
    arr[2]=11;
    int test[]={1,2,3,4,5};//iss tarah no of elements specify nhi krna padta
    printf("%d\n",test[0]);//access an element
    int test2[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number\n");
        scanf("%d",&test2[i]);
    }
    printf("test2:\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d,",test2[j]);
    }
    
    return 0;
}
