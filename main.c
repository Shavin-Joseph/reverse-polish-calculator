#include <stdio.h>
#include <stdlib.h>

/*
#define MAXSTACK 5;

typedef int StackEntry;

typedef enum {false,true} Boolean;

typedef struct{
    int top;
    StackEntry entry(MAXSTACK);
}Stack;


void CreateStack(Stack*s){
    s->top = -1;
}

Boolean isStackFull(const Stack*s){
    return (s->top == -1);
}

Boolean isStackEmpty(const Stack*s){
    return (s->top == MAXSTACK-1);
}


void push(StackEntry item,Stack*s){
    if (isStackFull(s))
    {
        printf("Stack is full\n")
        exit(1);
    }
    else
        s->entry[++s->top] = item;
}


void pop(StackEntry item, const*s){
    if (isStackEmpty(s)){
        printf("Stack is Empty\n")
    else
        *item = s->entry[s->top--];
    }
}



int main(){

}
*/



#define size 5

typedef int item;

typedef struct{
    int top;
    item arr[size];
}stack;



void createstack(stack*s){
    s->top = -1;
}

int isEmpty(stack*s){
    return(s->top == -1);
}

int isFull(stack*s){
    return(s->top == size -1);
}


void push(item value, stack*s){
    if (isFull(s)){
        printf("Stack is full.\n");
        end(1);
    }
    s->arr[++s->top] = value;
}

void pop(item *value, stack*s){
    if (isEmpty(s)){
        printf("Stack is Empty.\n");
        end(1);
    }
    *value = s->arr[s->top--];

}



int main()
{
    stack s;
    int x;

    createstack(&s);

    push(10, &s);
    push(20, &s);
    push(30, &s);

    pop(&x, &s);
    printf("Popped: %d\n", x);

    pop(&x, &s);
    printf("Popped: %d\n", x);

    return 0;


}
