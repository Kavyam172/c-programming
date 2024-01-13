#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    float km= 0.62137119,in=0.0833333,cm=0.393701,pd=0.453592,in2=0.0254;
    printf("Convert:\n1 for Km to miles\n2 for inches to feet\n3 for cms to inches\n4 for pound to Kgs\n5 for inches to meters\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        // float km= 0.62137119;
        printf("Enter the amount to be converted\n");
        scanf("%d",&b);
        printf("Converted amount: %f miles",km*b);
        break;
    case 2:
        // float in=0.0833333;
        printf("Enter the amount to be converted\n");
        scanf("%d",&b);
        printf("Converted amount: %f feet",in*b);
        break;
    case 3:
        // float cm=0.393701;
        printf("Enter the amount to be converted\n");
        scanf("%d",&b);
        printf("Converted amount: %f inches",cm*b);
        break;
    case 4:
        // float pd=0.453592;
        printf("Enter the amount to be converted\n");
        scanf("%d",&b);
        printf("Converted amount: %f Kg",pd*b);
        break;
    case 5:
        // float in2=0.0254;
        printf("Enter the amount to be converted\n");
        scanf("%d",&b);
        printf("Converted amount: %f meter",in2*b);
        break;
    default:
        printf("Invalid Entry");
        break;
    }
    return 0;
}
