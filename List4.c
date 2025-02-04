#include <stdio.h>
#include <stdlib.h>
#include "list.h"

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

void reverse(Node** head) {
    Node* prev = NULL;
    Node* current = *head;
    Node* next = NULL;

    while (current != NULL) {
        next = getNext(current);
        setNext(current, prev);
        prev = current;
        current = next;
    }

    *head = prev;
}

int main() {
    Node* list = initializeList();
    printf("Original list:\n");
    printList(list);

    reverse(&list);
    printf("Reversed list:\n");
    printList(list);

    return 0;
}