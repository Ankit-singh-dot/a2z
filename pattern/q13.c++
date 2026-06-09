#include<iostream>
using namespace std;
void pattern(int n ){
    int sum = 1 ; 
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << sum << " " ; 
            sum = sum + 1;
        } 
        cout << endl;
    }
}

int main(){
    int m ; 
    cin >> m;
    pattern(m);
}
