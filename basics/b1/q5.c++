#include<iostream>
using namespace std;
int functionSumm(int d){
    int sum = 0;
    for(int i =0 ; i<50;i++){
        sum += d + (i * 10);
    }
    return sum;
}
int main(){
    cout << functionSumm(1);
}


// while loop 

int functionSum(int d){
    int sum = 0;
    int updatedTime = 0;
    int currentNumber = d; 
    while (updatedTime < 50)
    {
        sum = sum + currentNumber ;
        currentNumber = currentNumber+10;
        cout << currentNumber << " ";
        updatedTime++ ;
    }
    return sum ;
}
int main() {
    cout << functionSum(1) << endl;
    return 0;
}