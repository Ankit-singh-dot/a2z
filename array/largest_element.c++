// brute force method : 
#include<iostream>
using namespace std;
// int largest (int arr[], int n){
//     sort(arr, arr+n) ;
//     return arr[n-1];
// }
// int main (){
// int arr [] = {7,2,9,4,1,8};
// int n = sizeof(arr)/sizeof(arr[0]);
// cout << largest(arr, n);
// return 0;
// }


//  optimal solution 


int largest(int arr[] , int n){
    int largest_element = arr[0];
    for(int i = 0 ; i < n ; i++){
        if( arr[i] > largest_element){
             largest_element = arr[i] ; 
        }
    }
    return largest_element ;
}
int main(){
 int n ;
 cin >> n;
 int arr[n] ; 
 for(int i = 0 ; i< n ; i++){
    cin >> arr[i] ; 
 }
 cout << largest(arr , n ) ;
return 0;
}
