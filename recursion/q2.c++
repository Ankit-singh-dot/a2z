#include<iostream>
using namespace std;
void pattern(int i , int n){
    if(i >n ){
        return ;
    }
    cout << i << " ";
    pattern(i + 1, n);
}
int main(){
    pattern(1,5) ;
}