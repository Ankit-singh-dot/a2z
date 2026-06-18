//  swap the number using only one pointer and suing recursion 
#include<iostream>
using namespace std;
void pattern(int n1, int n2 ){
    int gcd = 1 ;
    for(int i =1 ; i <= min(n1 , n2) ; i++){
        if ( n1%i==0 && n2%i==0){
            gcd = i ;
        }
    }
        cout << gcd ; 
}
int main(){
    int m ;
    cin >> m ;
    int n;
    cin >> n;
    pattern(20,40);
}
