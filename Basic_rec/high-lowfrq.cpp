#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if (n == 0) {
        cout << "empty array \n";
        return 0;
    }
    vector <int> arr(n);
    unordered_map<int,int> frq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        frq[arr[i]]++;
    }
    int mini=INT_MAX,maxi=0;
    for(auto it: frq){
        maxi = max(it.second,maxi);
        mini = min(it.second,mini);
    }
    cout<<"highest count is "<<maxi<<endl;
    cout<<"lowest count is "<<mini<<endl;
    return 0;
}