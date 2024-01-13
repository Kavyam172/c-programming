#include <stdio.h>
int fibo(int n){
    if(n==1 || n==2){
        return 1;
    }
    else{
        int a=1,b=1,c;
        for (int i = 3; i <=n; i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
        
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans=fibo(n);
    printf("%d",ans);
    return 0;
}
