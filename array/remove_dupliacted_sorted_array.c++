#include<iostream>
#include<set>
using namespace std;


// int removeDuplicates(int arr[] , int n){
//     set<int> st;
//      for(int i = 0; i < n; i++){
//         st.insert(arr[i]);
//     }

//     int index = 0 ; 
//     for(auto it : st){
//         arr[index] = it;
//         index++;
//     }
//         return index;
// }



// int main(){

//     int n;
//     cin >> n;

//     int arr[n];

//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     int k = removeDuplicates(arr, n);

//     for(int i = 0; i < k; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

int remove_duplicate(int arr[], int n){
    int i = 0 ; 
    for(int j = 1 ; j < n ; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j] ; 
        }
    }
}
int main(){
int n;
cin >>n ;
int arr[n];
for(int i = 0 ; i < n ; i++){
    cin >> arr[i] ;
}
remove_duplicate(arr, n)
}