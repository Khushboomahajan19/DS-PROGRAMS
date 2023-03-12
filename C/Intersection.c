#include "linklist.h"
void intersect(Node**st1,Node**st2,int pos){
int l1=count(*st1);
int l2=count(*st1);
int d=0;
Node*ptr1;
Node*ptr2;
if(l1>l2){
    d=l1-l2;
    ptr1=st1;
    ptr2=st2;
}
else{
d=l2-l1;
ptr1=st2;
    ptr2=st1;
}
while(d){
    ptr1=ptr1->next;
    if(ptr1==NULL){
        return -1;
    }
    d--;
}
while (ptr1!=NULL&&ptr2!=NULL)
{
    if (ptr1==ptr2)
    {
        return ptr1->val;
    }
    ptr1=ptr1->next;
    ptr2=ptr2->next;
}
return -1;
}
int main(){
    Node*st1=initialize();
    Node*st2=initialize();
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    insert_beg(&st2,100);
    insert_beg(&st2,90);
    insert_beg(&st2,80);
    insert_beg(&st2,70);
    insert_beg(&st2,60);
    intersect(st1,st2,3);
    }