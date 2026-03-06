#include <iostream>
using namespace std;
/*//Reverse of Array
int main()
{   int a[5];
    for(int i=0;i<5;++i)    cin>>a[i];
    for(int i=4;i>=0;--i)   cout<<a[i]<<" ";
    return 0;
}
*/
/*
void Reverse(int a[],int strt,int ed){
    while(strt<ed){
        int temp=a[strt];
        a[strt]=a[ed];
        a[ed]=temp;
        strt++;ed--;
    }
}
void display(int a[],int s){
    for(int i=0;i<s;++i)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    Reverse(a,0,n-1);
    cout<<"Reverse Array : ";
    display(a,n);
    return 0;
}
*/
/*
//Maximum and Minimum of array
//1.
int main(){
    int a[]={45,4,6,5,68,21,27,37,1,0,1,2,99};
    int n = sizeof(a)/sizeof(a[0]);
    int maxm,mini;
    if(n==1)
        maxm=mini=a[0];
    if(a[0]>a[1]){
        maxm=a[0];
        mini=a[1];
    }
    for(int i=2;i<n;++i){
        if(a[i]>maxm)
            maxm=a[i];
        else if(a[i]<mini)
            mini=a[i];
    }
    cout<<"Maximum element of array : "<<maxm<<"\nMinimum element of array : "<<mini;
    return 0;
}
*/
/*
//2.
#include<algorithm>
#include<vector>
int main(){
    //int a[]={45,4,6,5,68,21,27,37,1,0,1,2,99};
    vector<int> v{45,4,6,5,68,21,27,37,1,0,1,2,99};
    sort(v.begin(),v.end());
    cout<<v[0]<<" "<<v[v.size()-1];

    //int n=sizeof(a)/sizeof(a[0]);
    //cout<<sizeof(a[0])<<"  "<<n;
    //sort(a,a+n);
    //cout<<a[0]<<" "<<a[n-1];
    return 0;
}
*/
//Kth Smallest element in array
//1. O(nlogn)
/*#include<algorithm>
int Kth_smallest_element(int a[],int n,int k){
    sort(a,a+n);
    return a[k-1];
}
int main(){
    int a[] = {7,10,4,20,15};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 4;
    cout<<"Kth Smallest Element is : "<<Kth_smallest_element(a,n,k);
    return 0;
}
*/
/*
//Sorting without using any sorting algorithm
#include<algorithm>
#include<iterator>
int main(){
    int a[] = {0,2,1,2,0};
    int n = sizeof(a)/sizeof(a[0]);
    ostream_iterator<int> output(cout," ");
    sort(a,a+n);
    copy(a,a+n,output);
    return 0;
}
*/
/*
//moving negative elements to one side of the array
#include<algorithm>
int main(){
    int a[] = {1,6,4,-5,1,-7,-9,6,-4};
    int n = sizeof(a)/sizeof(a[0]);
    //sort(a,a+n);
    int j=0;
    for(int i=0;i<n;++i){
        if(a[i]<0){
            if(i!=j)    swap(a[i],a[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
*/
/*
//Rotation of array
int main(){
    int a[] = {1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    int rot = 3;
    while(rot--){
        int temp = a[n-1];
        for(int i=n-2;i>=0;i--){
            a[i+1] = a[i];
        }
        a[0] = temp;
    }
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    return 0;
}
*/
/*
//Largest sum contiguous Subarray
int maxSum(int a[],int n){
    int maxsum=0,cursum=0;
    for(int i=0;i<n;i++){
        cursum = cursum + a[i];
        if(cursum > maxsum) maxsum = cursum;
        if(cursum < 0)  cursum=0;
    }
    return maxsum;
}
int main(){
    int a[] = {5,-4,-2,6,-1};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Maximum sum is : "<<maxSum(a,n);
    return 0;
}
*/
/*
//Minimise maximum difference between height (It is solved using Two pointer algorithm)
#include<algorithm>
int main(){
    int a[] = {5,1,10,8};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 2;
    sort(a,a+n);
    int i=0,j=n-1;
    while(i<=j){
        if((a[i]-k) <= 0)    a[i]+=k;
        else    a[i]-=k;
        i++;
    }
    cout<<a[j]-a[0];
    return 0;
}
*/
/*
//Minimum No. of Jumps
#include<algorithm>
int main(){
    int a[] = {1,3,5,8,9,2,6,7,6,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    int jump=0,current=0,previous=0;
    for(int i=0;i<n;i++){
        if(i>previous){
            jump=jump+1;
            previous=current;
        }
        current = max(current,i+a[i]);
    }
    cout<<"No. of Jumps : "<<jump;
    return 0;
}
*/
/*
//Find Duplicate in N+1 integers in array(O(N)Time and O(1)Space is used)
int findDuplicate(int a[],int n){
    int tortoise = a[0];
    int hare = a[0];
    while(true){
        tortoise = a[tortoise];
        hare = a[a[hare]];
        if(tortoise==hare)  break;
    }
    int ptr1 = a[0];
    int ptr2 = tortoise;
    while(ptr1!=ptr2){
        ptr1 = a[ptr1];
        ptr2 = a[ptr2];
    }
    return ptr1;
}
int main(){
    int a[] = {1,3,4,2,2};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Duplicate No. is : "<<findDuplicate(a,n);
    return 0;
}
*/
/*
//Merge two sorted array without using space
int main(){
    int a[] = {1,3,5,7};
    int m = sizeof(a)/sizeof(a[0]);
    int b[] = {0,2,6,8,9};
    int n = sizeof(b)/sizeof(b[0]);
    for(int i=n-1;i>=0;i--){
        int j,last = a[m-1];
        for(j = m-2; j >= 0 && a[j] > b[i]; j--)
            a[j+1] = a[j];
        if(j != m-2 || last > b[i]){
            a[j+1] = b[i];
            b[i] = last;
        }
    }
    cout<<"Fist Array\n";
    for(int i=0;i<m;i++)
        cout<<a[i]<<" ";
    cout<<"\nSecond Array\n";
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    return 0;
}
*/
/*
//Kadane's Algorithm
int kadaneAlgo(int a[],int n){
    unsigned int cursum = 0,maxsum = 0;
    for(int i=0;i<n;i++){
        cursum = cursum + a[i];
        if(cursum > maxsum)
            maxsum = cursum;
        if(cursum < 0)
            cursum = 0;
    }
    return maxsum;
}
int main(){
    int a[] ={1,2,3,-2,5};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Maximum sum is : "<<kadaneAlgo(a,n);
    return 0;
}
*/
/*
//Merge Intervals
#include<algorithm>
#include<vector>
class Solution{
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        vector<vector<int>> ans;
        if(intervals.size()==0)
            return ans;
        sort(intervals.begin(),intervals.end());
        vector<int> temp = intervals[0];
        for(auto i : intervals){
            if(i[0] <= temp[1]){
                temp[1] = max(i[1],temp[1]);
            }else{
                ans.push_back(temp);
                temp = i;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};
int main(){
    Solution s;
    vector<vector<int>> v(2),a;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>v[i][j];
        }
    }
    a = s.merge(v);
    for(unsigned int i=0;i<a.size();i++){
        for(unsigned int j=0;j<a[i].size();j++){
            cout<<"["<<a[i][j]<<"]";
        }
    }
    return 0;
}
*/
/*
//Inversion Count
int inversionCount(int a[],int n){
    int countInverse = 0;
    int i = 0,j = n-1;
    int mid = (i+j)/2;
    while(i != mid){
        if(a[i] <= a[mid])   i++;
        else if(a[i] > a[mid]){
            int temp = a[i];
            a[i] = a[mid];
            a[mid] = temp;
            countInverse++;
            i++;
        }
    }
    while(mid != j){
        if(a[mid] <= a[j])   j--;
        else if(a[mid] > a[j]){
            int temp = a[mid];
            a[mid] = a[j];
            a[j] = temp;
            countInverse++;
            j--;
        }
    }
    return countInverse;
}
int main(){
    int a[] = {2,4,1,3,5};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Inversion Count is : "<<inversionCount(a,n);
    return 0;
}
*/
/*
//Stocks Buy and Sell
#include<algorithm>
int max_Profit(int a[],int n){
    int maxProfit = 0;
    int minSofar = 0;
    for(int i=0;i<n;i++){
        minSofar = min(minSofar,a[i]);
        int profit = a[i] - minSofar;
        maxProfit = max(maxProfit,profit);
    }
    return maxProfit;
}
int main(){
    int a[] = {7,1,5,3,6,4};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Maximum Profit : "<<max_Profit(a,n);
    return 0;
}
*/
/*
//Maximum and Minimum of an array
int main(int argc, char const *argv[])
{
    int a[] = {4,9,6,5,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    int max = INT8_MIN;
    int min = INT8_MAX;
    for(int i=1;i<n;++i){
        if(a[i] > max)
            max = a[i];        
    }
    for(int i=1;i<n;++i){
        if(a[i] <= min)
            min = a[i];        
    }
    cout<<max<<" "<<min;
    return 0;
}
*/
//


