#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,n;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d",&a);
    n=1;
    do{
        printf("%d X %d= %d\n3",a,n,a*n);
        n+=1;
    }while(n<=10);

    
    
    return 0;
}
