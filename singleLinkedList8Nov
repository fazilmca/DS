#include<stdio.h>
#include <stdlib.h>
//Node Structure
struct Node {
        int data;
        struct Node * link;
};
struct Node *header =NULL;
struct Node *createNode(int data){
        struct Node *newnode;
        newnode = malloc(sizeof(struct Node));
        newnode ->data= data;
        newnode ->link=NULL;
        return newnode;
        
}

void insertAtFront(int data){
        struct Node *newnode;
        newnode = createNode(data);
        if(header ==NULL){
                header =newnode;
        }else{
                newnode-> link =header;
                header = newnode;
        }
}

void insertAtEnd(int data) {
    struct Node *newnode = createNode(data);

    if (header == NULL) {
        header = newnode;
    } else {
        struct Node *ptr = header;
        while (ptr->link != NULL) {
            ptr = ptr->link;
        }
        ptr->link = newnode;
    }
}

void insertAtAny(int data, int position) {
    struct Node *newnode = createNode(data);

    if (position < 1) {
        printf("Invalid position\n");
        return;
    }

    if (position == 1) {
        newnode->link = header;
        header = newnode;
        return;
    }

    struct Node *ptr = header;
    for (int i = 1; i < position - 1; i++) {
        if (ptr == NULL) {
            printf("Position out of range\n");
            return;
        }
        ptr = ptr->link;
    }

    newnode->link = ptr->link;
    ptr->link = newnode;
}

void traversal(){
        struct Node *ptr = header;
        while(ptr != NULL){
                printf("%d \t",ptr->data);
                ptr=ptr->link;
        }
        printf("\n");
}

int main(){
        struct Node *node;
        insertAtEnd(50);
        insertAtFront(10);
        insertAtFront(20);
        insertAtAny(30,2);
        traversal();
        return(0);
}
   
