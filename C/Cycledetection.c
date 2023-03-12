// DETECT CYCLE IN A LINKLIST WITH O(N):
// METHOD 1:
// By addition of an extra flag in each node that will identify visited or unvisited node,by default the flag value 
// will be zero for all nonvisited node
// We will start the traversing from 1st node and mark the flag to 1 if we get a node with flag 1 that means this 
// node is visited twice, results the loop/cycle condition.If we reached to last node and no nodes having flag 1
// that means no cycle found.
// DISADVANTAGE:EXTRA SPACE IN EACH NODE
// METHOD 2:
// Using slow & fast pointer
#include "linklist.h"
void cycle(Node**start){
Node*fast=start;
Node*slow=start;
while(fast!=NULL){
   fast=fast->next;
  if(slow==fast)
  return 1;
  slow=slow->next;
  if(fast!=NULL)
  fast=fast->next;
}
return 0;
}
int main(){
    Node*st1=initialize();
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    while (st1!=NULL)
    {
        st1=st1->next;
    }
    
}