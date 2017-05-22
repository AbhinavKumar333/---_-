#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *getnode(){
    return((struct node*)malloc(sizeof(struct node)));
}

struct node *insertnode(struct node *first,int pos){
    int i=1,item;
    struct node *temp,*next;
    printf("Enter element");
    scanf("%d",&item);
    next = first;
    if(first==NULL){
        first = getnode();
        first->info = item;
        first->link = NULL;
    }
    search_by_pos(*first,pos);
    else if(pos==1){
        temp = getnode();
        temp->info = item;
        temp->link = first;
        first = temp;
    }
    else{
        while(pos!=i){
            temp = next;
            next = next->link;i++;
        }
        next = getnode();
        next->info = item;
        next->link = temp->link;
        temp->link = next;
        return(temp);
    }
}

struct node *search_by_pos(struct node first,int pos){
    int i=1;
    struct node *prev;
    while(pos!=i){
            prev = first;
            first = first->link; i++;
    }return prev;
}

struct node *search_by_key(struct node first,int key){
    int i=1;
    struct node *prev;
    while(first!=NULL){
        if(key==first->info){break;}
        else{
            prev = first;
            first = first->link; i++;
        }
    }return prev;
}

void display(struct node *next){
    while(next!=NULL){
        printf("%d\n",next->info);
    }
}
void main(){
    struct node *first,*next;
    int pos;
    while(pos!=100){
    printf("Enter the position");
    scanf("%d",&pos);
    next = insertnode(&first,pos);
    }display(first);
}
