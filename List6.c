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

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", getValue(current));
        current = getNext(current);
    }
    printf("NULL\n");
}

int kth_largest(Node* head, int k) {
    Node* current = head;
    int kthLargest = -1;

    while (current != NULL) {
        Node* compareNode = head;
        int greaterCount = 0;

        // Count how many nodes have greater values than the current node
        while (compareNode != NULL) {
            if (getValue(compareNode) > getValue(current)) {
                greaterCount++;
            }
            compareNode = getNext(compareNode);
        }

        // If the number of greater elements is exactly k - 1, then current node is the k-th largest
        if (greaterCount == k - 1) {
            kthLargest = getValue(current);
            break;
        }
        current = getNext(current);
    }

    return kthLargest;
}

int main() {
    // Creating a sample linked list
    Node* list = createNode(5);
    setNext(list, createNode(2));
    setNext(getNext(list), createNode(8));
    setNext(getNext(getNext(list)), createNode(10));
    setNext(getNext(getNext(getNext(list)))), createNode(3));

    printf("Original list:\n");
    printList(list);

    int k = 2;
    int result = kth_largest(list, k);
    if (result != -1) {
        printf("The %d-th largest element is: %d\n", k, result);
    } else {
        printf("Invalid value for k or the list is too short.\n");
    }

    return 0;
}