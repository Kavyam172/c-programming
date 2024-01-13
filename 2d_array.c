#include <stdio.h>
int main(int argc, char const *argv[])
{
    int mat[2][3]={{1,2,3},{4,5,6}};//2d array mat[rows][columns],no. of columns dena compulsary hai.
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d,",mat[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
