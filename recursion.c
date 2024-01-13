#include <stdio.h>
int factorial(int a)
{
    if (a==0){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }

}

int main(int argc, char const *argv[])
{
    int a;
    scanf("%d",&a);
    int ans=factorial(a);
    printf("%d",ans);
    return 0;
}
