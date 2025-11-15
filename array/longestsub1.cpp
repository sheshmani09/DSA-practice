
//longest subarray with sum k (positive only)

#include <bits/stdc++.h>
using namespace std;
int longest_subArray(vector<int>a,int k){
    int l=0,r=0,maxL=0;
    int sum= a[0];
    int n= a.size();
    while(r<n){
        while(l<=r && sum>k){
            sum-=a[l];
            l++;
        }
        if(sum==k){
            maxL = max(maxL, r-l+1);
        }
        r++;
        if(r<n) sum+=a[r];
    }
    return maxL;
}
int main() {
    int n,k;
    cin>>n;
    vector<int> arr(n);
    for(int &x: arr) cin>>x;
    cin>>k;
    cout<<longest_subArray(arr,k);
    return 0;
}