#include<stdio.h>
#define size 10
struct queue{
int front;
int rear;
int data[size];
}cq;
int isEmpty(){
return cq.front==-1;
}
int enqueue(){
    int item;
    if((cq.rear+1)%size==cq.front){
        printf("Queue is full\n");
        return ;
    }
    if(cq.front==-1){
        cq.front=cq.rear=0;
    }
    else{
   // if(cq.front==-1)
        cq.rear=(cq.rear+1)%size;
    }
        printf("Enter the number you want to insert:");
        scanf("%d",&item);
        cq.data[cq.rear]=item;
        printf("%d inserted\n",item);
}
void dequeue_rear(){
    int item;
    if(cq.front==-1){
        printf("Queue is empty\n");
        return;
    }
    item=cq.data[cq.rear];
    if(cq.front==cq.rear){
        cq.front=cq.rear=-1;
    }
    else{
        cq.rear=(cq.rear-1+size)%size;
    }
    printf("Deleted item %d\n",item);
}
int dequeue_front(){
    int item;
    if(cq.front==-1){
        printf("Queue is empty\n");
        return 0;
    }
    item==cq.data;
    if(cq.front==cq.rear){
        cq.front=cq.rear=-1;
    }
}
void show(){
if(cq.front==-1){
    printf("Empty\n");
    return;
}
printf("Queue items:\n");
int i=cq.front;
while(i!=cq.rear){
    printf("%d ",cq.data[i]);
    i=(i+1)%size;
}
printf("%d\n",cq.data[i]);
}
 int menu(){
  int choice;
  printf("Khushboo Mahajan\n");
  printf("2100320120091\n");
  printf("1-----------Enqueue from rear\n");
  printf("2-----------Dequeue from rear\n");
  printf("3-----------Dequeue from front\n");
  printf("4-----------Show\n");
  printf("5-----------Exit\n");
  printf("Enter the choice\n");

  }
int main(){
    cq.rear=cq.front=-1;
int i;
int choice;
        //cq=init(cq);
        do{
            menu();
            scanf("%d",&choice);
            switch(choice){
        case 1:
        enqueue();
            break;
        case 2:
            dequeue_rear();
            break;
        case 3:
            dequeue_front();
            break;
        case 4:
            show();
            break;
        case 5:
          printf("Thankyou for using circularqueue program\n");
            break;
        default:
            printf("Invalid operation");
            }
        }while(choice!=4);

 }



