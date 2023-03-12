#include<stdio.h>
#include<string.h>
int main(){
    char s[20],stack[20];
    int top=-1,i=0;
    printf("Enter a string\n");
    gets(&s);
    while(s[i]!='\0'){
        top++;
        stack[top]=s[i];
        i++;
}
i=top;
while(i!=-1){
    printf("%c",stack[i]);
    i--;
}
return 0;
}