//Code by ~AS
//24th June 2023
//HEAPSORT                     

#include<bits/stdc++.h>
using namespace std;

void max_heapify(int *array, int i, int size);
void build_heap(int *array, int size);
void heapsort(int *array, int size);

int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> x;
        arr[i] = x;
    }
    heapsort(arr, n);
    for(int i:arr){
        cout << i << " ";
    }   
    return 0;
}

void build_heap(int *array, int size){
    for(int i=size/2; i>=1 ; i--){                        //i=size/2 cuz leaves of the heap begin from n/2. Since a leaf node has no children, there is no need to call max_heapify on it
    }
}

void max_heapify(int *array, int i, int size){
    int l = 2*i, r = 2*i +1;
    int largest; 
    if(l-1 < size && array[l-1] > array[i-1]){                //minus 1 cuz indices begin at 0
        largest = l;
    }else{
        largest = i;
    }
    if(r-1 < size && array[r-1] > array[largest-1]){
        largest = r;
    }
    if(largest != i){
        int temp = array[i-1];
        array[i-1] = array[largest-1];
        array[largest-1] = temp;
        max_heapify(array, largest, size);
    }
}
void heapsort(int *array, int size){
    build_heap(array, size);                  
    for(int i = size-1; i>0 ; i--){
        int temp = array[i];                     //First element is the greatest. Replace that with the last element not replaced yet, so the array is sorted in ascending order.
        array[i] = array[0];
        array[0]= temp;
        size--;
        max_heapify(array, 1, size);
    }
}