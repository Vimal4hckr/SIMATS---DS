#include <stdio.h>
#define SIZE 100
int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow\n");
    }
    else {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        printf("Customer %d added to queue\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
    }
    else {
        printf("Deleted Element: %d\n", queue[front]);
        front++;

        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

void peek() {
    if (front == -1) {
        printf("Queue is Empty\n");
    }
    else {
        printf("Front Element: %d\n", queue[front]);
    }
}

void display() {
    int i;

    if (front == -1) {
        printf("Queue is Empty\n");
    }
    else {
        printf("Queue Elements: ");

        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

int main() {
    enqueue(101);
    enqueue(102);
    enqueue(103);

    display();

    peek();

    dequeue();

    display();

    return 0;
}
