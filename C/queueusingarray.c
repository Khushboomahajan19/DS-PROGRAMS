#include<stdio.h>
struct queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct queue*q,int size){
    q->size=size;
q->front=q->rear==-1;
q->Q=(int *)malloc(q->size*sizeof(int));
}
void enqueue(struct queue*q,int x){
    if(q->rear==q->size-1){
        printf("Queue is full");
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct queue*q){
    int x=-1;
if(q->front==q->rear){
    printf("Queue is empty");
}
else{
q->front++;
x=q->Q[q->front];
}
return x;
}
void show(struct queue q){
    for(int i=q.front;i<=q.rear;i++){
        printf("%d\n",q.Q[i]);
    }
}
int main(){
struct queue q;
create(&q,5);
enqueue(&q,10);
enqueue(&q,20);
enqueue(&q,30);
// enqueue(&q,40);
show(q);
return 0;
}