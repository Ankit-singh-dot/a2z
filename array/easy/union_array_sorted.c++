#include<iostream>
using namespace std;
#include<set>
// vector <int> sortedArray(vector <int> a , vector < int> b ){
//     int n1 = a.size();
//     int n2 = b.size();
//     set<int> st;   
//     //  why set because isme duplicate nahi allow karta .. 
//     for(int i = 0 ; i < n1 ; i ++){
//         st.insert(a[i]) ;
//     }
//     for(int i = 0 ; i < n2 ; i ++){
//         st.insert(b[i]) ;
//     }
//     vector<int> temp; 
//     for(auto it : st){
//         temp.push_back(it);
//     }
//     return temp ; 
// }



//  best approach two pointer 

vector < int > sortedArray(vector < int> a  ,vector < int > b  ){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0 ; 
    int j = 0 ;
    vector <int > unionArray ;
    while( i< n1 && j < n2){
        if(a[i] <= b [j]){
            if(unionArray.size() == 0 || unionArray.back() != a[i]){
                unionArray.push_back(a[i]) ;
            }
            i++ ; 
        }
        else{
            if(unionArray.size() == 0 || unionArray.back() != b[j]){
                unionArray.push_back(b[j]) ;
            }
            j++ ; 
        }
}
while(j<n2){

            if(unionArray.size() == 0 || unionArray.back() != b[j]){
                unionArray.push_back(b[j]) ;
            }
            j++ ; 

}

while(i<n1){
            if(unionArray.size() == 0 || unionArray.back() != a[i]){
                unionArray.push_back(a[i]) ;
            }
            i++ ; 
}
return unionArray ; 
}


int main(){
    int n1 ;
    cin >> n1 ;
    vector <int> a(n1) ; 
    for(int i = 0 ; i < n1  ; i ++){
        cin >> a[i];
    }
    int n2 ;
    cin >> n2 ;
    vector <int> b(n2) ; 
    for(int i = 0 ; i < n2  ; i ++){
        cin >> b[i];
    }
    vector < int> ans  = sortedArray(a,b) ;
    for(int x :ans ){
        cout << x << " " ;
    }
    return 0 ; 

}
