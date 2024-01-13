#include<stdio.h>

int main()
{
    FILE *fptr = NULL;
    fptr = fopen("test.txt", "r"); 
    char ch;
    int c = 1,i = 0;

    while (!(feof(fptr)))    
    {
        i++;
        ch = fgetc(fptr);
        if( ch == ' ' || ch =='\n'){
            c++;
        }
    }
    if (i==1){
        printf("0");
    }
    else{
        printf("%d",c);
    }
    fclose(fptr);
    return 0;
}