#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int val;
    int priority;
    struct Node *next;
} Node;
Node *createNode(int x,int p)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->val = x;
    node->priority=p;
    node->next = NULL;
}
void insertpq(Node**start,int x,int p){
    Node*current=(*start);
    Node*node=createNode(x,p);
    if((*start)->priority>p){
        node->next=(*start);
        (*start)=node;
    }
    else{
        while(current->next!=NULL&&current->next->priority<p){
            current=current->next;
        }
        node->next=current->next;
        current->next=node;
}
}
int isEmpty(Node *start)
{
    if (start == NULL)
    {
        printf("\nEmpty List");
        return 1;
    }
    return 0;
}
void deletepq(Node**start)
{
    Node*node=(*start);
    (*start)=(*start)->next;
    free(node);
}
void show(Node *start)
{
    if (!isEmpty(start))
    {
        printf("\nLinked list is\n");
        while (start != NULL)
        {
            printf("%d | %p\t", start->val, start->next);
            start = start->next;
        }
    }
}

int main()
{
    int n;
    Node* pq = createNode(4, 1);
    insertpq(&pq, 3, 2);
    insertpq(&pq, 8, 3);
    insertpq(&pq, 9, 5);
    insertpq(&pq, 7, 4);
    show(pq);
    while (!isEmpty(&pq)) {
        deletepq(&pq);
    }
    show(pq);
    return 0;
}