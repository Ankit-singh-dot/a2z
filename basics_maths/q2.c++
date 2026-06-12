#include<iostream>
using namespace std;
void pattern(int n){
    int totalNumber = 0 ; 
    while (n>0)
    {
        int lastDigit = n % 10 ;
        cout << lastDigit ;
        totalNumber++;
         n= n/10;
    }
    cout << endl;
        cout << totalNumber;
    
}
int main(){
    int m;
    cin >> m;
    pattern(m);
}