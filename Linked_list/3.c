
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

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

void search(int key) {
    struct Node *temp = head;
    int position = 1;

    while (temp != NULL) {
        if (temp->data == key) {
            printf("Element found at position %d\n", position);
            return;
        }

        temp = temp->next;
        position++;
    }

    printf("Element Not Found\n");
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
    int key;

    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);

    printf("Linked List: ");
    display();

    key = 30;

    printf("Search Element: %d\n", key);

    search(key);

    return 0;
}
