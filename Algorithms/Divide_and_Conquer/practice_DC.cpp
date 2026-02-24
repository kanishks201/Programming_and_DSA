#include <iostream>
using namespace std;

//Max Min problem
/*int main(int argc, char const *argv[])
{
    int arr[] = {10, 5, 0, 18, -3, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max, min;
    max = min = arr[0];
    for (int i = 2; i < n; i++)    {
        if(arr[i] > max)
            max = arr[i];
        else if(arr[i] < min)
            min = arr[i];
    }
    cout<<max<<" "<<min;
    
    return 0;
}*/
/*
//Max Min problem Divide and Conquer approach
#include <cmath>
int arr[] = {10, 5, 0, 18, -3, 20, 15}; // Global Array
int mx, mn;
void MaxMin(int i, int j){
    if(i == j)
        mx = mn = arr[i];
    else if(i == j-1){
        if(arr[i] < arr[j]){
            mx = arr[j];
            mn = arr[i];
        }else{
            mx = arr[i];
            mn = arr[j];
        }
    }else{
        int mid = floor((i+j)/2);
        MaxMin(i, mid);
        int mx1 = mx, mn1 = mn;
        MaxMin(mid+1, j);
        if(mx < mx1)  mx = mx1;
        if(mn > mn1)  mn = mn1;
    }
}
int main(int argc, char const *argv[])
{
    int n = sizeof(arr)/sizeof(arr[0]);
    MaxMin(0, n-1);
    cout<<mx<<" "<<mn;

    return 0;
}
*/
/*
// Iterative Binary Search
#include <cmath>
int arr[] = {10, 5, 0, 18, -3, 20, 15};
int n = sizeof(arr)/sizeof(arr[0]);
void BinarySearch(int *arr, int ele){
    int low = 0, high = n;
    while(low <= high){
        int mid = floor((low + high)/2);
        if(ele < arr[mid])  high = mid - 1;
        else if(ele > arr[mid]) low = mid + 1;
        else{
            cout<<ele<<" is present at "<<mid<<" position";
            return ;
        } 
    }
}
int main(int argc, char const *argv[])
{
    int ele = 18; // Element to search
    BinarySearch(arr, ele);
    return 0;
}
*/
/*
// Recursive Bianry Search
#include <cmath>
int arr[] = {10, 5, 0, 18, -3, 20, 15};
int n = sizeof(arr)/sizeof(arr[0]);
int BinarySearch(int *arr, int low, int high, int ele){
    if(low == high){
        if(ele == arr[low]) return low;
        else    return 0;
    }
    else{
        int mid = floor((low + high)/2);
        if(ele == arr[mid]) return mid;
        else if(ele < arr[mid]) return BinarySearch(arr, low, mid-1, ele);
        else    return BinarySearch(arr, mid+1, high, ele);
    }
}
int main(int argc, char const *argv[])
{   
    int ele = 18;
    cout<<ele<<" is present at "<<BinarySearch(arr, 0, n-1, ele)<<" position";
    return 0;
}
*/

/*
// Merge Sort
#include <cmath>
int arr[] = {10, 5, 0, 18, -3, 20, 15};
int n = sizeof(arr)/sizeof(arr[0]);
int low = 0, high = n-1;

void Merge(int low, int mid, int high){
    int brr[n];
    int h = low, i = low, j = mid+1;
    while(h <= mid && j <= high){
        if(arr[h] <= arr[j]){
            brr[i] = arr[h];
            h = h + 1;
        }else{
            brr[i] = arr[j];
            j = j + 1;
        }
        i = i + 1;
    }
    if(h > mid){
        for(int k=j; k<=high; k++){
            brr[i] = arr[k];
            i = i + 1;
        }
    }else{
        for(int k=h; k<=mid; k++){
            brr[i] = arr[k];
            i = i + 1;
        }
    }
    for(int k=low; k<=high; k++){
        arr[k] = brr[k];
    }
}
void MergeSort(int low, int high){
    if(low < high){
        int mid = floor((low + high)/2);
        MergeSort(low, mid);
        MergeSort(mid+1, high);
        Merge(low, mid, high);
    }
}
int main(int argc, char const *argv[])
{
    MergeSort(low, high);
    for(int index = 0; index < n; index++)
        cout<<arr[index]<<" ";
    return 0;
}
*/

// Hoare Pratition Method with first element as pivot
// Quick Sort
// int arr[] = {10, 5, 0, 18, -3, 20, 15};
// int n = sizeof(arr)/sizeof(arr[0]);
// int low = 0, high = n-1;

// int partition(int low, int high){
//     int pivot_ele = arr[low];
//     int i = low;
//     int j = high;
//     while(i<j){
//         while(arr[i] <= pivot_ele)  i=i+1;
//         while(arr[j] > pivot_ele)   j=j-1;

//         if(i < j)   swap(arr[i], arr[j]);
//     }
//     swap(arr[low], arr[j]);

//     return j;
// }
// void QuickSort(int low, int high){
//     if(low < high){
//         int pivot_index = partition(low, high);
//         QuickSort(low, pivot_index-1);
//         QuickSort(pivot_index+1, high);
//     }
// }
// int main(int argc, char const *argv[])
// {
//     QuickSort(low, high);
//     for(int index = 0; index < n; index++)
//         cout<<arr[index]<<" ";
//     return 0;
// }


/*
// Lomuto Partition Method (Partition Exchange sort) Last element as pivot
int arr[] = {10, 5, 0, 18, -3, 20, 15};
int n = sizeof(arr)/sizeof(arr[0]);
int low = 0, high = n-1;

int partition(int low, int high){
    int pivot_ele = arr[high];
    int i = low-1;
    for(int j = low; j<=high-1; j++){
        if(arr[j] <= pivot_ele){
            i = i + 1;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void QuickSort(int low, int high){
    if(low < high){
        int pivot_index = partition(low, high);
        QuickSort(low, pivot_index-1);
        QuickSort(pivot_index+1, high);
    }
}
int main(int argc, char const *argv[])
{
    QuickSort(low, high);
    for(int index = 0; index < n; index++)
        cout<<arr[index]<<" ";
    return 0;
}
*/
