#include <stdio.h>
#include <stdlib.h>
/*
//Stack using Linked List
struct stack{
    int data;
    struct stack *next;
};
struct stack *top=NULL;
struct stack *push(struct stack *,int);
struct stack *display(struct stack *);
struct stack *pop(struct stack *);
int peek(struct stack *);
int main(){
    int option,ele;
    do{
        printf("\n1.Enter the element in Linked stack");
        printf("\n2.Display the linked stack");
        printf("\n3.Delete the element from linked stack");
        printf("\n4.Top most element");
        printf("\n5.Exit");
        printf("\n\nEnter your choice : ");scanf("%d",&option);
        switch(option){
            case 1:printf("\nEnter the element to be pushed : ");scanf("%d",&ele);
            top=push(top,ele);
            break;
            case 2:top=display(top);
            break;
            case 3:top=pop(top);
            break;
            case 4:ele=peek(top);
            if(ele!=-1)
                printf("\nThe topmost element of stack is : %d",ele);
            else
                printf("\nStack is Empty!!!");
            break;
        }
    }while(option!=5);
    return 0;
}
struct stack *push(struct stack *top,int ele){
    struct stack *new_node;
    new_node=(struct stack *)malloc(sizeof(struct stack *));
    new_node->data=ele;
    if(top==NULL){
        new_node->next=NULL;
        top=new_node;
    }
    else{
        new_node->next=top;
        top=new_node;
    }
    return top;
}
struct stack *display(struct stack *top){
    struct stack *ptr=top;
    while(ptr!=NULL){
        printf("[%d]->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
    return top;
}
struct stack *pop(struct stack *top){
    struct stack *ptr=top;
    if(top==NULL){
        printf("\nNo element is present!!!");
    }
    top=top->next;
    free(ptr);
    return top;
}
int peek(struct stack *top){
    if(top==NULL)
        return -1;
    else
        return top->data;
}
*/
/*
//Tower of Hanoi
void move(int ,char ,char ,char);
int main(){
    int n;
    printf("\nEnter the Number of rings : ");
    scanf("%d",&n);
    move(n,'A','C','B');
    return 0;
}
void move(int n,char source,char desti,char spare){
    if(n==1)
        printf("\nMove from %c to %c",source,desti);
    else{
        move(n-1,source,spare,desti);
        move(1,source,desti,spare);
        move(n-1,spare,desti,source);
    }
}
*/
//Recursion
/*
//Factorial using recursion
int factorial(int);
int main(){
    int n,res;
    printf("\nEnter any no. for factorial : ");
    scanf("%d",&n);
    res=factorial(n);
    printf("\nFactorial of %d is : %d",n,res);
    return 0;
}
int factorial(int n){
    if(n==1)
        return 1;
    else
        return (n*factorial(n-1));
}
*/
/*
//Greatest Common Divsor
int gcd(int ,int);
int main(){
    int a,b,res;
    printf("\nEnter two no. for GCD : ");
    scanf("%d %d",&a,&b);
    res=gcd(a,b);
    printf("\nGreatest Common Divisor of %d and %d is : %d",a,b,res);
    return 0;
}
int gcd(int x,int y){
    if(x%y==0)
        return y;
    else
        return gcd(y,x%y);
}
*/
/*
//Calculating exponentials
int expo(int ,int);
int main(){
    int a,b,res;
    printf("\nEnter two no. : ");scanf("%d %d",&a,&b);
    res=expo(a,b);
    printf("\n%d to the power %d is : %d",a,b,res);
    return 0;
}
int expo(int a,int b){
    if(b==0)
        return 1;
    else
        return(a*expo(a,b-1));
}*/
/*
//Fibonacci Series
int fibo_series(int);
int main(){
    int n,res,i;
    printf("\nEnter no. of terms for series : ");
    scanf("%d",&n);
    printf("\nFibonacci Series :\n");
    for(i=0;i<n;++i){
        res=fibo_series(i);
        printf("\t%d",res);
    }
    return 0;
}
int fibo_series(int a){
    if(a==0)
        return 0;
    else if(a==1)
        return 1;
    else
        return(fibo_series(a-1)+fibo_series(a-2));
}
*/
/*
//Converting infix expression into prefix expression
#include<ctype.h>
#include<string.h>
#define max 100
char st[max];
int top=-1;
void push(char st[],char);
char pop(char st[]);
void infix_to_postfix(char source[],char target[]);
void reverse(char str[]);
int get_Priority(char);
char temp,infix[100],postfix[100],tm[100];
int main(){
    printf("\nEnter an infix expression : ");
    gets(infix);
    strrev(infix);
    printf("\nReverse of infix : ");
    puts(infix);
    strcpy(postfix," ");
    infix_to_postfix(infix,postfix);
    printf("\nCorresponding postfix expression : ");
    puts(postfix);
    strcpy(tm," ");
    reverse(postfix);
    printf("\nCorresponding prefix expression : ");
    puts(tm);
    return 0;
}
void reverse(char str[]){
    int len,i=0,j=0;
    len=strlen(str);
    j=len-1;
    while(j>=0){
        if(str[j]=='(')
            tm[i]=')';
        else if(str[j]==')')
            tm[i]='(';
        else
            tm[i]=str[j];
        i++,j--;
    }
    tm[i]='\0';
}
void infix_to_postfix(char source[],char target[]){
    int i=0,j=0;
    //char temp=' ';
    strcpy(target," ");
    while(source[i]!='\0'){
        if(source[i]=='('){
            push(st,source[i]);
            i++;
           }
        else if(source[i]==')'){
            while((top!=-1) && (st[top]!='(')){
                    target[j]=source[i];
                    j++;
                  }
                  if(top==-1){
                    printf("\n Invalid Expression");
                    exit(1);
                  }
                  temp=pop(st);
                  i++;
        }
        else if(isdigit(source[i]) || isalpha(source[i])){
            target[j]=source[i];
            j++;i++;
        }
        else if(source[i]=='+'||source[i]=='-'||source[i]=='/'||source[i]=='*'||source[i]=='%'){
            while((top!=-1) && (st[top]!='(') && (get_Priority(st[top])>=get_Priority(source[i]))){
                    target[j]=pop(st);
                    j++;
                  }
                  push(st,source[i]);
                  i++;
        }
        else{
            printf("\nInvalid element!!!");
            exit(1);
        }
    }
    while((top!=-1) && (st[top]!='(')){
            target[j]=pop(st);
            j++;
          }
          target[j]='\0';
}
int get_Priority(char ope){
    if(ope=='/'||ope=='*'||ope=='%')
        return 1;
    else if(ope=='+'||ope=='-')
        return 0;
    return -1;
}
void push(char st[],char val){
    if(top==max-1){
        printf("\n Stack Overflow!!");
    }
    else{
        top++;
        st[top]=val;
    }
}
char pop(char st[]){
    char value=' ';
    if(top==-1){
        printf("\n Stack Underflow!!");
    }
    else{
        value=st[top];
        top--;
    }
    return value;
}
*/
/*
//Converting infix expression into postfix expression
#include<ctype.h>
#include<string.h>
#define max 100
char st[max];
int top=-1;
void push(char st[],char);
char pop(char st[]);
void infix_to_postfix(char source[],char target[]);
int get_Priority(char);
char temp;
int main(){
    char infix[100],postfix[100];
    printf("\nEnter an infix expression : ");
    gets(infix);
    strcpy(postfix," ");
    infix_to_postfix(infix,postfix);
    printf("\nCorresponding postfix expression : ");
    puts(postfix);
    return 0;
}
void infix_to_postfix(char source[],char target[]){
    int i=0,j=0;
    //char temp=' ';
    strcpy(target," ");
    while(source[i]!='\0'){
        if(source[i]=='('){
            push(st,source[i]);
            i++;
           }
        else if(source[i]==')'){
            while((top!=-1) && (st[top]!='(')){
                    target[j]=source[i];
                    j++;
                  }
                  if(top==-1){
                    printf("\n Invalid Expression");
                    exit(1);
                  }
                  temp=pop(st);
                  i++;
        }
        else if(isdigit(source[i]) || isalpha(source[i])){
            target[j]=source[i];
            j++;i++;
        }
        else if(source[i]=='+'||source[i]=='-'||source[i]=='/'||source[i]=='*'||source[i]=='%'){
            while((top!=-1) && (st[top]!='(') && (get_Priority(st[top])>=get_Priority(source[i]))){
                    target[j]=pop(st);
                    j++;
                  }
                  push(st,source[i]);
                  i++;
        }
        else{
            printf("\nInvalid element!!!");
            exit(1);
        }
    }
    while((top!=-1) && (st[top]!='(')){
            target[j]=pop(st);
            j++;
          }
          target[j]='\0';
}
int get_Priority(char ope){
    if(ope=='/'||ope=='*'||ope=='%')
        return 1;
    else if(ope=='+'||ope=='-')
        return 0;
    return -1;
}
void push(char st[],char val){
    if(top==max-1){
        printf("\n Stack Overflow!!");
    }
    else{
        top++;
        st[top]=val;
    }
}
char pop(char st[]){
    char value=' ';
    if(top==-1){
        printf("\n Stack Underflow!!");
    }
    else{
        value=st[top];
        top--;
    }
    return value;
}
*/
/*
//Implementing Parentheses Checker
#include <string.h>
#define max 10
int top=-1;
int stk[max];
void push(char);
char pop();
int main(){
    char exp[max],temp;
    int i,flag=1;
    printf("Enter an Expression : ");gets(exp);
    for(i=0;i<strlen(exp);++i){
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
            push(exp[i]);
           }
        if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
            if(top==-1){
                flag=0;
            }
            else{
                temp=pop();
                if(exp[i]==')' && (temp=='{' || temp=='['))
                    flag=0;
                if(exp[i]=='}' && (temp=='(' || temp=='['))
                    flag=0;
                if(exp[i]==']' && (temp=='{' || temp=='('))
                    flag=0;
            }
        }
    }
    if(top>=0)
        flag=0;
    if(flag==1)
        printf("\nValid Expression");
    else
        printf("\nInvalid Expression");
    return 0;
}
void push(char s){
    if(top==max-1){
        printf("\nOVERFLOW\n");
    }
    else{
        top=top+1;
        stk[top]=s;
    }
}
char pop(){
    if(top==-1){
        printf("\nUNDERFLOW\n");
    }
        return(stk[top--]);
}
*/
/*//Reversing list using stack
int pop();
void push(int);
int stk[10];
int top=-1;
int main()
{   int val,n,i,a[10];
    printf("\nEnter the size of array : ");scanf("%d",&n);
    printf("\nEnter the Elements :-\n");
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i){
        push(a[i]);
    }
    for(i=0;i<n;++i){
        val=pop();
        a[i]=val;
    }
    printf("\nThe Reverse of array is :-\n");
    for(i=0;i<n;++i){
        printf("\n%d",a[i]);
    }
    return 0;
}
void push(int j){
    stk[++top]=j;
}
int pop(){
    return(stk[top--]);
}
*/
