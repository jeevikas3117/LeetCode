#include <stdbool.h>
#include <string.h>

#define MAX 10000

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    if (top == -1)
        return '\0';
    return stack[top--];
}

bool isValid(char *s) {
    top = -1;  // reset stack for each call

    for (int i = 0; i < strlen(s); i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } else {
            if (top == -1) return false;

            char t = pop();

            if ((ch == ')' && t != '(') ||
                (ch == '}' && t != '{') ||
                (ch == ']' && t != '[')) {
                return false;
            }
        }
    }

    return (top == -1);
}