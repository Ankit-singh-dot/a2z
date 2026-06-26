// check weather the array is sorted or not ? 

#include<iostream>
using namespace std;

//  brute approach 
// int sorted_array(int arr[] , int n){
//     int temp[n];
//     for(int i=0; i<n; i++){
//         temp[i] = arr[i];
//     }
//      sort(temp, temp+n);

//      for(int i = 0 ; i < n ; i++){
//         if(arr[i] != temp[i]){
//             return false ;
//         }
//      }
//      return true ; 
// }
// int main(){
//     int n ; 
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i] ; 
//     }
//     cout << sorted_array(arr , n) ;
// }


//  optimal approach 
bool sorted_array(int arr[] , int n ){
    for(int i = 0 ; i < n-1 ; i++){
        if(arr[i] > arr[i+1]){
            return false ;
        }
    }
    return true ;
} 
int main(){
    int n ; 
    cin >> n ;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ; 
    }
    cout << sorted_array(arr , n) ;
    return 0;
}