#include<stdio.h>
#define size 5
struct item{
int value;
int priority;
};
struct queue{
int front;
int rear;
struct item data[size];
}pq;
void enqueue(){
    if((pq.rear+1)%size==pq.front){
        printf("Priority queue is full\n");
        return;
    }
    if(pq.front==-1){
        pq.front=pq.rear=0;
    }
    else{
        pq.rear=(pq.rear+1)%size;
    }
        printf("Enter item value\n");
        scanf("%d",&pq.data[pq.rear].value);
        printf("Enter the item priority\n");
        scanf("%d",&pq.data[pq.rear].priority);
        printf("Item inserted %d with %d priority\n",pq.data[pq.rear].value,pq.data[pq.rear].priority);
    }
void dequeue(){
    struct item temp;
    if(pq.front==-1){
        printf("Queue is empty\n");
        return;
    }
    if(pq.rear==pq.front){
        temp=pq.data[pq.front];
        pq.front=pq.rear=-1;
    }
    int i=pq.rear;
    while(i!=pq.front){
        if(pq.data[i].priority.data[i-1].priority){
        temp=pq.data[i];
        pq.data[i]=pq.data[i-1];
        pq.data[i-1]=temp;
    }
    i=(i+1-size)%size;
}
temp=pq.data[pq.front];
pq.front=(pq.front+1)%size;
}
void show(){
    if(pq.front==-1){
    printf("Empty\n");
    return;
}
printf("Elements of Queue items:\n");
printf("Value        Priority\n");
int i=pq.front;
while(i!=pq.rear){
printf("%d            %d\n ",pq.data[i].value,pq.data[i].priority);
    i=(i+1)%size;
}
printf("%d            %d\n ",pq.data[i].value,pq.data[i].priority);
}
int menu(){
  int choice;
  printf("Welcome to the Implementation of priority queue\n");
  printf("1-----------Enqueue\n");
  printf("2-----------Dequeue\n");
  printf("3-----------Show\n");
  printf("4-----------Exit\n");
  printf("Enter the choice\n");

  }
int main(){
int choice;
        pq.front=pq.rear=-1;
        do{
            menu();
            scanf("%d",&choice);
            switch(choice){
        case 1:
        enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            show();
            break;
        case 4:
          printf("Thankyou for using priority queue\n");
            break;
        default:
            printf("Invalid operation");
            }
        }while(choice!=4);

 }





