#include <bits/stdc++.h>
using namespace std;
int missing_num(vector<int> &arr){
 int n= arr.size();
 int exp = (n*(n+1))/2;
 int sum=0;
 for (int i = 0; i < n; i++)
 {
    sum+=arr[i];
 }
 return exp-sum;
 
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int &x : arr) cin>>x;
   cout<<"missing number is "<< missing_num(arr);
    return 0;
}


//another optimal approach
// int missingNumber(vector<int>& arr) {
//     int n = arr.size();
//     int xr = 0;

//     // XOR numbers from 0 to n
//     for (int i = 0; i <= n; i++) {
//         xr ^= i;
//     }

//     // XOR all elements of the array (normal loop)
//     for (int i = 0; i < n; i++) {
//         xr ^= arr[i];
//     }

//     return xr;
// } this is better because value of n might oveflow 
