#include<iostream>
using namespace std;

void whichWeekDay(int day){
    switch (day)
    {
    case 1 :
        cout << "monday"; 
        break;
    case 2 :
        cout << "tuesday"; 
        break;
    case 3 :
        cout << "wed"; 
        break;
    case 4 :
        cout << "thrusday"; 
        break;
    case 5 :
        cout << "friday"; 
        break;
    case 6 :
    cout << "sat"; 
        break;
    case 7:
    cout << "sun";
    default:
        cout <<"invalid number";
    }
}

int main (){
    whichWeekDay(5);
}