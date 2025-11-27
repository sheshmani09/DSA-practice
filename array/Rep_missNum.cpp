// repeating and missing number
#include <bits/stdc++.h>
using namespace std;
void miss_rep(vector<int> &arr, int n){
    
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    miss_rep(arr, n);
    return 0;
}

//hashing version
// void miss_rep(vector<int> &arr, int n){
//     vector<int> frq(n+1,0);
//     for(int i=0;i<n;i++){
//         frq[arr[i]]++;
//     }
//     for(int i=1;i<=n;i++){
//         if(frq[i]==2) cout<<"repeating is "<<i<<endl;
//         if(frq[i]==0) cout<<"missing is "<<i<<endl;
//     }
// }