#include <stdio.h>
/*4 operators in pointers:-
++
--
+
-*/
int main(int argc, char const *argv[])
{
    int a=3;
    int* ptra=&a;
    printf("%d\n",ptra);
    ptra++;//pointer arithmatic mein 1 int ka size add kr dega
    printf("%d",ptra); 
    return 0;
}
