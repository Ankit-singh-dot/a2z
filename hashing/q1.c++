#include<iostream>
using namespace std;
int count( int m[] ,int n, int digit){
    int count = 0 ;
    for(int i = 0 ; i <= n ; i++){
        if(digit == m[i]){
            count = count +1 ;
        }
    }
    return count ; 
}

int main(){
    int a [] = {1,3,3,4,5} ; 
    int n = sizeof(a) / sizeof(a[0]);
    int digit ;
    cin >> digit ;
    cout << count(a,n,3);
}