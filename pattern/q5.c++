#include<iostream>
using namespace std;
//  going through the normal j score 
// void pattern(int n){
//     for(int i = 1 ;i<=n;i++){
//         for(int j=n;j>=i;j--){
//             cout << "x" << " ";
//         }
//         cout << endl ;
//     }
// }
// int main(){
//     int n ;
//     cin >> n;
//     pattern(n);
// }

void pattern(int n){
    for(int i = 1 ;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout << "x" << " ";
        }
        cout << endl ;
    }
}
int main(){
    int n ;
    cin >> n;
    pattern(n);
}

