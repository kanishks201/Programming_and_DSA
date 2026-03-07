#include <stdio.h>
#include <stdlib.h>
/*
//Reverse the element of Queue
#define max 10
int queue[max],front=-1,rear=-1;
void insert();
void reverse();
void display();
int main(){
    int option;
    do{
        printf("\n1.Insert the element in queue");
        printf("\n2.Reverse the element of queue");
        printf("\n3.Display the queue element");
        printf("\n\nEnter your choice : ");
        scanf("%d",&option);
        switch(option){
            case 1:insert();break;
            case 2:reverse();break;
            case 3:display();break;
        }
    }while(option<4);
    return 0;
}
void insert(){
    int ele;
    printf("\nEnter the element to be inserted : ");
    scanf("%d",&ele);
    if(rear==max-1)
        printf("\nOverflow Queue!!!\n");
    else if(front==-1 && rear==-1)
        front=rear=0;
    else
        rear=rear+1;
    queue[rear]=ele;
    printf("\nElement is inserted in Queue...\n");
}
void reverse(){
    int i;
    printf("\nThe reverse is : \n");
    for(i=rear;i>=front;--i){
        printf("%d\t",queue[i]);
    }
}
void display(){
    int i;
    if(front==-1 && front>rear)
        printf("\nNo element is present in queue...\n");
    else{
        printf("\nThe Queue elements are : \n");
        for(i=front;i<=rear;++i)
            printf("%d\t",queue[i]);
    }
}
*/
/*
//Josephus Problem
struct node{
    int num;
    struct node *next;
};
struct node *ptr,*new_node,*start=NULL;
int main(){
    int n,k,i,c;
    printf("\nEnter the number of player : ");
    scanf("%d",&n);
    printf("\nEnter kth value for elimination : ");
    scanf("%d",&k);
    start=(struct node *)malloc(sizeof(struct node));
    start->num=1;
    ptr=start;
    for(i=2;i<=n;++i){
        new_node=(struct node *)malloc(sizeof(struct node));
        ptr->next=new_node;
        new_node->num=i;
        new_node->next=start;
        ptr=new_node;
    }
    for(c=1;c<=n;++c){
        for(i=0;i<k-1;++i){
            ptr=ptr->next;
        }
        ptr->next=ptr->next->next;//elimination
    }
    printf("\nThe Winner is : %d",ptr->num);
    return 0;
}
*/
/*
//Priority Queue
struct node{
    int data,priority;
    struct node *next;
};
struct node *start=NULL;
struct node *insertion(struct node *start){
    int num,pri;
    struct node *ptr,*p;
    ptr=(struct node *)malloc(sizeof(struct node ));
    printf("\nEnter Data and its priority : ");
    scanf("%d %d",&num,&pri);
    ptr->data=num;
    ptr->priority=pri;
    if(start==NULL || pri < start->priority){
        ptr->next=start;
        start=ptr;
    }
    else{
        p=start;
        while(p->next!=NULL && p->next->priority <= pri){
            p=p->next;
        }
        ptr->next=p->next;
        p->next=ptr;
    }
    printf("\nData is inserted in Queue...\n");
    return start;
}
struct node *delete_element(struct node *start){
    struct node *ptr;
    if(start==NULL)
        printf("\nUnderflow Queue!!!\n");
    else{
        ptr=start;
        start=start->next;
        free(ptr);
    }
    printf("\nData is deleted from Queue...\n");
    return start;
}
void display(struct node *start){
    struct node *ptr=start;
    while(ptr!=NULL){
        printf("[%d|%d]->",ptr->data,ptr->priority);
        ptr=ptr->next;
    }
    printf("NULL\n");
}
int main(){
    int option;
    do{
        printf("\n1.Insert element in Queue");
        printf("\n2.Delete element from Queue");
        printf("\n3.Display Queue");
        printf("\n\nEnter your choice : ");
        scanf("%d",&option);
        switch(option){
            case 1:start=insertion(start);break;
            case 2:start=delete_element(start);break;
            case 3:display(start);break;
        }
    }while(option<4);
    return 0;
}
*/
/*
//Dequeue
#define max 10
int left=-1,right=-1;
int deque[max];
void input_dequeue();
void output_dequeue();
void insert_left();
void insert_right();
void delete_left();
void delete_right();
void display();
int main(){
    int option;
    printf("*************MAIN MENU***************\n");
    printf("\n1.Input restricted Queue");
    printf("\n2.Output restricted Queue");
    printf("\n\nEnter your choice : ");
    scanf("%d",&option);
    switch(option){
        case 1:input_dequeue();break;
        case 2:output_dequeue();break;
    }
    return 0;
}
void input_dequeue(){
    int option;
    do{
        printf("\n1.Insert element at right");
        printf("\n2.Delete element from left");
        printf("\n3.Delete element from right");
        printf("\n4.Display queue");
        printf("\n\nEnter your choice : ");
        scanf("%d",&option);
        switch(option){
            case 1:insert_right();break;
            case 2:delete_left();break;
            case 3:delete_right();break;
            case 4:display();break;
        }
    }while(option<5);
}
void output_dequeue(){
    int option;
    do{
        printf("\n1.Insert element at right");
        printf("\n2.Insert element at left");
        printf("\n3.Delete element from left");
        printf("\n4.Display queue");
        printf("\n\nEnter your choice : ");
        scanf("%d",&option);
        switch(option){
            case 1:insert_right();break;
            case 2:insert_left();break;
            case 3:delete_left();break;
            case 4:display();break;
        }
    }while(option<5);
}
void insert_left(){
    int ele;
    printf("\nEnter element to be inserted : ");
    scanf("%d",&ele);
    if((left==0 && right==max-1))
        printf("\nOverflow Queue!!!\n");
    if(left==-1)
        left=right=0;
    else
        if(left==0)
            left=max-1;
        else
            left=left-1;
    deque[left]=ele;
    printf("\nElement is inserted in queue...\n");
}
void insert_right(){
    int ele;
    printf("\nEnter element to be inserted : ");
    scanf("%d",&ele);
    if((left==0 && right==max-1))
        printf("\nOverflow Queue!!!\n");
    if(left==-1 && right==-1)
        left=right=0;
    else
        if(right==max-1)
            right=0;
        else
            right=right+1;
    deque[right]=ele;
    printf("\nElement is inserted in queue...\n");
}
void delete_left(){
    if(left==-1)
        printf("\nUnderflow Queue!!!\n");
    else{printf("\nElement %d is deleted from queue...",deque[left]);}
    if(left==right)
        left=right=-1;
    else
        if(left==max-1)
            left=0;
        else
            left=left+1;
}
void delete_right(){
    if(left==-1)
        printf("\nUnderflow Queue!!!\n");
    printf("\nElement %d is deleted from queue...",deque[right]);
    if(left==right)
        left=right=-1;
    else
        if(right==0)
            right=max-1;
        else
            right=right-1;
}
void display(){
    int front=left,rear=right;
    if(front==-1){
        printf("\nQueue is empty!!!\n");
    }
    else{
        printf("\nThe element of queue are : \n");
        if(front<=rear){
            while(front<=rear){
                printf("%d\t",deque[front]);
                front++;
            }
        }
        else{
            while(front<=max-1){
                printf("%d\t",deque[front]);
                front++;
            }
            front=0;
            while(front<=rear){
                printf("%d\t",deque[front]);
                front++;
            }
        }
        printf("\n");
    }
}
*/
/*
//Circular Queue
#define max 10
int c_queue[max];
int front=-1,rear=-1;
void insert();
int delete_element();
void display();
int main(){
    int option,val;
    do{
        printf("\n1.Insert element in Circular queue");
        printf("\n2.Delete element from queue");
        printf("\n3.Display queue element");
        printf("\n\nEnter your choice : ");
        scanf("%d",&option);
        switch(option){
            case 1:insert();break;
            case 2:val=delete_element();
            if(val!=-1)
                printf("\nElement %d is deleted from queue...\n",val);
            else
                printf("\nQueue is empty!!!\n");
            break;
            case 3:display();break;
        }
    }while(option<4);
    return 0;
}
void insert(){
    int ele;
    printf("\nEnter element to be inserted : ");
    scanf("%d",&ele);
    if(front==0 && rear==max-1)
        printf("\nOverflow Queue!!!\n");
    if(front==-1 && rear==-1)
        front=rear=0;
    else if(front!=0 && rear==max-1)
        rear=0;
    else
        rear=rear+1;
    c_queue[rear]=ele;
}
int delete_element(){
    int val;
    if(front==-1)
        printf("\nUnderflow Queue\n");
    val=c_queue[front];
    if(front==rear)
        front=rear=-1;
    else
        if(front==max-1)
            front=0;
        else
            front=front+1;
    return val;
}
void display(){
    int i;
    printf("\n");
    if(front==-1 && rear==-1)
        printf("\nQueue is empty!!!\n");
    else
    if(front<rear){
        for(i=front;i<=rear;++i)
            printf("%d\t",c_queue[i]);
    }
    else{
        for(i=front;i<max;++i)
            printf("%d\t",c_queue[i]);
        for(i=0;i<=rear;++i)
            printf("%d\t",c_queue[i]);
    }
}
*/
/*Just In Time Debugging Error!!!*/
/*
//Linked representation of Queue
struct node{
    int data;
    struct node *next;
};
struct queue{
    struct node *front,*rear;
};
struct queue *q;
void create_queue(struct queue *);
struct queue *insert(struct queue *,int);
struct queue *delete_element(struct queue *);
struct queue *display(struct queue *);
int peek(struct queue *);
int main(){
    int option,val,ele;
    create_queue(q);
    do{
        printf("\n1.Insert element in queue");
        printf("\n2.Delete element from queue");
        printf("\n3.Display queue");
        printf("\n4.Topmost element in queue");
        printf("\n\nEnter your choice : ");
        scanf("%d",&option);
        switch(option){
            case 1:printf("\nEnter element to be inserted in queue : ");
                   scanf("%d",&ele);
                   q=insert(q,ele);break;
            case 2:q=delete_element(q);break;
            case 3:q=display(q);break;
            case 4:val=peek(q);
                   if(val!=-1)
                    printf("\nThe topmost element in queue is : %d\n",val);
                   else
                        printf("\nQueue is empty!!!\n");
                   break;
        }
    }while(option<=4);
    return 0;
}
void create_queue(struct queue *q){
    q->rear=NULL;
    q->front=NULL;
}
struct queue *insert(struct queue *q,int ele){
    struct node *new_node;
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=ele;
    if(q->front==NULL){
        q->front=new_node;
        q->rear=new_node;
        q->front->next=q->rear->next=NULL;
    }
    else{
        q->rear->next=new_node;
        q->rear=new_node;
        q->rear->next=NULL;
    }
    return q;
}
struct queue *delete_element(struct queue *q){
    struct node *ptr;
    if(q->front==NULL){
        printf("\nNo element is present!!!\n");
    }
    else{
        ptr=q->front->next;
        q->front=q->front->next;
        free(ptr);
    }
    return q;
}
struct queue *display(struct queue *q){
    struct node *ptr=q->front;
    if(ptr==NULL)
        printf("\nQueue is empty!!!\n");
    else{
        printf("\n");
        while(ptr!=q->rear){
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
        printf("%d\t",ptr->data);
    }
    return q;
}
int peek(struct queue *q){
    if(q->front==NULL){
        printf("\nNo element is present !!!\n");
        return -1;
    }
    else
        return (q->front->data);
}
*/
/*
//Linear Queue
#define max 10
int queue[max];
int front=-1,rear=-1;
void insert();
int delete_element();
void display();
int main()
{   int option,val;
    do{
        printf("\n1.Insert element in queue");
        printf("\n2.Delete element from queue");
        printf("\n3.Display queue");
        printf("\n\nEnter your choice : ");
        scanf("%d",&option);
        switch(option){
            case 1:insert();break;
            case 2:val=delete_element();
            if(val!=-1)
                printf("\nElement %d is deleted from queue",val);
            else
                printf("\nQueue is Empty");
            break;
            case 3:display();
        }
    }while(option<4);
    return 0;
}
void insert(){
    int ele;
    printf("\nEnter element in queue : ");
    scanf("%d",&ele);
    if(rear==max-1)
        printf("\nQueue is full!!!\n");
    else if(front==-1 && rear==-1)
        front=rear=0;
    else
        rear=rear+1;
    queue[rear]=ele;
    printf("\nElement inserted in queue...\n");
}
int delete_element(){
    int val;
    if(front==-1 && front>rear){
        printf("\nUnderflow Condition !!!\n");
        return -1;
    }
    else{
        val=queue[front];
        front++;
    }
    return val;
}
void display(){
    int i;
    printf("\n");
    if(front==-1 && front>rear)
        printf("\nQueue is empty...\n");
    else{
        for(i=front;i<=rear;++i)
            printf("%d\t",queue[i]);
    }
    printf("\n");
}
*/
