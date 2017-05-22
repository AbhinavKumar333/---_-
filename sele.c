#include<stdio.h>

int binsear(int,int *,int);
int linsear();

void main(){
    int i,key,a[10],n,pos;
    printf("Enter the number of variables to be entered");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be found");
    scanf("%d",&key);
    pos = binsear(key,a,n);
    printf("The element is found at position %d",pos+1);
}

int binsear(int key,int *a,int n){
        int l,u,mid;
        l=0; u=n-1;
        while(l<=u){
            mid = (l+u)/2;
            if(key==a[mid]){
                return mid;
            }
            else if(key<=a[mid]){
                u=mid-1;
            }
            else if(key>=mid){
                l=mid+1;
            }
        }
}
