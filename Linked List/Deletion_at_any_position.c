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

void delete_key(struct node** head, int key){
    struct node* temp = *head, *prev;

    if (temp != NULL && temp -> data == key){
        *head = temp -> next;
        free(temp);
        return;
    }

    while (temp != NULL && temp -> data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL){
        return;
    }
    prev -> next = temp -> next;
    free(temp);
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

    int key;
    printf("\nEnter data you want to delete: ");
    scanf("%d", &key);

    delete_key(&a, key);

    printf("\nLinked List after deletion: \n");
    display(a);

    return 0;
}


