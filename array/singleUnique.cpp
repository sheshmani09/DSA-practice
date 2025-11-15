#include <bits/stdc++.h>
using namespace std;
int find_single(vector<int>&arr, int n){
    for (int  i = 0; i < n; i++)
    {
        int num = arr[i],cnt=0;
        for(int j=0;j<n;j++){
            if(num==arr[j]) cnt++;
        }
        if(cnt==1) return num;
    }
    return -1;
}
int main() {
     int n;
    cin>>n;
    vector<int> arr(n);
    for(int &x : arr) cin>>x;
    cout<<find_single(arr,n);
    return 0;
}
//optimal solution
//  int singleNumber(vector<int>& nums) {
//         int xr = 0;
//         for(int i=0;i<nums.size();i++){
//             xr^=nums[i];
//         }
//         return xr;
//     }