#include <bits/stdc++.h>
using namespace std;
int find_sqrt(int n){
    int low= 1, high = n;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(mid > n/mid){
            high =mid -1;
        }else{
            low= mid+1;
        }
    }
    return high;
}
int main() {
    int n;
    cin>>n;
    cout<<find_sqrt(n);
    return 0;
}