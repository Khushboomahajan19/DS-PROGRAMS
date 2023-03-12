#include<stdio.h>
#define SIZE 10
 struct stack{
 int data[SIZE];
 int top;//default value is garbage
 };
 struct stack init(struct stack st){
 st.top=-1;
 return st;
 }
 struct stack push(struct stack st){
     int item;
     int top;
     int stack;
     int data;
 if(st.top==SIZE-1){
    printf("Overflow\n");
 }
 else{
    printf("Enter the item to be inserted\n");
    scanf("%d",&item);
    st.top=st.top+1;
    st.data[st.top]=item;
 }
 return st;
 }
  void show(struct stack st){
  int i;
  if(st.top==-1){
    printf("Stack empty");
  }
  else{
    printf("Stack item are:\n");
    for(i=st.top;i>=0;i--){
        printf("%d\n",st.data[i]);
    }
  }
  }
  struct stack pop(struct stack st){
  if(st.top==-1){
    printf("Stack empty");
  }
  else{
        printf("Item popped = %d\n",st.data[st.top]);
        st.top=st.top-1;
  }
  };
  int menu(){
  int choice;
  printf("1-----------Pop\n");
  printf("2-----------Push\n");
  printf("3-----------Show\n");
  printf("4-----------Peep\n");
  printf("5-----------Exit\n");
  printf("Enter the choice\n");
  scanf("%d",&choice);
  return choice;
  }
 int main(){
int i;
int choice;
 struct stack s;
        s=init(s);
        do{
            choice=menu();
            switch(choice){
        case 1:
            s=pop(s);
            break;
        case 2:
            s=push(s);
            break;
        case 3:
            show(s);
            break;
        case 4:
            printf("Coders are coding\n");
            break;
        case 5:
            printf("Coders are coding\n");
            break;
        default:
            printf("Invalid operation");
            }}
            while(choice!=5);

        //show(s);
    //printf("top=%d\n",s.top);
    //show(s);
    s=push(s);
    s=push(s);
    s=push(s);
    s=push(s);
    s=push(s);
    show(s);
 }



