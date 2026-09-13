// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int ispossible(vector <int> &arr , int n  , int c , int mid){
    int cow = 1;
    int lastpos= arr[0];

    for(int i = 1; i<n; i++){
        if((arr[i] - lastpos) >= mid){
            cow++;
            lastpos = arr[i];
            
        }
        if(cow == c){
            return true;
            
        }
       
        
    }
    return false;
}

int getaggresive(vector <int> &arr , int n  , int c){
    sort(arr.begin() , arr.end());
    int minv = arr[0];
    int maxv = arr[n-1];
    int start = 0 , end = maxv - minv , ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(ispossible(arr , n , c ,mid)){
            ans = mid;
            start = mid + 1;
            
        }else{
            end = mid - 1;
            
        }
    }

    return ans;
}




int main() {

    vector <int> arr = {1,2,3,4,5};

    int n =5 , c =3;

    cout<<getaggresive(arr , n , c)<<endl;
    

    return 0;
}