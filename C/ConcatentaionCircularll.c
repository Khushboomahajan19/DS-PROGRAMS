#include<stdlib.h>
#include<stdio.h>
 
typedef struct Node
{
    int val;
    struct Node *next;
} Node;
Node *createNode(int x)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->val = x;
    node->next = NULL;
}
Node*concat(Node*last1,Node*last2){
    Node*temp=last1->next;
    last1->next=last2->next;
    last2->next=temp;
    return last2;
}
void insert_beg(Node**last,int val){
    Node*newNode=createNode(val);
if(*last==NULL){
*last=newNode;
newNode->next=newNode;
}
else{
    Node*temp=(*last)->next;
    (*last)->next=newNode;
    newNode->next=temp;
}
}
void show(Node*last){
    if(last==NULL){
        printf("Empty linklist\n");
        return;
    }
    Node*current=last->next;
    printf("The nodes of circular linklist are :\n");
    do
    {
        printf("%d|%p  \t",current->val,current->next);
        current=current->next;
    }while(current!=last->next);
}
void reverseList(Node**last){
Node*current=(*last)->next;
Node*prev=*last;
Node*next=NULL;
(*last)->next=NULL;
Node*temp=current;
while(current!=NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
}
*last=temp;
}
int Checkfib(int num){
    int x=5*num*num+4;
    int y=5*num*num-4;
    int p=(int)sqrt(x);
    if(p*p==x)
    return 1;
    if(p*p==4)
    return 1;
    return 0;
}
int main(){
    Node*last1=NULL;
    Node*last2=NULL;
    Node*last3=NULL;

    insert_beg(&last1,5);
    insert_beg(&last1,10);
    insert_beg(&last1,15);
    insert_beg(&last1,25);

    // insert_beg(&last2,50);
    // insert_beg(&last2,10);
    // insert_beg(&last2,55);
    // insert_beg(&last2,45);
    // printf("List 1\n");
    // show(last1);
    // printf("\nList 2\n");
    // show(last2);
    //  last3= concat(last1,last2);
    //  printf("\nList3\n");
    // show(last3);
    show(last1);
    reverseList(&last1);
    printf("\n Reverse List is\n");
    show(last1);

}