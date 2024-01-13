#include <stdio.h>
/*Actual Parameters--Jo parameters ham calling ke time dete hain
Formal Parameters--vo local variables jinme function running ke time par args ki values asign ho jati hai */

int add(int a,int b){//a,b are formal parameters jinme actual parameters ki value assign hogi function run krne ke vakt
    return a+b;
}

int main(int argc, char const *argv[])
{
    int x=1,y=2;//actual parameters jo function call mein diye jayenge
    int s=add(x,y);
    printf("%d",s);
    return 0;
}
