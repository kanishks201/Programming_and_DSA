#include <iostream>
using namespace std;

// Heap Creation

// Heapify Method

int arr[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17}; // Binary tree array representation
int n = sizeof(arr)/sizeof(arr[0]);

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n && arr[left] > arr[largest])    largest = left;
    if(right < n && arr[right] > arr[largest])    largest = right;

    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

int main(int argc, char const *argv[])
{
    int startIndex = (n/2) - 1;

    for(int i = startIndex; i >= 0; i--){
        heapify(arr, n, i);
    }

    // Output heap
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
