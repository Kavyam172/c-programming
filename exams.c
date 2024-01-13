#include <stdio.h>
int main()
{
    char a[100];
    printf("Which exams did you pass(1 for maths,2 for science,3 for both)\n");
    scanf("%s",&a);
    if (a == "maths,science"){
        printf("You get 45 points.");
    }
    else {
        printf("You get 15 points");
    }
    return 0;
}
