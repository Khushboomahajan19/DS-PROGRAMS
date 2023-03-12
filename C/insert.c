#include<stdio.h>
int main()
{
int arr[10],S,P;
printf("Enter the size\n");
scanf("%d",&S);
printf("Enter the position\n");
scanf("%d",&P);
printf("enter the element");
scanf ("%d",&e);

void insert(int arr[],int e,int S,int P){
    int i;
if(P>0){
printf("Valid");
i=P-1;
arr[i]=e;
}
else if(P>S)
printf("Invalid");
else{
printf("Invalid");
}
for( int j=0;j<S;j++)
    printf("%d", arr[j]);
}
return 0;



}
