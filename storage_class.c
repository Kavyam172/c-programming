#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*STORAGE CLASSES
    --Determine the scope of the variable
    --four types:
        1.Automatic--local var
        2.external--global var
        3.Register
        4.Static--static keyword se declare
    */
   for (int i = 0; i < 3; i++)
   {
    static int a=1;
    printf("%d",a);
    a++;
   }
   
    return 0;
}
