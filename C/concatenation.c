#include "linklist.h"
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
    printf("Concatenates of st1");
   show(st1);
   printf("\n");
printf("Concatenates of st2");
   show(st2);
Node*curr=st1;
while (curr->next!=NULL)
{
    curr=curr->next;
}
curr->next=st2;
printf("\nConcatenated list is\n ");
show(st1);

}
