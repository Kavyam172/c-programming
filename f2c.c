#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value:\n");
    scanf("%d",&a);
    printf("%d celcius",((a-32)*5)/9);
    return 0;
}