#include<iostream>
using namespace std;

bool palindrome(string &m , int n ,int i ){
    if (i >= (n/2)){
        return true;
    }
    if(m[i] != m[n - i - 1]){
        return false;
    }
     return palindrome(m, i + 1, n);

}
int main(){
    string s ; 
    cin >> s;
    int n = s.length();
    if(palindrome(s,n,0)){
        cout << "Palindrome";
    } else{
          cout << "Not Palindrome";
    }
}