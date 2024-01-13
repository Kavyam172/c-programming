#include<stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    scanf("%c",&c);
    switch(c){
        case 'a':
        printf("a");
        case 'e':
        printf("e");
        break;
    }
    
    return 0;
}