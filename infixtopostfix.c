#include<stdio.h>
#include<stdlib.h>

struct stack{
    char *a;
    int top;
};

void push(struct stack *s,char item){
    *(s->a+(++(s->top))) = item;
}

char pop(struct stack *s){
    return(*(s->a+((s->top)--)));
}

int priority(char *c){
    if(*c == '('){
        return 0;}
    else if(*c == '+' || *c == '-'){
        return 1;}
    else if(*c == '*' || *c == '/'){
        return 2;}
}

void main(){
    struct stack s1,s2; int max=12; s1.a = (char*)malloc(max*sizeof(char));
    s1.top = -1;
    char infix[100],*e,x;
    printf("Enter infix expression"); scanf("%s",infix);
    e = infix;
    while(*e != '\0'){
        if(isalnum(*e)){
            printf("%c",*e);}
        else if(*e == '('){
            push(&s1,*e);}
        else if(*e == ')'){
            while((x = pop(&s1)) != '('){
                printf("%c",x); }}
        else if(priority(s1.a+(s1.top))>=priority(e)){
            printf("%c",pop(&s1));
            push(&s1,*e);}
        else{
            push(&s1,*e);}

        e++;
    }while(s1.top!=-1 ) { printf("%c",pop(&s1));}

}
