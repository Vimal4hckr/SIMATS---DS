
#include <stdio.h>

char stack[100];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

int main() {
    char exp[100];
    int i, balanced = 1;
    char ch;

    printf("Enter an expression: ");
    scanf("%s", exp);

    for (i = 0; exp[i] != '\0'; i++) {

        ch = exp[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        }

        else if (ch == ')' || ch == '}' || ch == ']') {

            if (top == -1) {
                balanced = 0;
                break;
            }

            char temp = pop();

            if ((ch == ')' && temp != '(') ||
                (ch == '}' && temp != '{') ||
                (ch == ']' && temp != '[')) {
                balanced = 0;
                break;
            }
        }
    }

    if (top != -1)
        balanced = 0;

    if (balanced)
        printf("Balanced Expression\n");
    else
        printf("Unbalanced Expression\n");

    return 0;
}
