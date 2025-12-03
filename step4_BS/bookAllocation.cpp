#include <bits/stdc++.h>
using namespace std;
bool canAllocate(vector<int>&arr, int k, int mid){
    int student =1, pages=0;
    for(int p:arr){
        if(pages+p <= mid){
            pages+=p;
        }else{
            student++;
            pages = p;
            if(student>k) return false;
        }
    }
    return true;
}
int bookAllocation(vector<int>& arr, int k){
    int low = 0, high=0;
    for(int pages : arr){
        low= max(low,pages);
        high += pages; 
    }
    while(low<=high){
        int mid = (low+high)/2;
        if(canAllocate(arr,k,mid)){
            high =mid-1;
        }else low =mid+1;
    }
    return low;
}
int main() {
    int n,students;
    cin>>n>>students;
    vector<int> arr(n);
    for(int &x : arr) cin>>x;
    cout<<"answer "<<bookAllocation(arr,students);
    return 0;
}