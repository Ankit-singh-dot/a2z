#include<iostream>
using namespace std ;
void pattern(int n){
    int numbers = 0 ;
    for(int i =0 ; i <= n ; i++){
        if (n%i == 0){
            cout << i ; 
        }

    }
}
int main(){
    int m ;
    cin >> m;
    pattern(m);
}