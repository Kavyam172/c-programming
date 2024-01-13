#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char str[]="Khushi";
    char str2[]="Name";
    char str3[10];
    char inp[20];
    printf("%d\n",strlen(str));// length of string

    printf("%s\n",strcat(str,str2));//concatenate strings,permanently concatenated

    strcpy(str3,str2);//copy a string
    printf("%s\n",str3);

    printf("%d\n",strcmp(str,str2));//compare a string,return 0 if equal or any other number if not equal

    printf("%s\n",strupr(str));//convert string to upper case

    printf("%s\n",strlwr(str));//convert string to lower case

    printf("%s\n",strrev(str));//reverse string

    printf("Enter a string\n");
    gets(inp);//ek line ka string input

    printf("The entered string is %s:\n",inp);
    puts(inp);//output ke liye function

    return 0;
}
