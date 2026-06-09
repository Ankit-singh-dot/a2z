#include<iostream>
using namespace std;
void pattern(int n){
        int startPoint  = 0;
    for(int i = 1;i<=n;i++){
        if( i %2 == 0) startPoint = 1;
        else startPoint =0 ;
        for(int j = 0 ;j<=i;j++ ){
            cout << startPoint ;
            startPoint = 1- startPoint;
        }
        cout << endl ;
    }
}
int main(){
    int n;
    cin >> n; 
    pattern(n);
}