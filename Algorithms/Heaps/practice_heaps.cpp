#include <iostream>
using namespace std;

// Heap Creation

// Heapify Method

// int arr[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17}; // Binary tree array representation
// int n = sizeof(arr)/sizeof(arr[0]);

// void heapify(int arr[], int n, int i){
//     int largest = i;
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;

//     if(left < n && arr[left] > arr[largest])    largest = left;
//     if(right < n && arr[right] > arr[largest])    largest = right;

//     if(largest != i){
//         swap(arr[largest], arr[i]);
//         heapify(arr, n, largest);
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int startIndex = (n/2) - 1;

//     for(int i = startIndex; i >= 0; i--){
//         heapify(arr, n, i);
//     }

//     // Output heap
//     cout<<"Heap: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";

//     // Heapsort
//     cout<<"Heapsort: ";
//     for(int i = n-1; i > 0; i--){
//         swap(arr[0], arr[i]);
//         heapify(arr, i, 0);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }


// Kth smallest element using heap

#include <queue>
int arr[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
int n = sizeof(arr)/sizeof(arr[0]);

int kth_small(int arr[], int k){
    
    priority_queue<int> p;
    // priority_queue<int, vector<int>, greater<int>> p; // for kth largest element

    for(int i=0;i<n;i++){
        p.push(arr[i]);

        if(p.size() > k)    p.pop();
    }
    return p.top();
}

int main(int argc, char const *argv[])
{
    int k = 4;

    cout<<kth_small(arr, k);

    return 0;
}

