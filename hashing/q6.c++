
// max element and min element in the 
#include<iostream>
using namespace std;
int main (){
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    // hash 
    int hash[256] = {0} ; 
    for(int i = 0 ; i < n ; i++){
        hash[arr[i]]++;    
    }
    int maxFreq = 0;
     int maxElement = 0;
     for(int i = 0 ; i < n ; i++){
        if(hash[arr[i]] > maxFreq){
            maxFreq = hash[arr[i]] ;
            maxElement = arr[i];
        }
     }

     cout << "this is the max element " << maxElement;
     cout << "this is the max freq " << maxFreq;

     int minFreq = n ;
     int minElement = 0;
     for(int i = 0 ; i <n ; i++){
        if(hash[arr[i]] < minFreq){
            minFreq = hash[arr[i]];
            minElement = arr[i];
        }
     }
     cout << "this is the min element " << minElement;
     cout << "this is the min freq " << minFreq;
}