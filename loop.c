#include <stdio.h>
int main()
{
    int a;
    a=0;
    // FOR LOOP
    for (int i = 0; i < 5; i+=1)//i ko ya to pehle int mein define kr do ye fir loop mein hi
    {
        printf("Hello\n");
    }

    
    // DO WHILE LOOP
    do//do while loop mein pehle execute hota hai then codition check ,so do while loop executes at least once
    {
        printf("Do-While %d\n",a);
        a+=1;
    } while (a<5);

    
    // WHILE LOOP
    a=0;
    while (a<5)
    {
        printf("while %d\n",a);
        a+=1;
    }
    
    return 0;
}
