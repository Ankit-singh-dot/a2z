// arstrong number 
#include<iostream>
using namespace std;
void pattern(int n ){
    int sum = 0 ;
    int reverseNumber= 0 ;
    while(n>0){
        int lastDigit = n%10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
        // reverseNumber = (reverseNumber*10)+ lastDigit ; 
        n =n/10;
    }
    cout << sum ; 
}
int main(){
    int m;
    cin >> m;
    pattern(m);
}