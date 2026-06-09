#include<iostream>
using namespace std;
void pattern(int n){
    char ch = 'A'; 
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j<= i;j++){
            cout << ch  << " "; 
            ch = ch +1 ; 
        }
        cout << endl ; 
    }
}
int main (){
    int n ;
    cin >> n ;
    pattern(n);
}