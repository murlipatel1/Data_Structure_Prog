#include <stdio.h>

int stack[100],choice,n,top,x,i;

int main(){
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    char s[n];
    for(int i=0; i<n; i++){
        push(s[i]);
    }

    transverse();
}

int isEmpty(){
    if(top==-1){
        printf("the stack is empty");
        return 1;
    }
    return 0;
}

int isFull(){
    if(top== n-1){
        printf("the stack is full ");
        return 1;
    }
    return 0;

}

void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void transverse()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}

void peek(){
    printf("top element in stack %d " ,stack[top] );
}