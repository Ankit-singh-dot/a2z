#include<iostream>
using namespace std;
void pattern(string &m , int n , int i){
    if (i >= (n/2)){
        return  ;
    }
    swap(m[i], m[n-i-1]);
    // cout << m;
    pattern(m,n,i+1);
    // cout << m;
}
int main(){
    string s ; 
    cin >> s;
    int n = s.length();
    pattern(s ,n ,0 );
    for(int i = 0 ; i < n ; i++){
        cout << s[i] << " ";
        
    }
    
    return 0; 
}