#include<iostream>
using namespace std;
int pattern(int n){
    if(n==0){
        return 0;
    }
    return n+(pattern(n-1));
}
int main(){
    cout << pattern(3);
}
