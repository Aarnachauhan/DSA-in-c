#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node* newnode(int data){
    struct Node *node=(struct Node* ) malloc (sizeof(struct Node));
    node->data=data;
    node->next=NULL;
    return node;
    
}

void print(struct Node *head){
    while(head!=NULL){
        printf("%d ->", head->data);
        head=head->next;
    }
}



int main(){
    struct Node* head=newnode(1);
    head->next=newnode(2);
    head->next->next=newnode(3);
    head->next->next->next=newnode(4);
    head->next->next->next=newnode(5);
    printf("linked list ");
    print(head);
    
  
    return 0;
    
}
