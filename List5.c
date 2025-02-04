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

Node* merge(Node* L1, Node* L2) {
    if (L1 == NULL) return L2;
    if (L2 == NULL) return L1;

    Node* mergedList = NULL;
    Node* current = NULL;

    if (getValue(L1) < getValue(L2)) {
        mergedList = L1;
        L1 = getNext(L1);
    } else {
        mergedList = L2;
        L2 = getNext(L2);
    }

    current = mergedList;

    while (L1 != NULL && L2 != NULL) {
        if (getValue(L1) < getValue(L2)) {
            setNext(current, L1);
            L1 = getNext(L1);
        } else {
            setNext(current, L2);
            L2 = getNext(L2);
        }
        current = getNext(current);
    }

    if (L1 != NULL) {
        setNext(current, L1);
    } else {
        setNext(current, L2);
    }

    return mergedList;
}

int main() {
    // Creating the first sorted list
    Node* list1 = createNode(1);
    setNext(list1, createNode(3));
    setNext(getNext(list1), createNode(5));

    // Creating the second sorted list
    Node* list2 = createNode(2);
    setNext(list2, createNode(4));
    setNext(getNext(list2), createNode(6));

    // Merging the two lists
    Node* mergedList = merge(list1, list2);

    // Printing the merged list
    printf("Merged list:\n");
    printList(mergedList);

    return 0;
}