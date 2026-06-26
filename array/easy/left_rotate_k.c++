#include<iostream>
using namespace std;
// void left_rotate_k(int d ,int arr[] , int n){
//     d = d% n ;
//      int temp[d] ;
//      for(int i = 0 ; i < d ; i++){
//         temp[i] = arr[i] ; 
//      }
//      for(int i = d ; i < n ; i++){
//         arr[i-d] = arr[i] ;
//      }
//      int j= 0; 
//      for(int i = n-d; i < n; i++){
//         arr[i] =  temp[j] ;
//         j++ ;
//      }


// }
// int main(){
//     int d ;
//     cin >> d ; 
//     int n ; 
//     cin >> n;
//     int arr[n] ; 
//     for(int i=0 ; i < n; i++){
//         cin >> arr[i] ; 
//     }
//     left_rotate_k(d, arr ,n ) ;
//     for(int i = 0 ; i < n ; i++){
//     cout << arr[i] << " ";
//  }
// }



//  optimal approach  
void left_rotate(int d ,int arr[] , int n){
    reverse(arr, arr+d) ;
    reverse(arr+d , arr+n) ; 
    reverse(arr, arr+n) ; 
}
int main(){
    int d ;
    cin >> d; 
    int n;
    cin >> n;
    int arr[n] ;
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    left_rotate(d , arr ,n ) ;
    for(int i =0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}
