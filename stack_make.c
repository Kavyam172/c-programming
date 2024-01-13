#include<stdio.h>
#include<stdbool.h>
typedef struct stack{
    int arr[50];
    int top;//index of top element of stack
    int cap;
}stack;

void init_stack(stack *s1){
    s1 -> top = -1;
    s1 -> cap = 50;
}

void push(stack *s1, int data){
    if (s1 -> top <= s1 -> cap){
        s1 -> top ++;
        s1 -> arr[s1 -> top] = data;
    }
}
void pop(stack *s1){
    if (s1 -> top >= -1){
        s1 -> top --;
    }
}
int top(stack *s1){
    if( s1 -> top <= -1){
        return -1 ;
    }
    return s1 -> arr[s1 ->top];
}
bool empty(stack *s1){
    return s1 -> top == -1;
}

int size(stack *s1){
    return s1 -> top +1;
}


int main()
{
    
    return 0;
}