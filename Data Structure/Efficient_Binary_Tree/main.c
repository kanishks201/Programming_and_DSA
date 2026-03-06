#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
//Binary Tree

struct node{
    int data;
    struct node *left,*right;
};
struct node *tree;
void createTree(struct node *);
struct node *createNode(struct node *);
struct node  *insertNode(struct node *,int);
void printInorder(struct node *);
void deleteNode(struct node *, int);
struct node *getDeepestRightNode(struct node *);
void deleteDeepestRightNode(struct node *, struct node *);
int main(){
    int option,val;
    createTree(tree);
    do{
        printf("\n1.Create Tree");
        printf("\n2.Insert Node");
        printf("\n3.Display Tree");
        printf("\n4.Delete Node");
        printf("\n\nEnter option : ");
        scanf("%d",&option);
        switch(option){
            case 1: tree = createNode(tree);
                    break;
            case 2: printf("\nEnter Data : ");
                    scanf("%d",&val);
                    tree = insertNode(tree,val);
                    printf("\n\n Value Inserted...\n");
                    break;
            case 3: printf("\nThe Element of Tree are : \n");
                    printInorder(tree);
                    printf("\n");
                    break;
            case 4: printf("\n Enter element to be deleted: ");
                    scanf("%d", &val);
                    deleteNode(tree, val);
                    printf("\n\n Element Deleted...\n");
                    break;
            default: printf("\n\nInvalid Choice!!!\n\n");
                    break;
        }
    }while(option<=4);
    return 0;
}
void createTree(struct node *tree){
    tree = NULL;
}
struct node *createNode(struct node *tree){
    int val;
    struct node *temp;
    printf("\nEnter Data : ");
    scanf("%d",&val);
    temp = (struct node *)malloc(sizeof(struct node));
    if(val==-1)
        return NULL;
    temp->data = val;
    printf("Left child value for %d :- ",val);
    temp->left = createNode(tree);
    printf("Right child value for %d :- ",val);
    temp->right = createNode(tree);
    return temp;
}
struct node *insertNode(struct node *tree,int val){
    struct node *insert_temp = (struct node *)malloc(sizeof(struct node));
    insert_temp->data = val;
    insert_temp->left = NULL;
    insert_temp->right = NULL;
    struct node *temp = NULL;
    if(tree == NULL){
        tree = createNode(tree);
        return tree;
    }else {
        struct node* queue[100];
        int front = -1, rear = -1;
        queue[++rear] = tree;
        while(front != rear){
            temp = queue[++front];
            if(temp->left == NULL){
                temp->left = insert_temp;
                return tree;
            }
            else
                queue[++rear] = temp->left;
            
            if(temp->right == NULL){
                temp->right = insert_temp;
                return tree;
            }
            else
                queue[++rear] = temp->right;
        }
    }
}

struct node *getDeepestRightNode(struct node *tree){
    struct node *temp = NULL;
    struct node* queue[100];
    int front = -1, rear = -1;
    queue[++rear] = tree;
    while(front != rear){
        temp = queue[++front];
        if(temp->left != NULL)
            queue[++rear] = temp->left;
        if(temp->right != NULL)
            queue[++rear] = temp->right;
    }

    return temp;
}

void deleteDeepestRightNode(struct node *tree, struct node *delete_node){
    struct node *temp = NULL;
    struct node* queue[100];
    int front = -1, rear = -1;
    queue[++rear] = tree;

    while(front != rear){
        temp = queue[++front];

        if(temp == delete_node){
            temp = NULL;
            free(delete_node);
            return;
        }
        if(temp->left != NULL){
            if(temp->left == delete_node){
                temp->left = NULL;
                free(delete_node);
                return;
            }else{
                queue[++rear] = temp->left;
            }
        }
        if(temp->right != NULL){
            if(temp->right == delete_node){
                temp->right = NULL;
                free(delete_node);
                return;
            }else{
                queue[++rear] = temp->right;
            }
        }
    }
}

void deleteNode(struct node *tree, int val){
    if(tree == NULL){
        printf("\n Tree is empty!!!");
        return;
    }
    if(tree->left == NULL && tree->right == NULL){
        if(tree->data == val){
            free(tree);
            tree = NULL;
        }else{
            printf("\n Node not found...");
        }
    }

    struct node *temp = NULL, *key = NULL;
    struct node* queue[100];
    int front = -1, rear = -1;
    queue[++rear] = tree;

    while(front != rear){
        temp = queue[++front];
        if(temp->data == val){
            key = temp;
        }
        if(temp->left != NULL)
            queue[++rear] = temp->left;
        if(temp->right != NULL)
            queue[++rear] = temp->right;
    }

    if(key != NULL){
        struct node *getDeepestNode = getDeepestRightNode(tree);
        key->data = getDeepestNode->data;
        deleteDeepestRightNode(tree, getDeepestNode);
    }else{
        printf("\n Node is empty");
    }

}

void printInorder(struct node *tree){
    if(tree==NULL)
        return ;
    printInorder(tree->left);
    printf(" %d ",tree->data);
    printInorder(tree->right);
}

