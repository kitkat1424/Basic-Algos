#include<bits/stdc++.h>
using namespace std;

void mergesort(int *arr, int l, int r);
void merge(int *arr, int l, int m, int r);
void display(int *array, int size);

int main()
{
    int array[10] = {2, 1, 5, 3, 6, 9 , 8, 4, 10, 7};
    mergesort(array , 0 , 9);
    display(array, 10);
    return 0;
}
void mergesort(int *array, int l, int r) {
   if(l < r) {
      int m = l+(r-l)/2;
      // Sort first and second arrays
      mergesort(array, l, m);
      mergesort(array, m+1, r);
      merge(array, l, m, r);
   }
}
void merge(int *arr, int l, int m, int r){
    int i=0 , j=0 , k=l , nl = m - l +1 , nr = r-m;
    int larr[nl], arrr[nr];
    for(i = 0; i<nl; i++)
        larr[i] = arr[l+i];
    for(j = 0; j<nr; j++)
        arrr[j] = arr[m+1+j];

    i=0; j=0;
    while(i<nl && j<nr){
        if(larr[i]<arrr[j]){
            arr[k] = larr[i];
            i++; k++;
        }else{
            arr[k] = arrr[j];
            j++; k++;
        }
    }
    while(i<nl){
        arr[k] = larr[i];
        i++; k++;
    }
    while(j<nr){
        arr[k] = arrr[j];
        j++; k++;
    }
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}