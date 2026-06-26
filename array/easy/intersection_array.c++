// 
#include<iostream>
using namespace std ;
#include<set>
// vector<int> inter(int a[] , int b[] ,int n1 , int n2  ){
//     set<int> st;
//     for(int i = 0 ; i < n1 ; i++ ){
//         for(int j = 0 ; j < n2 ; j ++){
//             if (a[i] == b[j]){
//                 st.insert(a[i]) ;
//             }
//         }
//     }
//     vector<int> temp ;
//     for(auto it : st){
//         temp.push_back(it) ; 
//     }
//     return temp ; 
// }   
// int main(){
//     int n1 ;
//     cin >> n1;
//     int a[n1] ;
//     for(int i = 0; i < n1; i++){
//         cin >> a[i];
//     }
//     int n2;
//     cin >> n2;

//     int b[n2];
//     for(int i = 0; i < n2; i++){
//         cin >> b[i];
//     }
//     vector<int> ans = inter(a, b, n1, n2);

//     for(int x : ans){
//         cout << x << " ";
//     }
//     return 0;

// }


//  optimal_solution 


vector < int > intersection (vector < int > a, vector < int > b){
    int i = 0 ; 
    int j = 0 ;
    vector < int> ans ;
    while (i < a.size() && j < b.size())
    {
        if(a[i] < b[j]){
            i++ ;
        }
        else if(a[i] > b[j]){
            j++;
        }
        else{

            ans.push_back(a[i]);

            i++;
            j++;
        }
    }
    return ans;

}

int main(){
    int n1 ;
    cin >> n1 ;
    vector <int > a(n1) ;
     for(int i = 0 ; i < n1  ; i ++){
        cin >> a[i];
    }
    int n2 ;
    cin >> n2 ;
    vector <int > b(n2) ;
     for(int i = 0 ; i < n2  ; i ++){
        cin >> b[i];
    }
    vector <int> ans = intersection(a,b) ;
    for(int x :ans ){
        cout << x << " " ;
    }
    return 0 ;
} 