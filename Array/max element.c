#include<stdio.h>
int findmax(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
       if(arr[i]>arr[0]){
           max=arr[i];
       } 
    }
    return max;
}

int main(){
    int arr[10]={1,8,7,56,90};
    int n=5;
    int maximum=findmax(arr,n);
    printf("%d",maximum);
}
