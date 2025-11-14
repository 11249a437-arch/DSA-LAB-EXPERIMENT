#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};


void insertAtEnd(struct node **head, int value) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        printf("Node inserted at the beginning (list was empty)\n");
        return;
    }

    struct node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    printf("Node inserted at the end\n");
}


void insertAtBeginning(struct node **head, int value) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
    printf("Node inserted at the beginning\n");
}


void insertAtMiddle(struct node **head, int value, int position) {
    if (position <= 1 || *head == NULL) {
        insertAtBeginning(head, value);
        return;
    }

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    struct node *temp = *head;
    for (int i = 1; i < position - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range, inserting at the end\n");
        insertAtEnd(head, value);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    printf("Node inserted at position %d\n", position);
}


void display(struct node *head) {
    struct node *temp = head;
    printf("\nLinked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main() {
    struct node *head = NULL;
    int value, position, choice, n;

    printf("Enter the number of nodes to insert at the end: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        insertAtEnd(&head, value);
    }

    display(head);

    printf("\nEnter a value to insert at the beginning: ");
    scanf("%d", &value);
    insertAtBeginning(&head, value);
    display(head);

    printf("\nEnter a value and position to insert in the middle: ");
    scanf("%d %d", &value, &position);
    insertAtMiddle(&head, value, position);
    display(head);

    return 0;
}
