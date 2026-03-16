#include <iostream>

using namespace std;

//Selection Sort Using Pass by Reference
/*
void selectionSort(int *const,const int);
void swapElement(int *const,int *const);
int main()
{
    const int Size = 10;
    int a[Size] = {2,6,4,8,10,12,89,65,48,37};
    cout<<"Array Elements are : ";
    for(int i=0;i<Size;i++)
        cout<<a[i]<<" ";
    selectionSort(a,Size);
    cout<<"\nSorted Array Element are : ";
    for(int i=0;i<Size;i++)
        cout<<a[i]<<" ";
    return 0;
}
void selectionSort(int *const a,const int Size){
    int small;
    for(int i=0;i<Size-1;i++){
        small = i;
        for(int j=i+1;j<Size;j++){
            if(a[j] < a[small])
                small = j;
        }
        swapElement(&a[i],&a[small]);
    }
}
void swapElement(int *const a,int *const b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/
/*
size_t getSize(int);
int main(){
    int ptr = 0;
    cout<<getSize(ptr);
    return 0;
}
size_t getSize(int a){
    return sizeof a;
}
*/
/*
int main(){
    const int n = 5;
    int *ptr;
    ptr = &n;
    cout<<"Original : "<<n;
    *ptr = *ptr + 1;
    cout<<"\nChanged : "<<*ptr;
    return 0;
}
*/
/*
#include<iomanip>
int main(){
    char word[2];
    cin>>setw(3)>>word;
    cout<<word;
    return 0;
}
*/
//Selectioon Sort using pointer to the function
/*
void selectionSort(int [],const int,bool (*)(int ,int ));
void swapElement(int *const ,int *const );
bool ascending(int ,int );
bool descending(int ,int );
int main(){
    const int Size = 10;
    int a[Size] = {2,6,4,8,10,12,89,65,48,37};
    int choice;
    cout<<"Original Array : ";
    for(int i=0;i<Size;i++)
        cout<<a[i]<<" ";
    cout<<"\n\n1.Sorting in Ascending Order\n2.Sorting in Descending Order";
    cout<<"\n\nEnter Choice : ";
    cin>>choice;
    switch(choice){
        case 1 : selectionSort(a,Size,ascending);break;
        case 2 : selectionSort(a,Size,descending);break;
        default : cout<<"\nINVALID CHOICE !!!\n";break;
    }
    cout<<"\nFinal Array : ";
    for(int i=0;i<Size;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}
void selectionSort(int a[],const int Size,bool(*compare)(int ,int )){
    int SmallorLarge;
    for(int i=0;i<Size-1;i++){
        SmallorLarge = i;
        for(int j=i+1;j<Size;j++){
            if(!(*compare)(a[SmallorLarge],a[j]))
                SmallorLarge = j;
        }
        swapElement(&a[i],&a[SmallorLarge]);
    }
}
void swapElement(int *const a,int *const b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
bool ascending(int a,int b){
    return a < b;
}
bool descending(int a,int b){
    return a > b;
}
*/
