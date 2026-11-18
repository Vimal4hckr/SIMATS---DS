
#include <stdio.h>

#define SIZE 100

struct Request {
    int id;
    int priority;
};

struct Request queue[SIZE];
int count = 0;

void insert(int id, int priority) {
    if (count == SIZE) {
        printf("Priority Queue Overflow\n");
        return;
    }

    queue[count].id = id;
    queue[count].priority = priority;
    count++;

    printf("Request %d inserted\n", id);
}

void delete() {
    int i, highest = 0;

    if (count == 0) {
        printf("Priority Queue Underflow\n");
        return;
    }

    for (i = 1; i < count; i++) {
        if (queue[i].priority < queue[highest].priority) {
            highest = i;
        }
    }

    printf("Processed Request: %d\n", queue[highest].id);

    for (i = highest; i < count - 1; i++) {
        queue[i] = queue[i + 1];
    }

    count--;
}

void display() {
    int i, j;
    struct Request temp;

    if (count == 0) {
        printf("Priority Queue is Empty\n");
        return;
    }

    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (queue[i].priority > queue[j].priority) {
                temp = queue[i];
                queue[i] = queue[j];
                queue[j] = temp;
            }
        }
    }

    printf("Remaining Queue: ");

    for (i = 0; i < count; i++) {
        printf("%d ", queue[i].id);
    }

    printf("\n");
}

int main() {
    insert(101, 3);
    insert(102, 1);
    insert(103, 2);

    delete();

    display();

    return 0;
}
