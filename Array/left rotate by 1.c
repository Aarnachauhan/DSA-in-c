#include <stdio.h>
void leftrotate(int a[],int n){
int temp=a[0];
for(int i=0;i<n-1;i++){
   a[i]=a[i+1];
} 
a[n-1]=temp;

}
int main() {
    int a[20]={1,2,3,4,5};
    int n=5;
    int temp;
    //before
    printf("before \n");
    for(int i=0;i<n;i++){
        printf("%d", a[i]);
    }
   leftrotate(a,n);
   //after 
   printf("after removing duplicated \n");
     for(int i=0;i<n;i++){
        printf("%d", a[i]);
    }
    return 0;
}
