#include<iostream>
using namespace std;
void pattern(int n){
    for(int i = 0 ; i <2*n-1 ; i++){
        if(i >= n ){
            for(int j = 0 ; j <i ; j++){
                cout << "X" << " " ;
            } 
        } else{
            for(int j = 0 ; j < 2*n-i ; j++){
                cout << "X" ;
            }
        }

        cout << endl ;
    }

}

int main(){
    int m;
    cin >> m;
    pattern(m);
}