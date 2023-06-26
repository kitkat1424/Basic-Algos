#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {10, 9, 8, 7, 6, 5 , 4, 3, 2, 1};
    for(int i=1; i<10; i++){
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;                                         
    }
    for(int i:arr){
        cout << i << " ";
    }
    return 0;
}