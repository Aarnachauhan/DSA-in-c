#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
   
};
void display(struct Node *node){
    while(node!=NULL){
        printf("%d ->",node->data);
        node=node->next;
        
    }
    printf("null");
    printf("\n");
}

int main() {
    //4 pointer
    struct Node *head= NULL;
    struct Node *node2= NULL;
    struct Node *node3= NULL;
    struct Node *node4= NULL;
    // allocate node in the heap
    head=(struct Node *) malloc (sizeof(struct Node));
    node2=(struct Node *) malloc (sizeof(struct Node));
    node3=(struct Node *) malloc (sizeof(struct Node));
    node4=(struct Node *) malloc (sizeof(struct Node));
    //value assign
    head->data=11;
    head->next=node2;
    
    node2->data=22;
    node2->next=node3;
    
    node3->data=33;
    node3->next=node4;
    
    node4->data=44;
    node4->next=NULL;
    
    printf("linked list");
    display(head);
 
    return 0;
}
