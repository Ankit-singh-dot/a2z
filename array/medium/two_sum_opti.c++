#include<iostream>
using namespace std;
vector<int> two_sum(int arr[] ,int n , int target ){
    unordered_map<int , int > mp ;
    for(int i = 0 ; i < n ; i++){
        int need = target - arr[i] ;
        if(mp.find(need) != mp.end())
        {
            return {mp[need] , i};
        }
         mp[arr[i]] = i;
    } 
        return {};
}

int main()
{
    int target;
    cin >> target;

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> ans = two_sum(arr, n, target);

    if(ans.empty())
    {
        cout << "No pair found";
    }
    else
    {
        cout << "Indices: " << ans[0] << " " << ans[1] << endl;
    }
}