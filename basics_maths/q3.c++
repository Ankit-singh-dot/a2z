#include<iostream>
using namespace std;
void pattern(int n){
    int reverserNumber = 0 ; 
    while(n>0){
        int lastDigit = n%10;
        reverserNumber = (reverserNumber * 10) + lastDigit ;
        n = n/10;
    }
    cout << reverserNumber ;
}
int main(){
    int m ;
    cin >> m ;
    pattern(m);
}