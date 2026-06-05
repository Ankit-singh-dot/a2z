#include<iostream>
using namespace std;
// int main(){
//     cout << "ankit" << endl << "raj"<< endl;
// } out and thing done . 

// int main (){
//     int x , y ;
//     cin >> x >> y;
//     cout<< "value of x :" << x << "and value of y is :"<< y ;
//     return 0;
// }

// int main (){
//     string s1;
//     string s2;
//     cin >> s1 >> s2 ;
//     cout<< s1 << " " << s2 ;
//     return 0;

// } this one is for the picking up doesn;t work after the space 


//  work also after the space we should use
// int main(){
//     string str;
//     getline(cin,str);
//     cout << str;
//     return 0;

// }

// q1 :- 
// int main(){
//     int a1;
//     cout<< "enter the age :" ; 
//     cin >> a1 ;
//     if (a1 >= 18)
//     {
//         cout<< "the user is adult :" << a1 ;
//         return 0 ;
//     } else {
//         cout << "not an adult" ; 
//     }
    
// }

// q2 

// int main(){
//     int marks; 
//     cin >> marks ; 
//     if ( marks < 25 ){
//         cout << "F"; 
//     } 
//     else if (  marks <= 44  )
//     {
//         cout << "E" ;
//     }
//      else if ( marks <= 49  )
//     {
//         cout << "D" ;
//     }
//     else if ( marks <= 59  )
//     {
//         cout << "C" ;
//     }
//     else if ( marks <= 79  )
//     {
//         cout << "B" ;
//     }
//     else if ( marks <= 100  )
//     {
//         cout << "A" ;
//     }

// }

// Q3 

// int main(){
//     int age;
//     cout << "enter the age : ";
//     cin >> age ;
//     if (age <= 18){
//         cout<<"not eligible for the job" ;
//     } 
//     else if( age <=54  ){
//         cout << "eligible for the job";
//     }
//     else if(  age<= 57){
//         cout << "eligible for the job but retirement soon";
//     }
//     else if( age > 57){
//         cout << "retirement time ";
//     }
//     return 0;

// }

//  switch 
// int main (){
//     int day;
//     cout << "enter the day" ; 
//     cin >> day;
//     switch (day)
//     {
//     case 1 :
//         cout << "monday"; 
//         break;
//     case 2 :
//         cout << "tuesday"; 
//         break;
//     case 3 :
//         cout << "wed"; 
//         break;
//     case 4 :
//         cout << "thu"; 
//         break;
//     case 5 :
//         cout << "fri"; 
//         break;
//     case 6:
//         cout << "sat"; 
//         break;
//     case 7:
//         cout << "sun"; 
//         break;
//     default:
//      cout << "invalid number" ;
//         break;
//     }
//     return 0;
// }


//  array very basics 
// int main(){
//     int arr[5];
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] ;  
//     cout << arr[2];
// }

// for loops 

// int main(){
//    int i;
//    for(i =1 ; i <= 5 ; i++){
//     cout << "ANkit" << i << endl ;
//    }
//    return 0 ;
// }

//  while and do while 
// int main (){
//     int i = 1 ;
//     while (i<=5)
//     {
//         cout << "ankit" << i << endl ;
//         i++;
//     }
    
// }

// int main (){
//     int i = 2 ;
//     do {
//         cout << "ankit" << i << endl;
//         i = i+1 ;
//     } while (i<=1);
// }

//  function : void || parameterised|| non-parameterised

// void sum(int num1 , int num2 ){
//     cout << num1+num2 << endl ;
// }

// int main (){
//     int num1;
//     cin >> num1;
//     int num2;
//     cin >> num2 ;
//     sum(num1,num2);

//     int sum1;
//     cin >> sum1;
//     int sum2;
//     cin >> sum2 ;
//     sum(sum1,sum2);
// }


// pass by value 
// void doSomething(int  &num1){
//     cout << num1 << endl;
//     num1+=5;
//     cout << num1 << endl;
//     num1+=10;
//     cout << num1 << endl;

// }
// int main (){
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;
// }

void doSomething(int arr[] , int n){
    arr[0] = 100;
    cout << "Value inside function " << arr[0] << endl;
}
int main(){
    int n = 5;
    int arr[n]; 
    for(int i = 0; i<=n; i++){
        cin >> arr[i];
    }
    doSomething(arr , n);
    cout<< "value inside int main: " << arr[0] << endl;
    return 0;
}