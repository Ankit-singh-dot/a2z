#include<iostream>
using namespace std;
//  brute approach 
// int second_largest(int arr[] , int n ){
//     sort(arr, arr+n);
//     int largest = arr[n-1] ;
//     for(int i = n-2; i >= 0 ; i--){
//         if (arr[i] != largest){
//             return arr[i] ;
//         }
//     }
//     return arr[n-2]; 
// }
// int main(){
//     int n ; 
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i] ; 
//     }
//     cout << second_largest(arr , n) ;
// }


// optimal approach 


// int second_largest(int arr[] , int n){
//     int largest = arr[0] ;
//     int second_largest= -1 ;
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] > largest) {
//             // second_largest = largest ; 
//             largest = arr[i] ; 
//         }
//     }

//     for(int i = 0 ; i< n ; i++){
//         if(arr[i] > second_largest && arr[i] != largest){
//             second_largest = arr[i] ; 
//         }
//         // return second_largest ; 
//     }
//     // return largest;
//     return second_largest ; 
// }
// int main(){
//     int n ; 
//     cin >> n ;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i] ; 
//     }
//     cout << second_largest(arr , n) ;
// }

// best approach 

int second_largest(int arr[] , int n ){
    int largest = arr[0] ;
    int second_largest= -1 ;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > largest) {
            second_largest = largest ; 
            largest = arr[i] ; 
        } else if(arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i] ; 
        }
    }
    return second_largest ; 
}
int main(){
    int n ; 
    cin >> n ;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ; 
    }
    cout << second_largest(arr , n) ;
}