#include<iostream>
using namespace std;

int main (){
    int arr[] = {10,4,5,3,2,1} ;
    int n = sizeof(arr)/ sizeof(arr[0]);
    sort(arr,arr+n);
    
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    return 0; 
}

