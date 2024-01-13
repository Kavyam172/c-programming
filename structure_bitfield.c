#include<stdio.h>

typedef struct date{
    int d : 10;
    int m : 10;
}date;

int main()
{
    date today;
    printf("%d\n", sizeof(today));
    today.d = 1000;// answer galat ayega kyunki '1000' ko 10 bits mein store nhi kr skte, to overflow ho jayega.
    printf("%d\n",today.d);
    return 0;
}