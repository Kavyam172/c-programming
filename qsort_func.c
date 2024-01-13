#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b){
    return *(int *)b - *(int *)a;
}

int main()
{
    int arr[]={1,5,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    qsort(arr,n,sizeof(arr[0]),cmp);
    for(int i = 0;i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}