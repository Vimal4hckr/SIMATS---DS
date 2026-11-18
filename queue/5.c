
#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = -1, rear = -1;

void addPassenger(int id) {
    if (rear == SIZE - 1) {
        printf("Waiting List is Full\n");
        return;
    }

    if (front == -1)
        front = 0;

    queue[++rear] = id;

    printf("Passenger %d added to waiting list\n", id);
}

void confirmPassenger() {
    if (front == -1 || front > rear) {
        printf("Waiting List is Empty\n");
        return;
    }

    printf("Passenger %d Confirmed\n", queue[front]);

    front++;

    if (front > rear) {
        front = rear = -1;
    }
}

void display() {
    int i;

    if (front == -1) {
        printf("Waiting List is Empty\n");
        return;
    }

    printf("Waiting List: ");

    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main() {
    addPassenger(501);
    addPassenger(502);

    confirmPassenger();

    display();

    return 0;
}
