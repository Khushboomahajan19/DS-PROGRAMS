#include "linklist.h"
void insertpq(Node**start,Node*newnode){
    if(newnode->val<(*start)->val){
        newnode->next=*start;
        *start=newnode;
    }
    else{
     Node*current=(*start)->next;
        Node*prev=(*start);
    while(current!=NULL){
             if(newnode->val<current->val){
                prev->next=newnode->next;
                newnode->next=current;
    }
    current=current->next;
    prev=prev->next;
    }
    current->next=newnode;   
}

}
int main(){
    int n;
    Node*st1=initialize();
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    show(st1);
    printf("Enter the value to be inserted in priority queue\n");
    scanf("%d",&n);
    insertpq(&st1,n);
    show(st1);
  
}