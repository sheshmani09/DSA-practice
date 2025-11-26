// count subarray that gives xor k 
#include <bits/stdc++.h>
using namespace std;
int subArray(vector<int>&arr, int n,int k){
    int xr=0, cnt=0;
    unordered_map<int, int> mp;
    mp[0]=1;
    for (int i = 0; i < n; i++)
    {
        xr^=arr[i];
        int x = xr^k;
        //formula used 
        //prefixXOR[i-1] = prefixXOR[j] ^ k
        if(mp.find(x)!=mp.end()){
            cnt+=mp[x];
        }
        mp[xr]++;
    }
    return cnt;
}
int main() {
     int n,k;
    cin >> n;
    cin>>k;
    vector<int> arr(n);
    for (int &x : arr)
        cin >> x;
    cout << subArray(arr, n, k);
    return 0;
}

//brute force
// int subArray(vector<int>&arr, int n,int k){
//     int cnt=0;
//     for (int i = 0; i < n; i++)
//     {
//         int xr=0;
//         for(int j=i;j<n;j++){
//             xr = xr^arr[j];
//             if(xr==k) cnt++;
//         }
//     }
//     return cnt;
// }