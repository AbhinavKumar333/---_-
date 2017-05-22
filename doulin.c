#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *llink,*rlink;
};

struct node *getnode(){
	return(struct node *)malloc(sizeof(struct node));
}

struct node *create_node(struct node *first,int item){
    struct node *temp;
    if(first==NULL){
        first = getnode();
        first->info = item;
        first->llink = NULL;
        first->rlink = NULL;
        return first;
    }
    else{
        temp = getnode();
        temp->info = item;
        temp->llink = first->llink;
        temp->rlink = first;
        first->llink = temp;
        return temp;
    }
}

void main(){
	struct node *first,*temp,*x,*next; int key,count=0,i,item; char c;
	first = NULL;

	printf("Enter your choice\n");
	printf("\ta. Create a note at front\n");
	printf("\tb. Insert a node at left position\n");
	printf("\tc. Delete a node\n");
	printf("\td. Display all nodes\n");
	printf("\tx. Exit\n");
	do{	scanf("%c",&c);
		switch(c){
			case 'a':	printf("Enter an element"); scanf("%d",&item); first = create_node(first,item); count++;break;

			case 'b':	printf("Enter the key"); scanf("%d",&key);
                        printf("Enter an element"); scanf("%d",&item);
                        next = first;
                        while(next!=NULL){
                            if(key==next->info){ temp = getnode(); temp->info = item;
                            (next->llink)->rlink = temp; temp->rlink=next; next->llink = temp;
                            temp->llink = next->llink;}
                            next=next->rlink;
                        }count++; break;

            case 'c':   printf("Enter the node to be deleted"); scanf("%d",&key);
                        next = first;
                        if(first->info==key){ (first->rlink)->llink=NULL; first=first->rlink; }
                        else if(first->info==key && first->rlink==NULL){ first=NULL; }
                        else{
                            while(next!=NULL){
                                if(key==next->info){ (next->llink)->rlink=next->rlink;
                                if(next->rlink!=NULL){ (next->rlink)->llink = next->llink; }
                                free(next); }next=next->rlink;
                            }
                        }count--;break;
                        //  else if(pos==count){prev->rlink = next->rlink; free(next);}
                        //else{prev->rlink = next->rlink; next2 = next->rlink; next2->llink = next->llink; free(next);}count--;break;

            case 'd':       next = first;
                            while(next != NULL){
                                printf("|%d|<-->",next->info);    next = next->rlink;
                        }break;

		}

	}while(c != 'x');

}
