#include <stdio.h>
void swap(int *a,int *b){
    int temp= *a;
        *a=*b;
        *b=temp;
}



void reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=n/2){
        swap(&arr[i],&arr[j]);
        
        
      
       i++;
       j--;
    }
}

int main(){
    int arr[20]={1,2,3,4,5};
    int n=5;
    printf("before reverse \n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    reverse(arr,n);
    printf("after reverse n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
