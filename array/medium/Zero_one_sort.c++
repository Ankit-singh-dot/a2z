#include<iostream>
using namespace std ;
void zero_one(int arr[] ,int n ){
    int count0 = 0 ;
    int count1 = 0 ;
    int count2 = 0 ;
    for(int i = 0 ; i <n ; i++){
        if(arr[i] == 0)
        count0 ++;
        else if(arr[i] == 1)
        count1++;
        else 
        count2++;
    }
    int index = 0 ;
     while(count0--)
        arr[index++] = 0;

    while(count1--)
        arr[index++] = 1;

    while(count2--)
        arr[index++] = 2;
 } 