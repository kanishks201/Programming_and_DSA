#include <stdio.h>
#include <stdlib.h>
/*
//Shell Sort
#define max 10
int main(){
    int a[max]={-1},i,n,flag=1,gap_size,temp;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    gap_size=n;
    while((flag==1) || (gap_size>1)){
        flag=0;
        gap_size=(gap_size+1)/2;
        for(i=0;i<n-gap_size;i++){
            if(a[i+gap_size]>a[i]){
                temp=a[i+gap_size];
                a[i+gap_size]=a[i];
                a[i]=temp;
                flag=0;
            }
        }
    }
    printf("\nThe sorted elements are : \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
*/
/*
//Radix Sort
#define max 10
int largest(int a[],int n);
void radix_sort(int a[],int n);
int main(){
    int i,n,a[max];
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    radix_sort(a,n);
    printf("\nThe sorted array is :\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
int largest(int a[],int n){
    int large=a[0],i;
    for(i=0;i<n;i++){
        if(a[i]>large)
            large=a[i];
    }
    return large;
}
void radix_sort(int a[],int n){
    int bucket[max][max],bucket_count[max];
    int i,j,k,remainder,nop=0,divisor=1,large,pass;
    large=largest(a,n);
    while(large>0){
        nop++;
        large/=max;
    }
    for(pass=0;pass<nop;pass++){
        for(i=0;i<max;i++)
            bucket_count[i]=0;
        for(i=0;i<n;i++){
                remainder=(a[i]/divisor)%max;
                bucket[remainder][bucket_count[remainder]]=a[i];
                bucket_count[remainder]+=1;
            }
            i=0;
            for(k=0;k<max;k++){
                for(j=0;j<bucket_count[k];j++){
                    a[i]=bucket[k][j];
                    i++;
                }
            }
            divisor *= max;
    }
}
*/
/*
//Quick Sort
#define max 20
int partition(int a[],int ,int );
void quick_sort(int a[],int ,int );
int main(){
    int i,n,a[max];
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of array : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quick_sort(a,0,n-1);
    printf("\nThe sorted array is : \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
void quick_sort(int a[],int beg,int end){
    int loc;
    if(beg<end){
        loc=partition(a,beg,end);
        quick_sort(a,beg,loc-1);
        quick_sort(a,loc+1,end);
    }
}
int partition(int a[],int beg,int end){
    int left=beg,right=end,loc=beg,flag=0,temp;
    while(flag!=1){
        while((a[loc]<=a[right])&&(loc!=right))
            right--;
        if(loc==right)
                flag=1;
        else if(a[loc]>a[right]){
            temp=a[loc];
            a[loc]=a[right];
            a[right]=temp;
            loc=right;
        }
        if(flag!=1){
            while((a[loc]>=a[left])&&(loc!=left))
                left++;
            if(loc==left)
                flag=1;
            else if(a[loc]<a[left]){
                temp=a[loc];
                a[loc]=a[left];
                a[left]=temp;
                loc=left;
            }
        }
    }
    return loc;
}
*/
/*
//Merge Sort
#define max 20
void merge(int a[],int ,int ,int);
void merge_sort(int a[],int ,int);
int main(){
    int i,n,a[max];
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of array : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    merge_sort(a,0,n-1);
    printf("\nThe sorted array is : \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
void merge_sort(int a[],int beg,int end){
    int mid;
    if(beg<end){
        mid=(beg+end)/2;
        merge_sort(a,beg,mid);
        merge_sort(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}
void merge(int a[],int beg,int mid,int end){
    int i=beg,j=mid+1,index=beg,temp[max],k;
    while((i<=mid)&&(j<=end)){
        if(a[i]<a[j]){
            temp[index]=a[i];
            i++;
        }
        else{
            temp[index]=a[j];
            j++;
        }
        index++;
    }
    if(i<mid){
        while(j<=end){
            temp[index]=a[j];
            index++;j++;
        }
    }
    else{
        while(i<=mid){
            temp[index]=a[i];
            index++;i++;
        }
    }
    for(k=beg;k<index;k++){
        a[k]=temp[k];
    }
}
*/
/*
//Selection Sort
#define max 20
int smallest(int a[],int ,int);
void selection_sort(int a[],int);
int main(){
    int a[max],i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the array elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    selection_sort(a,n);
    printf("\nThe sorted array is: \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
void selection_sort(int a[],int n){
    int k,t,pos;
    for(k=0;k<n;k++){
        pos=smallest(a,k,n);
        t=a[k];
        a[k]=a[pos];
        a[pos]=t;
    }
}
int smallest(int a[],int k,int n){
  int small=a[k],pos=k,j;
  for(j=k+1;j<n;j++){
    if(small>a[j]){
        small=a[j];
        pos=j;
    }
  }
  return pos;
}
*/
/*
//Insertion Sort
#define max 20
int main(){
    int a[max],i,j,k,n,temp;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the array elements :- ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(k=1;k<n;k++){
        temp=a[k];
        j=k-1;
        while((temp<a[j])&&(j>=0)){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("\n The sorted elements are :\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
*/
/*
//Bubble Sort
#define max 20
int main()
{   int n,i,j,a[max],temp;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter array elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted array is : \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
*/
