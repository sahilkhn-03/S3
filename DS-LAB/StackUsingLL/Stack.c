#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

typedef struct Stack {
    Node* head;
} Stack;

void initializeStack(Stack* stack) {
    stack->head = NULL;
}

int isEmpty(Stack* stack) {
    return stack->head == NULL;
}

void push(Stack* stack, int new_data) {
    Node* new_node = createNode(new_data);
    if (!new_node) {
        printf("\nStack Overflow");
        return;
    }
    new_node->next = stack->head;
    stack->head = new_node;
}

void pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("\nStack Underflow\n");
        return;
    } else {
        Node* temp = stack->head;
        stack->head = stack->head->next;
        free(temp);
    }
}

int peek(Stack* stack) {
    if (!isEmpty(stack))
        return stack->head->data;
    else {
        printf("\nStack is empty");
        return INT_MIN;
    }
}

void printMenu() {
    printf("\nMenu:\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. View Top Element\n");
    printf("4. Exit\n");
}

int main() {
    Stack stack;
    initializeStack(&stack);

    // Seed for random number generation
    srand(time(NULL));

    // Push 5 random values onto the stack
    for (int i = 0; i < 5; i++) {
        int random_value = rand() % 100; // Random value between 0 and 99
        push(&stack, random_value);
        printf("Pushed %d onto the stack.\n", random_value);
    }

    int choice;
    do {
        printMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int value;
                printf("Enter a value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                printf("Pushed %d onto the stack.\n", value);
                break;
            }
            case 2:
                pop(&stack);
                printf("Popped the top element from the stack.\n");
                break;
            case 3: {
                int top = peek(&stack);
                if (top != INT_MIN) {
                    printf("Top element is %d\n", top);
                }
                break;
            }
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);

    // Cleanup the stack
    while (!isEmpty(&stack)) {
        pop(&stack);
    }

    return 0;
}
