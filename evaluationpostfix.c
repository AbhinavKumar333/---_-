#include<stdio.h>
#include<stdlib.h>

struct stack{
    float *a;
    int top;
};

void push(struct stack *s,float item){
    *(s->a+(++(s->top))) = item;
}

float pop(struct stack *s){
    return(*(s->a+((s->top)--)));
}

void main(){
    struct stack s1,s2;
    int max=12;char postfix[100],*e;printf("Enter postfix::"); scanf("%s",postfix);
    float rhs,lhs;
    s1.top = -1;
    s1.a = (float*)malloc(max*sizeof(float));
    e = postfix;
    while(*e != '\0'){
        if(isalnum(*e)){
            push(&s1,(float)(*e-'0')); }
        else{
            rhs = pop(&s1); lhs = pop(&s1);
            switch(*e){
                case '+':push(&s1,rhs+lhs);break;
                case '-':push(&s1,rhs-lhs);break;
                case '*':push(&s1,rhs*lhs);break;
                case '/':push(&s1,lhs/rhs);break;
            }
        }e++;
    }printf("%f",pop(&s1));
}
