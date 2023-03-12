#include<stdio.h>
int main(){
    int A[10],n,temp,k;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int j=1;j<n;j++){
        temp=A[j];
        k=j-1;
        while(k>=0&&A[k]>temp){
            A[k+1]=A[k];
            k--;
        }
        A[k+1]=temp;
        printf("%d",A[k]);
    }
    // for(int i=temp;i<n;i++){
    //     printf("%d",A[i]);
    // }
    return 0;
}