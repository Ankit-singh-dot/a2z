#include<iostream>
using namespace std;

void pattern(int i , int sum){
    if(i < 0 ){
    cout << sum ; 
        return ; 
    }
    pattern(i -1 , sum + i);
}
int main(){
    pattern(10,0);
}