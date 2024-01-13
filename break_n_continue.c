#include <stdio.h>
int main(int argc, char const *argv[])
{
    while (1)
    {
        int a;
        scanf("%d",&a);
        if (a==3)
        {
            break;
        }
        else if(a==4){
            continue;
        }
        else{
            printf("%d\n",a);
        }
        
    }
    
    return 0;
}
