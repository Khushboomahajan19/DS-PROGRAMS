#include "linklist.h"
int main(){
    int sval;
    Node*srch=initialize();
    insert_beg(&srch,50);
    insert_beg(&srch,40);
    insert_beg(&srch,30);
    insert_beg(&srch,20);
    insert_beg(&srch,10);
    show(srch);
    printf("\nEnter the value to be searched\n");
    scanf("%d",&sval);
    Node*curr=srch;
    while(curr!=NULL){
        if(curr->val==sval){
            printf("Item found");
            return;
        }
        curr=curr->next;
    }
    printf("Not found");
// if(curr==NULL){
//     printf("Not found");
// }
}