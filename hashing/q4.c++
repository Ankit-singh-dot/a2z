#include<iostream>
using namespace std;
int main(){
    string s ;
    cin >> s;
    int hash[256] = {0}; 
    for(char ch : s){
        ch = tolower(ch);
        hash[ch - 'a']++;
    }
    char find ;
    cin >> find ;
    find = tolower(find);
    cout << hash[find - 'a'];
}