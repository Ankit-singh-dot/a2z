#include<iostream>
using namespace std;
int forLoop(int low , int high){
    int sum = 0 ; 
    for(int i=low; i <=high; i++){
        sum = sum + i;
    }
    cout << sum;
    return 0;
}
int main(){
    forLoop(3,7);
}