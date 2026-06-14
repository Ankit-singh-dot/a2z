#include<iostream>
using namespace std;
void pattern( int a[] ,int l ,int r){
    if(l>=r){
        return ;
    }   
    
    swap(a[l], a[r]) ; 
    pattern(a,l+1 , r-1 ) ;
}
int main(){
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;

    pattern(a, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}