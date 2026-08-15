//stack implementation with arrays

#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10001

typedef struct {
    int arr[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *stack) {
    stack->top = -1;
}

bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

bool isFull(Stack *stack) {
    return stack->top >= MAX_SIZE-1;
}

void push(Stack *stack, int val) {
    if (isFull(stack)) {
        printf("Stack if full!\n");
        return;
    }
    stack->arr[++stack->top] = val;
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }
    int popped = stack->arr[stack->top];
    stack->top--;
    return popped;
}

int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack->arr[stack->top];
}

int main() {
    Stack s;
    initialize(&s);
    printf("peek\n");
    peek(&s);
    printf("isEmpty\n");
    isEmpty(&s);
    printf("isFull\n");
    isFull(&s);
    printf("isPush\n");
    push(&s, 67); 
    printf("Peek\n");   
    peek(&s);
    printf("Pop\n");
    printf("%d\n", pop(&s));
    printf("isEmpty\n");
    isEmpty(&s);
    return 0;
}
