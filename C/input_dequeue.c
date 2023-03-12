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
    int item,rear,front;
    if((cq.rear+1)%size==cq.front){
        printf("Queue is full\n");
        return ;
    }
    if(cq.front==-1){
        cq.front=cq.rear=0;
    }
    if(cq.front==-1)
        cq.front=cq.rear=0;
        printf("enter the num you want to insert:");
        scanf("%d",&item);
        cq.rear=(cq.rear+1)%size;
        cq.data[cq.rear]=item;
        printf("item inserted");
}
int dequeue(){
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
    int front,rear;
if(cq.front==-1){
    printf("Empty\n");
    return;
}
printf("Queue items:\n");
int i=front;
while(i!=rear){
    printf("%d",cq.data[i]);
    i=(i+1)%size;
}
}
 int menu(){
  int choice;
  printf("1-----------Enqueue\n");
  printf("2-----------Dequeue\n");
  printf("3-----------Show\n");
  printf("4-----------Exit\n");
  printf("Enter the choice\n");

  }
int main(){
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
            //dequeuepush();
            break;
        case 3:
            //show();
            break;
        case 4:
          //  exit(cq);
            break;
        default:
            printf("Invalid operation");
            }
        }while(choice!=4);

 }




