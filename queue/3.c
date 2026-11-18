
#include <stdio.h>
#define SIZE 100

int deque[SIZE];
int front = -1, rear = -1;

void insertFront(int value) {
    if (front == 0) {
        printf("Insertion at Front Not Possible\n");
        return;
    }

    if (front == -1) {
        front = rear = 0;
    }
    else {
        front--;
    }

    deque[front] = value;
    printf("%d inserted at Front\n", value);
}

void insertRear(int value) {
    if (rear == SIZE - 1) {
        printf("Deque Overflow\n");
        return;
    }

    if (front == -1) {
        front = rear = 0;
    }
    else {
        rear++;
    }

    deque[rear] = value;
    printf("%d inserted at Rear\n", value);
}

void deleteFront() {
    if (front == -1) {
        printf("Deque Underflow\n");
        return;
    }

    printf("Deleted Element: %d\n", deque[front]);

    if (front == rear) {
        front = rear = -1;
    }
    else {
        front++;
    }
}

void deleteRear() {
    if (rear == -1) {
        printf("Deque Underflow\n");
        return;
    }

    printf("Deleted Element: %d\n", deque[rear]);

    if (front == rear) {
        front = rear = -1;
    }
    else {
        rear--;
    }
}

void display() {
    int i;

    if (front == -1) {
        printf("Deque is Empty\n");
        return;
    }

    printf("Deque Elements: ");

    for (i = front; i <= rear; i++) {
        printf("%d ", deque[i]);
    }

    printf("\n");
}

int main() {
    insertFront(100);
    insertRear(200);
    insertFront(50);

    deleteRear();

    display();

    return 0;
}
