#include <stdio.h>
void printstar(int i,int j,int n);

int main(int argc, char const *argv[])
{
    // functions general syntax
    /*return_type func(){
        }*/
    //return type mein jb kuch na return krna ho to void lgta hai
    int n,i,j;
    scanf("%d",&n);
    
    printstar(i,j,n);
    return 0;
}
void printstar(int i,int j,int n){
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j <= i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
