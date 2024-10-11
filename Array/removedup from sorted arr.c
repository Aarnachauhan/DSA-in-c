#include <stdio.h>
int removedup(int a[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(a[res-1]!=a[i]){
            a[res]=a[i];
            res++;
        }
    }
    return res;
}
int main() {
    int a[20]={1,1,2,2,3,4,5,5,6};
    int n=8;
    //before
    printf("before \n");
    for(int i=0;i<n;i++){
        printf("%d", a[i]);
    }
   n= removedup(a,n);
   //after 
   printf("after removing duplicated \n");
     for(int i=0;i<n;i++){
        printf("%d", a[i]);
    }
    return 0;
}
