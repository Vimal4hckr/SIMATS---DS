#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node *head = NULL;

void insertBeginning(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
void insertEnd(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertPosition(int value, int position) {
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = value;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    struct Node *temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid Position\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void display() {
    struct Node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {

    insertBeginning(10);
    printf("After insertion at beginning: ");
    display();
    insertEnd(20);
    printf("After insertion at end: ");
    display();
    insertPosition(15, 2);
    printf("After insertion at position 2: ");
    display();
    return 0;
}
