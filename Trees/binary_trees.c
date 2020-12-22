///I'm Raghav,Roll Number:199094 BCA 2nd Year(3rd sem)
#include <stdio.h>
#include <stdlib.h>

struct node
{
     int data;
     struct node* left;
     struct node* right;
};

struct node* newNode(int data)
{
     struct node* node = (struct node*)malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;
     return(node);
}

void printPreorder(struct node* node)
{
     if (node == NULL)
          return;

     printf("\n%d", node->data);

     printPreorder(node->left);

     printPreorder(node->right);
}

int main()
{
     printf("I'm Raghav, Roll Number: 199094 BCA 2nd Year(3rd sem)\n");
     struct node *root  = newNode(1);
     root->left         = newNode(2);
     root->right        = newNode(3);
     root->left->left   = newNode(4);
     root->left->right  = newNode(5);
     root->right->left  = newNode(6);
     root->right->right = newNode(7);
     printf("Preorder traversal of binary tree:");
     printPreorder(root);

     getchar();
     return 0;
}
