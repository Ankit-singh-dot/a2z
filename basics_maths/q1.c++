#include<iostream>
using namespace std;
void pattern(int n){
    while (n>0)
    {
        int lastDigit = n % 10 ;
        cout << lastDigit ;
        n= n/10 ; 
    }
    cout << endl ;
    
}

int main(){
    int m;
    cin >> m;
    pattern(m);
}