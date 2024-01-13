#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*Strings ar array of characters 
    so we make an array of characters to create a string*/
    char a[10]="hello";
    char b[]={'w','o','r','l','d','\0'};//\0 null terminating character hai

    printf("%s",a);//string ke liye %s lgta hai

    printf("%c",a[0]);//string ka ek character access kr rhe hain

    a[0]='j';//character assignment
    printf("%c",a[0]);


    return 0;
}
/*To take string input until a new line is encountered:
we can use '%[^/n]%*c' to take input.
here %[] is the scanset character,^\n is used to specify that input is to be taken until \n,
%*c is used to read the newline character and * indicates that newline character is discarded.
*/