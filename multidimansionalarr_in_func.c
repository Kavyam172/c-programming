#include<stdio.h>
void func(int arr[2][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\n",arr[i][j]);
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    int arr[][2]={{1,2},{3,4}};
    func(arr);
    return 0;
}
