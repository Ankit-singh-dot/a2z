#include<iostream>
using namespace std;
// void remove_zero(vector<int> &a , int n ){

//     vector<int> temp;
//     for(int i = 0 ; i < n ; i++){
//         if(a[i] != 0){
//             temp.push_back(a[i]) ;
//         }
//     }
//     int nz = temp.size();
//     for(int i =0 ; i<nz ; i++){
//         a[i] = temp[i] ; 
//     }
//     for(int i = nz ; i < n ; i++){
//         a[i] = 0 ;
//     }
// }
// int main(){

//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     remove_zero(arr, n);

//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;


// }




//  two pointer approach optimal solution 

void moveZeroes(int arr[], int n){

    int j = -1;

    for(int i = 0; i < n; i++){

        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    if(j == -1)
        return;

    for(int i = j + 1; i < n; i++){

        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    moveZeroes(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}