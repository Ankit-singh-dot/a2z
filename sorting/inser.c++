#include<iostream>
using namespace std;


void insert(int arr[] , int n ){
    for(int i = 1; i < n-1 ; i++){
        int current = arr[i] ; 
        int j = i-1 ;
        while(j>= 0 && arr[j] > current){
            arr[j+1] =arr[j] ;
            j--;
        }
        arr[j+1] = current;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insert(arr, n);
    for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
    }
}