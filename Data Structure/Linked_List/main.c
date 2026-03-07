#include <stdio.h>
#include <stdlib.h>
/*
//Deletion in header linked list
struct node{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node *create_list(struct node *start){
    int num;
    struct node *new_node,*ptr;
    printf("\nEnter data : ");
    scanf("%d",&num);
    while(num!=-1){
        new_node=(struct node *)malloc(sizeof(struct node *));
        new_node->data=num;
        new_node->next=NULL;
        if(start==NULL){
            start=(struct node *)malloc(sizeof(struct node *));
            start->next=new_node;
        }
        else{
            ptr=start;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=new_node;
        }
        printf("\nEnter data : ");
        scanf("%d",&num);
    }
    return start;
}
struct node *display_list(struct node *start){
    struct node *ptr=start->next;
    if(start==NULL){
        printf("\nNo element is present!!!\n");
    }
    while(ptr!=NULL){
        printf("[%d]->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
    return start;
}
struct node *deletion(struct node *start){
    struct node *ptr,*preptr;
    ptr=start->next;
    preptr=ptr;
    while(ptr->next!=NULL){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
    return start;
}
int main(){
    int option;
    do{
        printf("\n1. Enter elements in header linked list");
        printf("\n2. Display the header linked list");
        printf("\n3. Deletion from header linked list");
        printf("\n\nEnter your choice : ");scanf("%d",&option);
        switch(option){
            case 1:start=create_list(start);
            printf("\nHeader Linked List created...\n");
            break;
            case 2:start=display_list(start);
            break;
            case 3:start=deletion(start);
            printf("\nElement Deleted...\n");
            break;
            default:printf("\nINVALID CHOICE!!!\n");
        }
    }while(option<4);
    return 0;
}
*/
/*//Sorting in doubly linked list
struct node{
    struct node *next,*prev;
    int data;
};
struct node *start=NULL;
struct node *create_list(struct node *start){
    struct node *new_node,*ptr;
    int num;
    printf("\nEnter Data : ");
    scanf("%d",&num);
    while(num!=-1){
        if(start==NULL){
            new_node=(struct node *)malloc(sizeof(struct node ));
            new_node->prev=NULL;
            new_node->data=num;
            new_node->next=NULL;
            start=new_node;
        }
        else{
            ptr=start;
            new_node=(struct node *)malloc(sizeof(struct node ));
            new_node->data=num;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=new_node;
            new_node->prev=ptr;
            new_node->next=NULL;

        }
        printf("\nEnter Data : ");
        scanf("%d",&num);
    }
    printf("\nDOUBLY LINKED LIST IS CREATED...\n");
    return start;
}
struct node *display(struct node *start){
    struct node *ptr=start;
    if(start==NULL){
        printf("\nNO ELEMENT IS PRESENT!!!\n");
    }
    while(ptr!=NULL){
        printf("[%d]->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
    return start;
}
struct node *sort_list(struct node *start){
    struct node *ptr1=start,*ptr2;
    int temp;
    while(ptr1!=NULL && ptr1->next!=NULL){
        ptr2=ptr1;
        while(ptr2->next!=NULL){
            if(ptr1->data > ptr2->next->data){
                temp=ptr2->next->data;
                ptr2->next->data=ptr1->data;
                ptr1->data=temp;
            }
            else{
                ptr2=ptr2->next;
            }
        }
        ptr1=ptr1->next;
    }
    printf("\nList is Sorted...\n");
    return start;
}
struct node *delete_list(struct node *start){
    struct node *ptr=start;
    if(start==NULL){
        printf("\nNo element is present!!!\n");
    }
    start=start->next;
    start->prev=NULL;
    free(ptr);
    return start;
}
struct node *delete_full_list(struct node *start){
    while(start!=NULL){
        start=delete_list(start);
    }
    printf("\nList is Deleted...\n");
    return start;
}
int main(){
    int option;
    do{
        printf("\n1. Enter data in linked list");
        printf("\n2. Display the linked list");
        printf("\n3. Sort the list");
        printf("\n4. Delete the element from list");
        printf("\n5. Delete the list");
        printf("\n\nEnter your choice : ");scanf("%d",&option);
        switch(option){
            case 1:start=create_list(start);break;
            case 2:start=display(start);break;
            case 3:start=sort_list(start);break;
            case 4:start=delete_list(start);break;
            case 5:start=delete_full_list(start);break;
            default:printf("\nINVALID CHOICE!!!\n");
        }
    }while(option<6);
    return 0;
}
*/
/*
//Program for circular linked list
struct node{
    struct node *next;
    int data;
};
struct node *start=NULL;
struct node *create_list(struct node *start){
    struct node *new_node,*ptr;
    int num;
    printf("\nEnter Data : ");
    scanf("%d",&num);
    while(num!=-1){
        new_node=(struct node *)malloc(sizeof(struct node *));
        new_node->data=num;
        if(start==NULL){
            new_node->next=new_node;
            start=new_node;
        }
        else{
            ptr=start;
            while(ptr->next!=start){
                ptr=ptr->next;
            }
            ptr->next=new_node;
            new_node->next=start;
        }
        printf("\nEnter Data : ");
        scanf("%d",&num);
    }
    printf("\nCIRCULAR LINKED LIST CREATED...\n");
    return start;
}
struct node *display(struct node *start){
    struct node *ptr=start;
    while(ptr->next!=start){
        printf("[%d]->",ptr->data);
        ptr=ptr->next;
    }
    printf("[%d]->",ptr->data);
    printf("START\n");
    return start;
}
int main(){
    int option;
    do{
        printf("\n1. Enter the elements of Circular Linked List");
        printf("\n2. Display the Linked List");
        printf("\n\nEnter your choice : ");scanf("%d",&option);
        switch(option){
            case 1:start=create_list(start);break;
            case 2:start=display(start);break;
            default: printf("\nINVALID CHOICE!!!\n");
        }
    }while(option<4);
    return 0;
}
*/
/*
//Program to sort the linked list
struct node{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node *create_list(struct node *start){
    struct node *new_node,*ptr;
    int num;
    printf("\nEnter data : ");
    scanf("%d",&num);
    while(num!=-1){
        new_node=(struct node *)malloc(sizeof(struct node *));
        new_node->data=num;
        if(start==NULL){
            new_node->next=NULL;
            start=new_node;
        }
        else{
            ptr=start;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=new_node;
            new_node->next=NULL;
        }
        printf("\nEnter data : ");
        scanf("%d",&num);
    }
    return start;
}
struct node *display(struct node *start){
    struct node *ptr=start;
    if(start==NULL){
        printf("\nNO ELEMENT IS PRESENT!!!\n");
    }
    while(ptr!=NULL){
        printf("[%d]->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
    return start;
}
struct node *sort_list(struct node *start){
    printf("\nList is sorted...\n");
    struct node *ptr1=start,*ptr2;
    int temp;
    while(ptr1!=NULL && ptr1->next!=NULL){
        ptr2=ptr1;
        while(ptr2->next!=NULL){
            if(ptr1->data > ptr2->next->data){
                temp = ptr2->next->data;
                ptr2->next->data = ptr1->data;
                ptr1->data = temp;
            }
            else{
                ptr2=ptr2->next;
            }
        }
        ptr1=ptr1->next;
    }
    return start;
}
int main(){
    int option;
    do{
        printf("\n1. Enter data in linked list");
        printf("\n2. Display the linked list");
        printf("\n3. Sort the linked list");
        printf("\n\nEnter your choice : ");scanf("%d",&option);
        switch(option){
            case 1: start=create_list(start);break;
            case 2: start=display(start);break;
            case 3: start=sort_list(start);break;
            default: printf("\nINVALID CHOICE!!!\n");
        }
    }while(option<4);
    return 0;
}
*/
/*INCORRECT AND INCOMPLETE*/
/*
//Program to print no. of non zero elements in the list
struct node{
    struct node *next;
    int data;
};
struct node *start=NULL;
struct node *create_list(struct node *start){
    int num;
    struct node *new_node,*ptr;
    printf("\nEnter data : ");
    scanf("%d",&num);
    while(num!=-1){
        new_node=(struct node *)malloc(sizeof(struct node *));
        new_node->data=num;
        if(start==NULL){
            new_node->next=NULL;
            start=new_node;
        }
        else{
            ptr=start;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=new_node;
            new_node->next=NULL;
        }
        printf("\nEnter data : ");
        scanf("%d",&num);
    }
    return start;
}
struct node *display(struct node *start){
    struct node *ptr=start;
    if(start==NULL){
        printf("\n NO ELEMENT IS PRESENT!!!\n");
    }
    while(ptr!=NULL){
        printf("[%d]->",ptr->data);
        ptr=ptr->next;
       }
       printf("NULL\n");
    return start;
}
struct node *print_non_zero(struct node *start){
    struct node *ptr=start,*ptr1=start,*temp;
    int count=0,val=0;
    while(ptr!=NULL){
        if(ptr1->data==val){
            temp=ptr1;
            free(temp);
            ptr->next=ptr1->next->next;
            printf("[%d]->",ptr->data);
            count+=1;
        }
        ptr1=ptr1->next;
        ptr=ptr->next;
    }
    printf("NULL\n");
    printf("\nNo. of zeros is : %d",count);
    return start;
}
int main(){
    int option;
    do{
        printf("\n1. Enter elements in linked list");
        printf("\n2. Display the linked list");
        printf("\n3. Display the non zero elements");
        printf("\n\nEnter your choice : ");scanf("%d",&option);
        switch(option){
            case 1: start=create_list(start);break;
            case 2: start=display(start);break;
            case 3: start=print_non_zero(start);break;
            default: printf("\nINVALID CHOICE!!!\n");
        }
    }while(option<4);
    return 0;
}
*/

/*
//Program to print total no. of occurrences of given item
struct node{
    int num;
    struct node *next;
};
struct node *start=NULL;
struct node *create_list(struct node *start){
    int data;
    struct node *new_node,*ptr;
    printf("\nEnter data : ");
    scanf("%d",&data);
    while(data!=-1){
            new_node=(struct node *)malloc(sizeof(struct node));
            new_node->num=data;
            if(start==NULL){
                new_node->next=NULL;
                start=new_node;
            }
            else{
                ptr=start;
                while(ptr->next!=NULL){
                    ptr=ptr->next;
                }
                ptr->next=new_node;
                new_node->next=NULL;
            }
            printf("\nEnter data : ");
            scanf("%d",&data);
    }
    return start;
}
struct node *display(struct node *start){
    struct node *ptr;
    ptr=start;
    if(start==NULL){
        printf("\nNO ELEMENT IS PRESENT!!!");
    }
    while(ptr!=NULL){
        printf("[%d]->",ptr->num);
        ptr=ptr->next;
    }
    return start;
}
struct node *occur(struct node *start){
    int count=0,val;
    printf("\n\nEnter any element present in the list : ");
    scanf("%d",&val);
    struct node *ptr=start;
    while(ptr!=NULL){
        if(ptr->num==val){
            count+=1;
        }
        ptr=ptr->next;
    }
    printf("\nOccurrence of %d is %d\n",val,count);
    return start;
}
int main(){
    int option;
    do{
        printf("\n1. Enter elements in linked list");
        printf("\n2. Display the linked list");
        printf("\n3. Occurrence of elements");
        printf("\n\n Enter choice : ");
        scanf("%d",&option);
        switch(option){
            case 1:start=create_list(start);break;
            case 2:start=display(start);break;
            case 3:start=occur(start);break;
            default : printf("\nINVALID CHOICE!!!");
        }
    }while(option<4);
    return 0;
}
*/
/*
//Program to delete the same nodes in linked list
struct node{
    int num;
    struct node *next;
};
struct node *start = NULL;
struct node *create_list(struct node *);
struct node *display(struct node *);
struct node *delete_node(struct node *);
int main()
{   int option;
    do{
        printf("\n1. Enter elements of Linked List");
        printf("\n2. Display the Linked List");
        printf("\n3. Deletion of elements in Linked List");
        printf("\n\n Enter your choice : ");
        scanf("%d",&option);
        switch(option){
            case 1: start = create_list(start);
                    break;
            case 2: start = display(start);
                    break;
            case 3: start = delete_node(start);
        }
    }while(option!=4);
    return 0;
}
struct node *create_list(struct node *start){
    int data;
    struct node *new_node,*ptr;
    printf("\nEnter Data : ");
    scanf("%d",&data);
    while(data!=-1){
            new_node=(struct node *)malloc(sizeof(struct node));
            new_node->num=data;
            if(start==NULL){
                new_node->next=NULL;
                start=new_node;
            }
            else{
                ptr=start;
                while(ptr->next!=NULL){
                    ptr=ptr->next;
                }
                ptr->next=new_node;
                new_node->next=NULL;
            }
            printf("\nEnter Data : ");
            scanf("%d",&data);
    }
    return start;
}
struct node *display(struct node *start){
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL){
        printf("[%d]\t",ptr->num);
        ptr=ptr->next;
    }
    return start;
}
struct node *delete_node(struct node *start){
    struct node *ptr1, *ptr2, *dup;
    ptr1 = start;
    //Pick elements one by one
    while (ptr1 != NULL && ptr1->next != NULL)
    {
        ptr2 = ptr1;
        //Compare the picked element with rest
        //of the elements
        while (ptr2->next != NULL)
        {
            //If duplicate then delete it
            if (ptr1->num == ptr2->next->num)
            {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                free(dup);
            }
            else
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    return start;
}
*/
/*
//Program to reverse the linked list (iterative approach)
struct Node
{
    int data;
    struct Node *next;
};
struct Node *start = NULL;

int main(int argc, char const *argv[])
{
    struct Node *newNode;
    for (int i = 1; i < 5; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = NULL;

        if(start == NULL){
            start = newNode;
        }
        else{
            struct Node *ptr = start;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
    }
    //Display 
    printf("Original List : ");
    struct Node *temp = start;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

    //Reverse of Linked List
    struct Node *prev = NULL, *curr = start, *nextNode;
    while (curr != NULL){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    //Display Reverse List
    printf("\nReversed List : ");
    struct Node *temp2 = prev;
    while(temp2 != NULL){
        printf("%d ",temp2->data);
        temp2 = temp2->next;
    }
    
    return 0;
}
*/
/*
//Program to reverse linked list (Recursive)
struct Node{
    int data;
    struct Node *next;
};
struct Node *start = NULL;

struct Node *reverseList(struct Node *head){
    if(head == NULL || head->next == NULL)
        return head;
    struct Node *rest = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;

    return rest;
}

int main(){
    
    struct Node *newNode;
    for(int i=1;i<5;++i){
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = NULL;
    
        if(start == NULL){
            start = newNode;
        }
        else{
            struct Node *ptr = start;
            while (ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
    }
    //Display
    printf("Original List : ");
    struct Node *temp = start;
    while (temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    
    start = reverseList(start);

    printf("\nReversed List : ");
    struct Node *temp2 = start;
    while (temp2 != NULL){
        printf("%d ",temp2->data);
        temp2 = temp2->next;
    }
    
    return 0;
}
*/
//Linked List Group Reverse
struct Node
{
    int data;
    struct Node *next;
};
struct Node *start = NULL;

int main(int argc, char const *argv[])
{
    struct Node *newNode;
    for (int i = 1; i < 9; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = NULL;

        if(start == NULL){
            start = newNode;
        }
        else{
            struct Node *ptr = start;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
    }
    //Display 
    printf("Original List : ");
    struct Node *temp = start;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

    //Reversal In Group
    int k = 4;
    struct Node *cptr = start;
    int node = 0;
    while (cptr != NULL){
        cptr = cptr->next;
        node++;
    }
    printf("\n%d",node);
    struct Node *prev = NULL, *curr = start, *nextNode;
    while(nextNode != NULL){
        int count = k;
        while(curr != NULL && count>0){
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            count--;
        }
    }
    //Reverse List
    printf("\nReversed List : ");
    struct Node *temp2 = prev;
    while (temp2 != NULL){
        printf("%d ",temp2->data);
        temp2 = temp2->next;
    }

    return 0;
}

