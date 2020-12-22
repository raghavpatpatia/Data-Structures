///I'm Raghav B.C.A 2nd Year(3rd Sem) Roll Number: 199094
#include <stdio.h>
int stack[100],i,n,top=-1;

void display(int stack[], int top){
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
    printf("I'm Raghav B.C.A 2nd Year(3rd Sem) Roll Number: 199094\n");
    printf("Enter the number of elements in the stack: ");
    scanf("%d",&n);
    int stack[n];
    i = 0;

    while(i < n){
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
        i++;
    }
    printf("\n");
    display(stack,top = n-1);
    return 0;
}
