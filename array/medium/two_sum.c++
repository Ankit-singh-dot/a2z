#include<iostream>
using namespace std;
void twosum(int arr[] ,int target , int n){

    for(int i = 0 ; i < n ; i++ ){
        for(int j= 0 ; j < n ; j++){
            if(arr[i] + arr[j] == target ){
        cout << "yes the sum exist in the array" << endl ;
    } else{
        cout << "the sum doesn't exits" << endl ;
    }
        }
    }
    
}
int main(){
    int target ;
    cin >> target ;
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i =0 ; i < n ; i++){
        cin >> arr[i] ;
    }
twosum(arr ,target , n ) ;
}