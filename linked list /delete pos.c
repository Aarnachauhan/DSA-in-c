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

void print(struct Node* head){
    while(head!=NULL){
        printf("%d ->", head->data);
        head=head->next;
    }
}
struct Node* deletenode(struct Node* head,int pos){
    struct Node* temp=head;
    struct Node* prev=NULL;
    //list is null
  if(temp==NULL){
      return head;
  }
  //if pos=1 that means head is to be deleted
  if(pos==1){
      head=temp->next;
      free(temp);
      return head;
  }
  //if pos>1
  for(int i=1;temp!=NULL && i<pos;i++){
      prev=temp;
      temp=temp->next;
  }
  //desire is found?
  if(temp!=NULL){
     prev->next=temp->next;
     free(temp);
  }
else{
    printf("data not found");
}
 return head;  

}

int main(){
    struct Node* head=newnode(1);
    head->next=newnode(2);
    head->next->next=newnode(3);
    head->next->next->next=newnode(4);
    head->next->next->next->next=newnode(5);
    printf("linked list \n ");
    print(head);
    printf("\n");
    int pos=2;
    head=deletenode(head,pos);
    printf("after deletion \n");
    print(head);

    return 0;
    
}
