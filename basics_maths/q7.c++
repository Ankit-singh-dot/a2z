#include<iostream>
using namespace std ;
void pattern(int n){
    int count = 0 ;
    for(int i = 0 ; i<=n; i++){
        if(n%i==0 && n%n ==0){
            count ++ ;
        }
    }
    if (count >2){
            cout << " this is not a prime number";
        } else{
            cout << "this is a prime number ";
        }
}
int main(){
    int m;
    cin >> m;
    pattern(m);
}