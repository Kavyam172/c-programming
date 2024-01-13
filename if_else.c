#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>b){
        if (a>0){
            printf("Hello2\n");
        }
        printf("Hello");
    }
    else if (a==b){
        printf("Hello3");
    }
    
    else{
        printf("Bye");
    }
    
    return 0;
}
