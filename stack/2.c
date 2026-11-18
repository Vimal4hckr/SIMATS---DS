
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int value) {
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory Allocation Failed\n");
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

void pop() {
    struct Node *temp;

    if (top == NULL) {
        printf("Stack Underflow\n");
        return;
    }

    temp = top;
    printf("Deleted Element: %d\n", temp->data);

    top = top->next;
    free(temp);
}

void display() {
    struct Node *temp = top;

    if (top == NULL) {
        printf("Stack is Empty\n");
        return;
    }

    printf("Stack Elements:\n");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {
    push(100);
    push(200);
    push(300);

    display();

    return 0;
}
