#include <stdio.h>
int main(int argc, char const *argv[])
{
    label:
        printf("Label\n");
        goto end;
    hello:
        printf("Hello world\n");
        goto label;//got se ek particular labeled jagah pr ja skte aahin
    end:
        printf("end\n");
        goto hello;
    return 0;
}
// GOTO KO NESTED LOOPS MEIN USE KR SKTE HAI JB SAARE LOOPS SE BAHAR AANA HO
