#include<stdio.h>
int main(){
char infix[50],postfix[50];
printf("Enter the infix expression\n");
gets(infix);
int i=0;
while(infix[i]!='\0'){
    printf("%c",infix[i]);
    i++;
}
return 0;
}
