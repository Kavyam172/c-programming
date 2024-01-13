#include <stdio.h>
#include <string.h>

typedef struct Employee{//seperate nesting
    int id;
    char job[50];
} employee; 

typedef struct Company
{
    char name[20];
    int reg_id;
    employee e1,e2,e3;
} company;

typedef struct Parent{//embedded nesting
    char name[20];
    struct Child{
        char name[20];
    }c1,c2;
} parent;

int main(int argc, char const *argv[])
{
    company c1; 
    strcpy(c1.name,"Samsung");
    c1.reg_id=1234;

    c1.e1.id=1;
    c1.e2.id=2;
    c1.e3.id=3;

    strcpy(c1.e1.job,"DBA");
    strcpy(c1.e2.job,"HR");
    strcpy(c1.e3.job,"JE");
    return 0;
}
