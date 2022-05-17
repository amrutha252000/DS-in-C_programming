#include<stdio.h>
#include<stdlib.h>
#define size 5

void push(int,int*,int*);
int pop(int*,int*);
void display(int*,int*);
void peek(int*,int*);
void palindrome();

void main(){
    int c,ele;
    int* stack = malloc(size*sizeof(int));
    int* top = malloc(sizeof(int));
    *top=-1;
    do{
        printf("enter the choice\n1-push\n2-pop\n3-display\n4-peek\n5-palindrome\n");
        scanf("%d",&c);
        switch(c){
            case 1: printf("enter the stack element:");
                    scanf("%d",&ele);
                    push(ele,stack,top);
                    break;
            case 2: ele=pop(stack,top);
                    printf("the poped ele is %d",ele);
                    break;
            case 3: display(stack,top);
                    break;
            case 4: peek(stack,top);
                    break;
            case 5: palindrome();
                    break;
            case 6: exit(0);
            default: printf("invalid choice\n");
            }
    }while(1);
}

void push(int ele, int* stack, int* top){
    if(*top==4){
        printf("stack full hence cant add\n");
    }
    else{
        *top=*top+1;
        stack[*top]=ele;
        // *(stack+(*top)) = ele;
    }
}

int pop(int* stack, int* top){
    if(*top==-1){
        printf("stack empty nothing to delete\n");
    }
    else{
        int poped_element;
        poped_element=stack[*top];
        *top=*top-1;
        return poped_element;
    }
}

void display(int* stack, int* top){
    int i;
    for(i=*top;i>=0;i--){
        printf("the stack elements are %d\n",stack[i]);
    }
    printf("Done\n");
}

void peek(int* stack, int* top){
    printf("the top element is %d\n",stack[*top]);
}

void palindrome(){
    
}