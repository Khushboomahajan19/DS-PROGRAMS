#include<stdio.h>
#define size 10
struct stack{
    int top;
    int data[size];
};
struct stack push(struct stack st){
    int value;
    if(st.top==size-1){
        printf("Stack is full");
    }
    else{
        printf("Enter the value to be inserted\n");
        scanf("%d",&value);
        st.top++;
        st.data[st.top]=value;
    }
}
struct stack pop(struct stack st){
if(st.top=-1){
    printf("Stack is empty");
}
else{
    printf("Item deleted %d",st.data[st.top]);
    st.top--;
}
}
struct stack show(struct stack st){
 if(st.top=-1){
    printf("Stack is empty");
}
else{
    for(int i=st.top;i>0;i++){
        printf("the stack contains -%d\n",st.data[i]);
    }
}   
}
int main(){
    struct stack s;
    s=push(s);
    // s=push(s);
    s=pop(s);

   return 0; 
}