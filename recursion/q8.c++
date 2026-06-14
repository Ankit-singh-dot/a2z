#include<iostream>
using namespace std;
void pattern(int a[], int i, int n){
    if(i >= (n/2)){
        return  ;
    }
    swap(a[i], a[n-i-1]);
    pattern(a, i+1 , n); 
}

int main(){
    int a[] = {1, 2, 3, 4, 5};
     int n = sizeof(a) / sizeof(a[0]);

    pattern(a, 0, n);

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}