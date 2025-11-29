#include <bits/stdc++.h>
using namespace std;
//binary search version O(log n)
int lowerBound(vector<int>&arr,int k){ 
    int low=0, high = arr.size()-1,ans = arr.size();
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=k){
            ans=mid;
            high=mid-1;
        }else low=mid+1;
    }
    return ans;
}
int main()
{
    int n,k;
    cin >> n>>k;
    vector<int> arr(n);
    for (int &x : arr)  cin >> x;
    cout<<"index is "<<lowerBound(arr,k);
    return 0;
}

//iterative version  O(n)
// int lowerBound(vector<int>&arr,int k){
//     for (size_t i = 0; i < arr.size(); i++)
//     {
//         if(arr[i]>=k){
//             return i;
//         }
//     }
//     return -1;
// }