#include<iostream>
using namespace std;
void pattern(int n){
    for(int i = 1 ; i <= n ; i++){
    char ch = 'A';
        for(int j = 1 ; j <= n - i + 1 ; j ++){
            //  char ch = 'A';
            cout << ch  << " ";
            ch =ch+1 ; 
        }
    cout << endl ; 
    }

}
int main(){
    int n ; 
    cin >> n ;
    pattern(n);
}