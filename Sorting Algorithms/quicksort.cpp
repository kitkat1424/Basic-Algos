//Coded by ~AS
//25th June 2023
//QUICKSORT

#include<bits/stdc++.h>
using namespace std;

int partition(int *array, int p, int r);             //Where p is the first index and r is the last index
void quicksort(int* array, int p, int r);

int main()
{
    int arr[10] = {10, 9, 4, 7, 1, 5, 8, 3, 2, 6};
    quicksort(arr, 0, 9);
    //int q = partition(arr,0,4);
    //cout << q << endl;
    for(int i:arr){
        cout << i << " ";
    }
    return 0;
}

int partition(int *array, int p, int r){                  
    int x = array[r];
    int j= p-1;                                 //-1 for the first iter                     
    for(int i=p; i < r; i++){
        if(array[i] <= x){                            
            j++;                                //when element is greater than x, j is not increased. So, when a lesser element occurs later, it is replaced by the first element that happened to be greater than x
            int temp = array[i];
            array[i] = array[j];                        
            array[j] = temp;
        }
    }
    int temp = array[j+1];                       //replacing the first greater element with x    
    array[j+1] = array[r];
    array[r] = temp;
    return j+1;                                  //returns the index of the element around which the array is partitioned. 
}                                                //remember that partitions can be empty

void quicksort(int* array, int p, int r){
    if(p < r){
        int q = partition(array, p, r);
        quicksort(array, p, q-1);                 
        quicksort(array, q+1, r);
    }
}