#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

struct Stack {
    int top;
    char array[MAX_SIZE];
};

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int getPriority(char C) {
    if (C == '^')
        return 3;
    else if (C == '*' || C == '/')
        return 2;
    else if (C == '+' || C == '-')
        return 1;
    return 0;
}
void push(struct Stack *s, char c) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    s->array[++s->top] = c;
}

char pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return s->array[s->top--];
}

char peek(struct Stack *s) {
    return s->array[s->top];
}

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

char *infixToPrefix(char *infix) {
    struct Stack s;
    s.top = -1;
    char *prefix = (char *)malloc(MAX_SIZE * sizeof(char));
    char *postfix = (char *)malloc(MAX_SIZE * sizeof(char));
    int prefixIndex = 0, postfixIndex = 0;

    reverseString(infix);
    for (int i = 0; infix[i] != '\0'; i++) {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    for (int i = 0; infix[i] != '\0'; i++) {
        if (isalnum(infix[i])) {
            postfix[postfixIndex++] = infix[i];
        } else if (infix[i] == '(') {
            push(&s, infix[i]);
        } else if (infix[i] == ')') {
            while (s.top != -1 && peek(&s) != '(') {
                postfix[postfixIndex++] = pop(&s);
            }
            pop(&s); 
        } else {
            while (s.top != -1 && getPriority(peek(&s)) > getPriority(infix[i])) {
                postfix[postfixIndex++] = pop(&s);
            }
            push(&s, infix[i]);
        }
    }

    while (s.top != -1) {
        postfix[postfixIndex++] = pop(&s);
    }
    postfix[postfixIndex] = '\0';

    reverseString(postfix);

    strcpy(prefix, postfix);

    free(postfix);

    return prefix;
}

int main() {
    char infix[MAX_SIZE];
    printf("Enter infix expression: ");
    scanf("%s", infix);

    char *prefix = infixToPrefix(infix);

    printf("Prefix expression: %s\n", prefix);

    free(prefix);

    return 0;
}
