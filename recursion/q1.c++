// using loops 
#include<iostream>
using namespace std;
// void call(string m , int n){
//     for(int i = 0 ; i < n ; i++){
//         cout << m ;
//     }
// }
// int main(){
//     int a ; 
//     cin >> a ;
//     string s ; 
//     cin >> s;
//     call(s,a);
// }


//  using Recursion


void printName(int count){
    if(count == 5){
        return ;
    }
    cout <<"Ankit" << endl;
    printName(count +1);
}
int main(){
    printName(0);
    return 0;
}