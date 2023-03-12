//  O(m+n)
 #include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    // int val;
    struct Node *next;
    int coe;
    int pow;
} Node;

// initialize the linked list
Node *initialize()
{
    return NULL;
}

// create a new node
Node *createNode(int x,int y)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->coe = x;
    node->pow = y;
    node->next = NULL;
}

// insert node at last
void insert_last(Node **start, int x,int y)
{
    Node *newNode = createNode(x,y);
    if (*start == NULL)
    {
        *start = newNode;
    }
    else
    {
        Node *temp = *start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

Node * search(Node *start, int y){
    Node *current  = start;
    while(current !=NULL){
        if(current->pow == y)
            return current;
            current=current->next;
    }
    printf("\nNode with %d value not found",y);
    return NULL;

}
// check for the empty of linked list
int isEmpty(Node *start)
{
    if (start == NULL)
    {
        printf("\nEmpty List");
        return 1;
    }
    return 0;
}
// show all the nodes
void show(Node *start)
{
    if (!isEmpty(start))
    {
        printf("\nLinked list is\n");
        while (start != NULL)
        {
            if(start->coe>=0)
              printf("+");
            printf("%dx%d\t", start->coe, start->pow);
            start = start->next;
        }
    }
}
Node*AddPoly(Node*list1,Node*list2){
    Node*result=NULL;
    while(list1!=NULL&&list2!=NULL){
        if(list1->pow>list2->pow){
            insert_last(&result,list1->coe,list1->pow);
            list1=list1->next;
        }
        else if(list2->pow>list1->pow){
            insert_last(&result,list2->coe,list2->pow);
            list2=list2->next;
        }
        else{
            int s=list1->coe+list2->coe;
            insert_last(&result,s,list1->pow);
          while(list1!=NULL||list2!=NULL){
        if(list1!=NULL){
            insert_last(&result,list1->coe,list1->pow);
            list1=list1->next;
        }
        if(list2!=NULL){
         insert_last(&result,list2->coe,list2->pow);
            list2=list2->next;
    }
    list1=list1->next;
    list2=list2->next;
          }
        }
    }
        return result;
}
Node*polymult(Node*list1,Node*list2){
Node*result=NULL;
while(list1!=NULL){
    for(Node*l2=list2;l2!=NULL;l2=l2->next){
        int pow=list1->pow+l2->pow;
        int coe=list1->pow*l2->pow;
        insert_last(&result,coe,pow);
    }
    list1=list1->next;
}
Node*current=result;
while(current!=NULL){
    for(Node*p=current;p->next!=NULL;p=p->next){
        if(p->next->pow==current->pow){
            Node*temp=p->next;
            current->coe+=temp->coe;
            p->next=temp->next;
            free(temp);
        }
    }
}
}