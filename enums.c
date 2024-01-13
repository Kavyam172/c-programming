#include<stdio.h>

typedef enum ChessPiece {
    Rook= 5, Queen=9
} ChessPiece;

int main()
{
    printf("%f\n", (float)Rook);
    printf("%d\n", Rook);  
    
    return 0;
}