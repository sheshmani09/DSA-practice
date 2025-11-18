#include <bits/stdc++.h>
using namespace std;
void arrayLeaders(vector<int>&arr,int n){
   vector<int>leaders;
   int right = -1;
   for (int i = n-1; i >=0; i--)
   {
    if(arr[i]>right){
        leaders.push_back(arr[i]);
        right = arr[i];
    }
   }
   reverse(leaders.begin(),leaders.end());
   for(int x:leaders) cout<<x<<" ";
    
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int &x : arr) cin>>x;
    arrayLeaders(arr,n);
    return 0;
}

// for(int i=0;i<n;i++){
//     bool leader = true;
//     for(int j=i+1;j<n;j++){
//         if(arr[j]>arr[i]){
//             leader = false;
//             break;
//         }  
//     }
//     if(leader) leaders.push_back(arr[i]);
//    } 