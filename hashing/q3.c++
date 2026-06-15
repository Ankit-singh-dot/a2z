#include<iostream>
using namespace std;
int main(){
    string s ;
    cin >> s;
    int hash[256] = {0}; 
    for(int i = 0 ; i <= s.length() ; i++){
        hash[s[i]]++ ;
    }
    char find ;
    cin >> find ;
    find = tolower(find);
    cout << hash[find - 'a'];
}