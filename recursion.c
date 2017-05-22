#include<stdio.h>
#include<stdlib.h>

int fibonacci(int x){
    if(x == 0){return 0;}
    else if(x == 1){return 1;}
    else{
        return(fibonacci(x-1)+fibonacci(x-2));
    }
}

int binarysearch(int *a,int key,int l,int u){
    int m = (l+u)/2;
    if(key==*(a+m)){return m;}
    else if(key<*(a+m)){binarysearch(a,key,0,m-1);}
    else{binarysearch(a,key,m+1,u);}
}


void main(){
    int n,i,*a,l,u,key;
    printf("Enter the length of fibonacci");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    l=0;u=n-1;
    for(i=0;i<n;i++){
        printf("%d\t",fibonacci(i));*(a+i) = fibonacci(i);
    }
    printf("Enter the key");scanf("%d",&key);
    printf("\t%d",binarysearch(a,key,0,n-1));
}
