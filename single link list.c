#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
}*head = NULL, *tail = NULL;

struct Node* createNewNode(int value) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->value = value;
    node->next = NULL;
    return node;
};

void pushHead(int value) {
    struct Node* node = createNewNode(value);
    if(head == NULL) {
        head = tail = NULL;
    } else {
        node->next = head;
        head = node;
    }
}

void pushTail(int value) {
    struct Node* node = createNewNode(value);
    if(tail == NULL) {
        tail = head = NULL;
    } else {
        tail->next = node;
        tail = node;
    }
}

void pushMid(int value, int target) {
    struct Node* node = createNewNode(value);
    if(head == NULL) {
        head = tail = NULL;
    } else {
        struct Node* curr = head;
        while(curr->next != NULL && curr->next->value < target) {
            curr = curr->next;
        }
        struct Node* temp = curr->next;
        curr->next = node;
        node->next = temp;
    }
}

void popHead() {
    if(head == NULL) {
        printf("Data Kosong");
        return;
    } else {
        struct Node* temp = head;
        head = head->next;
        temp->next = NULL;
        free(temp);
    }
}

void popTail() {
    if(tail == NULL) {
        printf("Data Kosong");
        return;
    } else {
        struct Node* temp = head;
        while(temp->next != tail) {
           temp = temp->next; 
        }
        struct Node* curr = tail;
        temp = tail;
        tail->next = NULL;
        free(curr);
    }
}

void popMid(int target) {
    if(head == NULL) {
        printf("Data Kosong");
        return;
    } else {
        struct Node* curr = head;
        while(curr->next != NULL && curr->next->value != target) {
            curr = curr->next;
        }
        struct Node* temp = curr->next;
        curr->next = temp->next;
        temp->next = NULL;
        free(temp);
    }
}

void view() {
    struct Node* curr = head;
    while(curr != NULL) {
        printf("%d ", curr->value);
        curr = curr->next;
    }
    printf("\n");
}

int main() {
    //validasi int
    int choice, value, target;
    //buat while + print choice dan scanf choice
    while(1) {
        printf("1. Push Head\n");
        printf("2. Push Tail\n");
        printf("3. Push Mid\n");
        printf("4. Pop Head\n");
        printf("5. Pop Tail\n");
        printf("6. Pop Mid\n");
        printf("7. View\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        //buat switch
        switch(choice) {
             case 1:
                printf("Enter value to push to head: ");
                scanf("%d", &value);
                pushHead(value);
                break;
            case 2:
                printf("Enter value to push to tail: ");
                scanf("%d", &value);
                pushTail(value);
                break;
            case 3:
                printf("Enter value to push: ");
                scanf("%d", &value);
                printf("Enter target value: ");
                scanf("%d", &target);
                pushMid(value, target);
                break;
            case 4:
                popHead();
                break;
            case 5:
                popTail();
                break;
            case 6:
                printf("Enter value to pop: ");
                scanf("%d", &target);
                popMid(target);
                break;
            case 7:
                view();
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
