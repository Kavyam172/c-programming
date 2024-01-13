#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    switch(a){//switch expression(a) must be int or char
        case 1://case value must be int or char,case must come inside switch
            printf("value is 1");
            break;
        case 2:
            printf("value is 2");
            break;
        default:
            printf("value is niether 1 nor 2");
    }

    return 0;
}
