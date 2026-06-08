#include<iostream>
using namespace std;
void pattern(int n){
    for(int i = 0;i <= (2*n-1);i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<< "x";
        }
        cout << endl;
    }
    cout << endl  ;
}
int main(){
    int n;
    cin>>n;
    pattern(n);
}