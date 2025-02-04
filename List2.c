#include <stdio.h>
#include <stdlib.h>
#include " list.h"

typedef struct Node {
    int value;
    struct Node* next;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void setNext(Node* node, Node* next) {
    node->next = next;
}

Node* getNext(Node* node) {
    return node->next;
}

int getValue(Node* node) {
    return node->value;
}

Node* initializeList() {
    Node* head = createNode(1);
    Node* current = head;

    for (int i = 2; i <= 5; i++) {
        Node* newNode = createNode(i);
        setNext(current, newNode);
        current = newNode;
    }

    return head;
}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", getValue(current));
        current = getNext(current);
    }
    printf("NULL\n");
}

int search(Node* head, int x) {
    int index = 0;
    Node* current = head;
    
    while (current != NULL) {
        if (getValue(current) == x) {
            return index;
        }
        current = getNext(current);
        index++;
    }
    
    return -1;
}

int main() {
    Node* list = initializeList();
    printf("Original list:\n");
    printList(list);

    int value = 3;
    int result = search(list, value);
    if (result != -1) {
        printf("Element %d found at index %d\n", value, result);
    } else {
        printf("Element %d not found in the list\n", value);
    }

    value = 7;
    result = search(list, value);
    if (result != -1) {
        printf("Element %d found at index %d\n", value, result);
    } else {
        printf("Element %d not found in the list\n", value);
    }

    return 0;
}