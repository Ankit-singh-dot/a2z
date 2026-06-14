// #include<iostream>
// using namespace std;
// void pattern(int count , int n  ){
//     if(n > count){
//         return ; 
//     }
//     cout << count ; 
//     pattern(count - 1 , n );
// }
// int main(){
//     pattern(10, 1); 
// }

//  backtracking 
#include<iostream>
using namespace std;
void pattern(int count , int n  ){
    if(n > count){
        return ; 
    }
    pattern(count - 1 , n ); 
// => first this function is called then after other function is done it gives the print line statement to execute things 
    cout << count ; 
}
int main(){
    pattern(10, 1); 
}