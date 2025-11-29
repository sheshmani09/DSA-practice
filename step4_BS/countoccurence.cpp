#include <bits/stdc++.h>
using namespace std;
    int searchFirst(vector<int>& nums, int target) {
        int ans=-1;
        int low=0,high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                high = mid-1;
            }else if(nums[mid]<target){
                low =  mid+1;
            }else high=mid-1;
        }
        return ans;
    }
    int searchLast(vector<int>& nums, int target) {
        int ans=-1;
        int low=0,high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                low = mid+1;
            }else if(nums[mid]<target){
                low =  mid+1;
            }else high=mid-1;
        }
        return ans;
    }
int occurence(vector<int>&arr, int k){
    int first = searchFirst(arr,k);
    int last = searchLast(arr,k);
    return last-first+1;
}
int main() {
    int n,k;
    cin >> n>>k;
    vector<int> arr(n);
    for (int &x : arr)  cin >> x;
    cout<<"it appears "<<occurence(arr,k)<<" times";
    return 0;
}