 // Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void selectionsort(int arr[] , int n){
  
    for(int i = 0; i<n-1; i++){
          int smallidx = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[smallidx]){
                smallidx = j;
            }
        }
        swap(arr[i] , arr[smallidx]);
    }
}

void printarr(int arr[] , int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }

    cout<<endl;
    
}


int main() {

    int arr[] = {1,12,3,4,5};

    int n =5;
    selectionsort(arr , n);
    printarr(arr ,n);
    

    return 0;
}