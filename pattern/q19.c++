#include<iostream>
using namespace std;
void pattern(int n){
    for(int i = 1 ; i <= n; i++){
        for(int j = 0 ; j< n-i+1;j++){
            cout << "x" ;
        }

        for(int j = 0 ; j< 2*i -2 ; j++){
            cout << " "  ;
        }

         for(int j = 0 ; j< n-i+1;j++){
            cout << "x" ;
        }

        cout << endl ;
    }
}
int main(){
    int m ; 
    cin >> m;
    pattern(m);
}