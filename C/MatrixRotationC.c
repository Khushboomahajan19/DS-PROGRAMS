// Matrix rotation clockwise
#include<stdio.h>
#define SIZE 10;
void rotate(int arr[][10]){
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            int t=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=t;
        }
    }
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE/2;j++){
            int t=arr[i][j];
            arr[i][j]=arr[j][SIZE-j-1];
            arr[i][SIZE-j]=t;
        }
    }
}
void show(int arr[][SIZE],int SIZE)
int main(){
int A[][4]={1,2,3,4},
{5,6,7,8},
{9,10,11,12};

}