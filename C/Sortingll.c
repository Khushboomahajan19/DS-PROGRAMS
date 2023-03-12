#include "linklist.h"
void Helper(Node**start,Node*newnode){
    if(newnode->val<(*start)->val){
        newnode->next=*start;
        *start=newnode;
    }
    else{
        Node*current=(*start)->next;
        Node*prev=*start;
        while (current!=NULL)
        {
            if(current->val>newnode->val){
                break;
            }
            current=current->next;
            prev=prev->next;
        }
        newnode->next=prev->next;
        prev->next=newnode;
    }
}
void sort(Node**start){
Node*start2=*start;
*start=(*start)->next;
start2->next=NULL;
while(*start!=NULL){
    Node*temp=*start;
    *start=(*start)->next;
    temp->next=NULL;
      Helper(&start2,temp);
}
*start=start2;
}
int main(){
    Node*start=initialize();
    // Node*st2=initialize();
    insert_beg(&start,9);
    insert_beg(&start,7);
    insert_beg(&start,2);
    insert_beg(&start,5);
    insert_beg(&start,4);
    printf("Before sorting");
    show(start);
    printf("\nSorted list is");
    sort(&start);
}
    // Node*curr=st1;