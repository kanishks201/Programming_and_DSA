#include <stdio.h>
#include <stdlib.h>
/*
void show(char s[]);
int main()
{   char s[20];
    printf("Enter string:-");
    gets(s);
    show(s);
    return 0;
}
void show(char s[20]){
    printf("String is:- ");
    puts(s);
}
*/

/*
#include<string.h>
//String concatenation
int main(){
    char a[50],b[50];
    int i=0,j=0;
    printf("Enter 1st string :");gets(a);
    printf("Enter 2nd string :");gets(b);
    while(b[i]!='\0'){
        i++;
    }
    while(a[j]!='\0'){
        b[i]=a[j];
        i++;j++;
    }
    b[i]='\0';
    printf("Final String : ");puts(b);
    //printf("Final String is : %s",strcat(a,b));
    return 0;
}
*/

/*
#include<string.h>
//Comparison of strings
int main(){
    char a[20],b[20];int i;
    printf("Enter 1st string :");gets(a);
    printf("Enter 2nd string :");gets(b);
    i=strcmp(a,b);
    printf("i = %d\n",i);
    if(strcmp(a,b)==1){
        printf("Strings are not equal...");
    }
    else{
        printf("Strings are equal...");
    }
    return 0;
}
*/

/*INCORRECT !!!*/
/*
#include<string.h>
//Replacjng pattern in the string
int main(){
    char a[30],b[30];int i=0,j=0;
    printf("Enter String : ");gets(a);
    printf("\nEnter character to be replaced : ");gets(b);
    while(a[i]!='\0'){
        while(b[j]!='\0'){
            if(a[i]==b[j]){
                a[i]=a[i]-b[j];
                j++;
            }
        }
    }
    printf("\nChanged String : ");puts(a);
    return 0;
}
*/

/*
#include<string.h>
//Count the occurence of given character
int main(){
    char a[20],b;int count=0,k;
    printf("Enter string :");gets(a);
    printf("Enter character/word to search :");scanf("%c",&b);
    for(k=0;k<=strlen(a);k++){
        if(a[k]==b){
            count++;
        }
    }
    printf("\nOccurrence of Character : %d",count);
    return 0;
}
*/

/*
//Program to find no. of upper-lower case,digits and special character
#include<string.h>
int main(){
    char a[20];int i,upper=0,lower=0,digit=0,special=0;
    printf("Enter String :");gets(a);
    for(i=0;a[i]!='\0';++i){
        if(a[i]>='A' && a[i]<='Z'){
            upper++;
        }
        else if(a[i]>='a' && a[i]<='z'){
            lower++;
        }
        else if(a[i]>='0' && a[i]<='9'){
            digit++;
        }
        else{
            special++;
        }
    }
    printf("\nNo. of upper case : %d",upper);
    printf("\nNo. of lower case : %d",lower);
    printf("\nNo. of digits : %d",digit);
    printf("\nNo. of special character : %d",special);
    return 0;
}
*/

/*
//Reverse of string
#include<string.h>
int main(){
    char a[30];int i=0;
    printf("Enter string :");gets(a);
    while(a[i]!=' '){
        strrev(a);
    i++;
    }
    printf("New string :");puts(a);
    return 0;
}
*/

/*
//Program to Reverse the string
#include<string.h>
int main(){
    char a[20],b[20];int i=0,j=0,k=0;
    printf("Enter 1st String : ");gets(a);
    printf("Enter 2nd String : ");gets(b);
    strcat(a,b);
    printf("\nGiven string : ");puts(a);
    while(i<(strlen(a)-strlen(b))){
        b[i]=a[j+i];
        i++;
    }
    b[i]='\0';
    while(k<strlen(a)){
        a[k]=a[strlen(b)+k];
        k++;
    }
    a[k]='\0';
    strcat(a,b);
    printf("\nChanged string : ");puts(a);
    return 0;
}
*/

/*
#include<string.h>
int main(){
    char a[30],f[30]={ },l[30]={ }; int i=0,j,k=0,p=0;
    printf("Enter String : ");gets(a);
    printf("%d\n",strlen(a));
    j=strlen(a)-1;
    while(a[i]!=' '){
        f[i]=f[i]+a[i];
        a[p]=a[p]-f[i];
        i++;p++;
    }
    puts(f);
    while(a[j]!=' '){
        l[k]=l[k]+a[j];
        a[p]=a[p]-l[k];
        j--;k++;p++;
    }
    puts(l);
    while(a[p]!='\0'){
        a[p]=a[p]-f[i];
        a[p]=a[p]-l[k];
        p++;i++;k++;
    }
    puts(a);
    //printf("String : %s %s %s",l,a,f);
    return 0;
}
*/
