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
int calc(int a,int b,char symbol){
switch(symbol){
case '+':
    return a+b;
 case '-':
    return a-b;
case '*':
    return a*b;
case '/':
    return a/b;
case '%':
    return a%b;
}

}
int main(){
char postfix[50];
int i=0;
int num;
s.top=-1;
//2 5 + 6 2 / 5 * - 7 +
printf("Enter postfix expression\n");
gets(postfix);
//printf("Postfix %s",postfix);
while(postfix[i]!='\0'){
    if(postfix[i]!=' ')
        {
    char symbol=postfix[i];
    int num;
    if(symbol>='0'&& symbol<='9')
    push(symbol-'0');
    else{
        int b=pop();
        int a=pop();
        num=calc(a,b,symbol);
    push(num);
    }
        }
    i++;
}
printf("Ans=%d",pop());


return 0;
}
