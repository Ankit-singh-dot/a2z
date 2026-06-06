#include<iostream>
using namespace std;

void StudentGrade(int n){

    if(n > 100){
        cout << "invalid number only between 0 to 100"; 
    }else if (n >= 90)
    {
        cout << "Grade A";
    }
     else if ( n >= 70 )
    {
         cout << "Grade B"; 
    } else if ( n >= 50 )
    {
        cout << "Grade C"; 
    }
    else if ( n >= 35)
    {
        cout << "Grade D" ; 
    }
    else{
        cout << "fail" ;  
    }
}
int main(){
    StudentGrade(100);
}