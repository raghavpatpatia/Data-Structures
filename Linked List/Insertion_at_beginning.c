///Name : Raghav, Roll Number : 199094, B.C.A 2nd Year(3rd sem)
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node *add(struct node *head, int d){
    struct node *ptr = malloc(sizeof(struct node));
    ptr -> data = d;
    ptr -> link = NULL;

    ptr -> link = head;
    head = ptr;
    return head;
}

void display(struct node* head){
    if(head == NULL){
        printf("List is empty");
    }
    struct node* ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        printf("%d\n",ptr -> data);
        ptr = ptr -> link;
    }
}


int main(){
    struct node *head = NULL;
    head = (struct node*)(malloc(sizeof(struct node*)));

    head -> data = 20;
    head -> link = NULL;

    struct node *current = (struct node*)(malloc(sizeof(struct node*)));

    current -> data = 30;
    current -> link = NULL;
    head -> link = current;

    display(head);

    int data;

    printf("\nEnter the data: ");
    scanf("%d",&data);
    printf("\n");

    head = add(head, data);
    current = head;

    display(head);

    return 0;
}
