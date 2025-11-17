#include <bits/stdc++.h>
using namespace std;
void two_sum(vector<int> &arr, int target) {
    int l = 0, r = arr.size() - 1;

    while (l < r) {
        int sum = arr[l] + arr[r];
        if (sum == target) {
            cout << l << " " << r;
            return;
        }
        else if (sum < target) l++;
        else r--;
    }

    cout << "No pair";
}
int main() {
     int n,target;
    cin>>n;
    vector<int> arr(n);
    for(int &x: arr) cin>>x;
    cin>>target;
    two_sum(arr,target);
    return 0;
}