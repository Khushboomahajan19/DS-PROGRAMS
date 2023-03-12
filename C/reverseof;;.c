// To reverse any linklist in order of n time we have two options using -
// 1)STACK-
// With the help of stack we can reverse the linklist with extraspace of O(N)
// 2) 3 NODES
// In this method we need only three nodes so it is more efficient in comparison of stack method
#include "linklist.h"
void reverse(Node**start){
    Node*current=(*start);
Node*Next=NULL;
Node*prev=NULL;
    while(current!=NULL){
      Next=current->next;
      current->next=prev;
      prev=current;
      current=Next;
    }
    *start=prev;
}
int main(){
    Node*st1=initialize();
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    show(st1);
    printf("Reverse linklist is:");
    reverse(&st1);
    show(st1);
}