#include <stdio.h>

int main()
{
    int a, b;//do integer declare kr diya
    printf("Enter number a\n");//print statement
    scanf("%d", &a);//user se value lene ke liye, &a-->address of a

    printf("Enter number b\n");//print statement
    scanf("%d", &b);

    printf("The sum is %d\n",a+b);

    // return 0;
}