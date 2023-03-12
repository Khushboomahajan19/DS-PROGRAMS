#include<stdio.h>
#define size 252
struct stack{
int data[25];
int top;
}s;
int push(int n){
if(s.top==size-1)
   return 0;
   s.data[++s.top]=n;
   }
int pop(){
   if(s.top==-1)
    return 0;
   return s.data[s.top--];
   }
int isEmpty(){
return s.top==-1;
}
int peep(){
return s.data[s.top];
}
int prcd(char op1,char op2){
if(op1=='$'||op1=='*'||op1=='/'||op1=='%'){
    return (op2!='$');
}
else{
   if(op1=='+'||op1=='-')
        return 1;
   else
    return 0;
}
}
int main(){
char infix[50],postfix[50];
int i=0,p;
char x;
s.top=-1;
printf("Enter the infix expression\n");
gets(infix);
strrev(infix);
i = 0;

while(infix[i]!='\0'){
    if(infix[i]==')')
        infix[i]='(';
    else if(infix[i]=='(')
        infix[i] = ')';

    char sy=infix[i];
    printf("\n%c",sy);
    i++;
if(sy>='a'&&sy<='z'||sy>='A'&&sy<='Z'||sy>='0'&&sy<='9'){
    postfix[p]=sy;
    p++;
}
else if(isEmpty()){
    push(sy);
}
else if(sy=='('){
            push(sy);
        }
else if(sy==')'){
       while(isEmpty()&&(peep()!='(')){
                x=pop();
                postfix[p++]=x;
             }
             push(x);
        }
        //show(symbol,postfix);
        else{
            while(!isEmpty()&&(peep()!='(')&&prcd(peep(),sy)){
                x=pop();
                postfix[p++]=x;
             }
             push(sy);
        }
        }
while(!isEmpty()){
    x=pop();
    postfix[p++]=x;
    //show(symbol,postfix);
}
postfix[p]='\0';
printf("%s\n",postfix);
strrev(postfix);
printf("\nPostfix=%s\n",postfix);
return 0;
}
