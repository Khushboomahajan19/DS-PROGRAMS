#include<stdio.h>
int main(){

int A[10],n1,n2,i,k=0,f=0,j;
int B[10];
int C[20];
printf("Name:Khushboo Mahajan\n"); 
printf("Roll no:2100320120091\n"); 
printf("Enter the size of array A\n");
scanf("%d",&n1);
printf("Enter the elements \n ");
for(i=0;i<n1;i++){
scanf("%d",&A[i]);
}
printf("Enter the size of array B\n");
scanf("%d",&n2);
printf("Enter the elements \n ");
for(i=0;i<n2;i++){
scanf("%d",&B[i]);
}

for(i=0;i<n2;i++){
    for(j=0;j<n1;j++){
        if(B[j]==A[i]){
            f=1;
            C[k]=B[j];
            k++;
        }
        }
    }

    if(f==1){
    	for(i=0;i<k;i++){
printf("%d\t",C[i]);
    }
}
 else 
{
	printf("The sets are disjoint\n");
}
return 0;
}
