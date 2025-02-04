#include <stdio.h>
#include <stdlib.h>
#include <list.h>

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

int count(Node* head, int x) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        if (getValue(current) == x) {
            count++;
        }
        current = getNext(current);
    }
    return count;
}

int main() {
    Node* list = initializeList();
    printf("Original list:\n");
    printList(list);

    int value = 3;
    int countResult = count(list, value);
    printf("Element %d appears %d time(s) in the list\n", value, countResult);

    value = 6;
    countResult = count(list, value);
    printf("Element %d appears %d time(s) in the list\n", value, countResult);

    return 0;
}