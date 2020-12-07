///I'm Raghav B.C.A 2nd Year(3rd Sem) Roll Number: 199094
#include <stdio.h>
int stack[100],i,j,n,top=-1;

void push(){
    int val;
    if (top == n )
    printf("\n Overflow");
    else
    {
        printf("Enter the value: ");
        scanf("%d",&val);
        top = top +1;
        stack[top] = val;
    }
}

void pop ()
{
    if(top == -1)
    printf("Underflow");
    else
    top = top -1;
}

void display(){
    for (i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top == -1)
    {
        printf("Stack is empty");
    }
}

int main(){
    printf("Enter the number of elements in the stack:  ");
    scanf("%d",&n);
    i = 0;

    while(i < n){
        push();
        i++;
    }

    printf("\n");

    display();

    pop();

    printf("\nElements after deletion:\n\n");
    display();

    return 0;
}
