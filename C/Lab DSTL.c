#include<stdio.h>
int main()
{
    int A[10],B[10],C[30],n,m,i,j,k;
    printf("Enter the size of set A\n");
    scanf("%d",&n);
    printf("Enter the elements of set A\n");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
     printf("Enter the size of set B\n");
    scanf("%d",&m);
    printf("Enter the elements of set B\n");
    for(i=0;i<m;i++){
        scanf("%d",&B[i]);
    }
    for(i=0;i<n;i++){
        C[k]=A[i];
        k++;
    }
    for(i=0;i<n;i++){
        int f=0;
        for(j=0;j<m;j++){
            if(B[i]==C[j]){
                f=1;
            }
        }
        if(f==0){
            C[k]=B[i];
            k++;
        }
    }
    printf("Union is \n");
    for(i=0;i<k;i++){
    printf("%d",C[i]);
    }
    return 0;

}
