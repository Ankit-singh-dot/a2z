#include<iostream>
using namespace std ; 
void pattern(int n){
    for(int i = 1 ; i<=n;i++){
        for(int j = n ; j>=i ;j--){
            cout << j <<" ";
        }
        cout << endl ; 
    }
}
int main(){
    int m;
    cin >> m;
    pattern(m);
}