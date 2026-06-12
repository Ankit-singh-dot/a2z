// palindrome
#include<iostream>
using namespace std;
void pattern(int n){
  int finalNumber = 0 ;
  int reverse = n ; 
  while (n>0)
  {
    int lastDigit = n%10;
    finalNumber = (finalNumber * 10 )+ lastDigit;
    n = n/10 ;
  }
  cout << finalNumber;
  if(finalNumber == reverse){
    cout << "entered number is palindrome";
  } else{
    cout << "entered number is not palindrome";
  }
  
}

int main(){
    int m;
    cin >> m;
    pattern(m);
}