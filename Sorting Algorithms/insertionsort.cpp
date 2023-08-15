#include<bits/stdc++.h>
using namespace std;

void reverseInsertionSort(int* arr, int len);
void InsertionSort(int* arr, int len);

int main()
{
    int t;
    cin >> t;
    int arr[t];
    for(int i=0; i<t; i++){
        cin >> arr[i];
    }
    reverseInsertionSort(arr, t);
    cout << "Decreasing Order \n";
    for(int i:arr){
        cout << i << " ";
    }
    InsertionSort(arr, t);
    cout << '\n' << "Increasing Order \n";
    for(int i:arr){
        cout << i << " ";
    }
    return 0;
}

void reverseInsertionSort(int* arr, int len){
    for(int i=1; i<len; i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j] < key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void InsertionSort(int* arr, int len){
    for(int i=1; i<len; i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
