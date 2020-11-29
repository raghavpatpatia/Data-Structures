///Name : Raghav, Roll Number : 199094, B.C.A 2nd Year(3rd sem)
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int display(struct node* p){
    while(p != NULL){
        printf("%d\n", p -> data);
        p = p -> next;
    }
    return 0;
}

void delete_end(struct node* head){
    struct node *p1,*p2;
    if(head == NULL){
        printf("\nlist is empty");
    }
    else if(head -> next == NULL){
            head = NULL;
            free(head);
    }
    else{
        p1 = head;
        while(p1 -> next != NULL){
            p2 = p1;
            p1 = p1 -> next;
        }
        p2 -> next = NULL;
        free(p1);
        }
        p1 = NULL;
}

int main(){
    struct node *a = NULL;
    struct node *b = NULL;
    struct node *c = NULL;

    a = (struct node*)(malloc(sizeof(struct node*)));
    b = (struct node*)(malloc(sizeof(struct node*)));
    c = (struct node*)(malloc(sizeof(struct node*)));

    a -> data = 10;
    a -> next = b;

    b -> data = 20;
    b -> next = c;

    c -> data = 30;
    c -> next = NULL;

    printf("Linked List before deletion: \n");
    display(a);

    delete_end(a);

    printf("\nLinked List after deletion: \n");
    display(a);

    return 0;
}


