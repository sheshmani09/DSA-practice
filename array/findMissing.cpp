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