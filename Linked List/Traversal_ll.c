#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int display(struct node* p){
    while(p != NULL){
        printf("%d\t", p -> data);
        printf("%p\n", p -> next);

        p = p -> next;
    }
    return 0;
}

int main(){
    struct node *a = NULL;
    struct node *b = NULL;
    struct node *c = NULL;
    struct node *d = NULL;

    a = (struct node*)(malloc(sizeof(struct node*)));
    b = (struct node*)(malloc(sizeof(struct node*)));
    c = (struct node*)(malloc(sizeof(struct node*)));
    d = (struct node*)(malloc(sizeof(struct node*)));

    a -> data = 20;
    a -> next = b;

    b -> data = 40;
    b -> next = c;

    c -> data = 60;
    c -> next = d;

    d -> data = 80;
    d -> next = NULL;

    display(a);

    return 0;
}
